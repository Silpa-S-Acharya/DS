#include<stdio.h>
void main()
{int a[10],n,f=0,i,item;
printf("Enter the size of the array\t");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{printf("\nEnter the element-%d ",i+1);
scanf("%d",&a[i]);
}
printf("\nEnter the item to be searched\t");
scanf("%d",&item);
for(i=0;i<n;i++)
{if(a[i]==item)
{f=1;
break;
}
}

if(f==1)
{
printf("\nThe element found at position%d\t",i+1);
}
else
{
printf("Element not found");
}
}

