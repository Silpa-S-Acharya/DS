#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{int data;
struct npde*next;
};
struct node*top=0;

void main()
{int ch, val;
printf("-----Stack Using Linked List----\n");
do{
printf("\nMenu\n");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf
("Enter your choice\t");
scanf("%d",&ch);
switch(ch)
{case 1: printf("Enter the to be inserted ");
	scanf("%d",&val);
	push(val);
	break;
case 2: pop();
	break;
case 3 :display();
	break;
case 4 :exit(0);
	break;
default: printf("\n Wrong entry enter a valid choice\n");

}
}while(ch!=4);

}
void push(int val)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=0;

if(top==0)
{
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
printf("\nInsertion successful %d ",newnode->data);
}
void pop()
{
if(top==0)
{printf("\nStack is empty\n");
}
else
{
struct node*temp=top;
printf("\nDeleted element %d ",temp->data);
top=temp->next;
free(temp);
}
}
void display()
{
if(top==0)
{printf("\nStack is empty");

}
else
{struct node*temp=top;
printf("\nElements in stack are\n");
while(temp->next!=0)
{printf("%d----> ",temp->data);
temp=temp->next;

}
printf("%d---->NULL ",temp->data);

}
}
