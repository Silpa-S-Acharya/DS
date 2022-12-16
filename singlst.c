#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void insertbeg();
void insertend();
void insertpos();
void display();
int ch,key;
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;
void insertbeg()
{
struct node *ptr;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{printf("\nNo space");
}
else
{
	printf("\nEnter the item to be inserted");
	scanf("%d",&ptr->data);
	ptr->next=NULL;

	if(head==NULL)
	{head=ptr;
	}
	else
	{
	ptr->next=head;
	head=ptr;
	}
	printf("\n%d Inserted into the list",ptr->data);
}
}
void insertend()
{struct node *temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=NULL;
temp=head;
if(ptr==NULL)
{printf("\nNo space");
}
else
{	while(temp->next!=NULL)
	{temp=temp->next;
	}
	printf("\nEnter the item to be inserted");
	scanf("%d",&ptr->data);
	temp->next=ptr;
	printf("\n%d Inserted into the list",ptr->data);

}
}
void insertpos()
{
int key;
struct node *ptr,*temp;
ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=NULL;
printf("\nEnter the value after which the new node to be inserted");
scanf("%d",&key);
temp=head;
while(temp->data!=key)
{temp=temp->next;

if(temp==NULL)
{printf("\n%dThe value does not exist",key);
break;
}
}

if(temp->data==key)
{
if(ptr==NULL)
 {printf("\nNo space");}
else
{
printf("\nEnter the item to be inserted");
scanf("%d",&ptr->data);
ptr->next=temp->next;
temp->next=ptr;
printf("\n%d Inserted after%d",ptr->data,key);
}
}
}
void deletefront()
{
struct node*temp;
temp=head;
head=temp->next;
printf("%d Deleted element is ",temp->data);
free(temp);
}
void deleteend()
{struct node*temp,*p;
temp=head;
while(temp->next!=0)
{
p=temp;
temp=temp->next;
}
printf("%d Deleted element is ",temp->data);
free(temp);
temp->next=0;
}
void deletepos()
{
struct node *temp,*p;
int val;
printf("Enter the value tobe dleted ");
scanf("%d",&val);
temp=head;
while(temp->data!=val)
{
p=temp;
temp=temp->next;
if(temp==0)
{
printf("value does not exist ");
break;
}

}
if(temp->data==val)
{

printf("The deleted node is %d",temp->data);
if(temp==head)
{ 
p=head;
head=temp->next;
 free(p);
  }
  else
  {

p->next=temp->next;

free(temp);}

}
}



void display()
{struct node *p;
if(head==NULL)
{printf("\nList is empty ");

}
else
{printf("\nElements in list are:");
p=head;
while(p!=0)
{printf("\t %d",p->data);
p=p->next;
}
}
}
void search()
{struct node*temp;
int val,pos=1;
temp=head;
printf("Enter the element to be searched ");
scanf("%d",&key);
while(temp->data!=key)
{temp=temp->next;
pos++;
if(temp==0)
{printf("\n %dThe value does not exist ",key);
break;
}
}
if(temp->data==key)
{printf("\n%dThe value found at position %d ", key, pos);
}
}
void main()
{int ch;
printf("\nSingly Linked List Operations\n");
printf("\n1.Insert Front\n2.Insert  end\n3.Insert after a node\n4.Delete from front\n5.Delete from end\n6.Deletion  a node\n7.Display\n8.Search\n");

do
{
printf("\nEnter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:insertbeg();
		break;
case 2:insertend();
		break;
case 3:insertpos();
		break;
case 4: deletefront();
	break;
case 5: deleteend();
	break;
case 6: deletepos();
	break;
case 7: display();
	break;
case 8: search();
	break;
default:printf("\nWrong entry");
}
}
while(ch!=9);
}

