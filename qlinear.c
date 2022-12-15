#include<stdio.h>
#include<stdlib.h>
int q[50],front=-1,rear=-1,n;
void enqueue();
void dequeu();
void display();

void main()
{int ch;


printf("-----Linear Queue----\n");
printf("\nEnter the number of elements to be inserted \n");
printf("Enter the size of the queue ");
scanf("%d",&n);
do{
printf("\nMenu\n");
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
printf
("Enter your choice\t");
scanf("%d",&ch);
switch(ch)
{case 1: insert();
	break;
case 2: delete();
	break;
case 3: display();
	break;
case 4: exit(1);
	break;
default: printf("\n Wrong entry enter a valid choice\n");

}
}while(ch!=4);

}

void enqueue()
{
int item;
if(front==-1 && rear==-1)
{front=0;
rear=0;
}
else{
if(front==-1)

front=0;
printf("Insert element in queue ");
scanf("%d",&item);
rear=rear+1;
q[rear]=item;
}
}
void delete()
{
if(front==-1)
{printf("Underflow");
}
else
{
printf("Deleted element %d",q[front]);
front=front+1;
}
}
void display()
{int i;
if(front==-1)
{
printf("Empty Queue ");
}
else
{
printf("Queue is :\n");
for(i=front;i<=rear;i++)
	{printf("%d\t",q[i]);
	}

}
}
