#include<stdio.h>
void main()
{
int a[10],n,i,j,temp;
printf("Enter the array size ");
scanf("%d",&n);
printf("Enter the array elements\n");
for(i=0;i<n;i++)
{
printf("\nEnter the element %d-",i+1);
scanf("%d",&a[i]);
}
printf("\nArray elements before sort are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nArray elements after sort are\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}

