#include<stdio.h>
int s[10],top=-1,i,item,n,ch;

void push();
void pop();
void display();

void main()
{

printf("\nEnter the size of stack");
scanf("%d",&n);

printf("\n1.Push\n2.Pop\n3.Display\n\4.Exit");
printf("\n Stack implementation using array");

do
{
printf("\n Enter your choice ");
scanf("%d",&ch);


switch(ch)
{
case 1:push();
       break;
case 2: pop();
       break;
case 3: display();
        break;
case 4:printf("Exit point\n");
       exit(0);
       break;
default:printf("Wrong entry\n");
}
}
while(ch!=4);
}

void push()
{
if(top>=n-1)
{
printf("Stack Overflow\n");
}
else
{
printf("Enter the item to be inserted\n");
scanf("%d",&item);
top++;
s[top]=item;
}
}
void pop()
{
if(top<=-1)
{
printf("Stack Underflow\n");

}
else
{
printf("\nDeleted element is %d",s[top]);
top--;
}
}
void display()
{ 
if(top>=0)
{
printf("The elements in satck are\n");
for(i=top;i>=0;i--)
{
printf("%d \t",s[i]);
}
}
else
{
printf("No elements\n");
}
}








