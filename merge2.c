#include<stdio.h>
void main()
{
int a[50],b[50],c[100],k=0,i,j,m,n;
printf("Enter the size of first array\t");
scanf("%d",&m);
printf("\nEnter the array elements");
for(i=0;i<m;i++)
{
printf("Enter element %d-",i+1);
scanf("%d",&a[i]);
}
printf("Enter the size of second array\t");
scanf("%d",&n);
printf("\nEnter the array elements\n");
for(i=0;i<n;i++)
{
printf("Enter element %d-",i+1);
scanf("%d",&b[i]);
}
i=0;
j=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{c[k]=a[i];
i++;
}
else
{
c[k]=b[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{c[k]=a[i];
i++;
k++;
}}
printf("Array after merge sort \n");
for(i=0;i<m+n;i++)
{printf("%d\t",c[i]);
}

}

