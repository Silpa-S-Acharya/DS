#include <stdio.h>
void main()
{
int U[5]={1,2,3,4,5},A[5]={1,0,0,1,1},B[5]={0,1,1,1,0},uni[5],ints[5],diffA[5],diffB[5],
i,compA[5],compB[5];
printf("The universal set=");
printf("{");
for(i=0;i<5;i++)
{
printf("%d ",U[i]);
}
printf("}");
printf("\nSet A=");
printf("{");
for(i=0;i<5;i++)
{
if(A[i]==1)
printf("%d ",U[i]);
}
printf("}");
77
printf("\nSet B");
printf("{");
for(i=0;i<5;i++)
{
if(B[i]==1)
printf("%d ",U[i]);
}
printf("}");
printf("\nUnion of A and B in Bit representation is: ");
for(i=0;i<5;i++)
{
uni[i]=A[i]|B[i];
printf("%d ",uni[i]);
}
printf("\nAUB={");
for(i=0;i<5;i++)
{
if(uni[i]==1)
printf("%d ",U[i]);
}
printf("}");
printf("\nIntersection of A and B in Bit representation is: ");
for(i=0;i<5;i++)
{
78
ints[i]=A[i]&B[i];
printf("%d ",ints[i]);
}
printf("\nAnB={");
for(i=0;i<5;i++)
{
if(ints[i]==1)
printf("%d ",U[i]);
}
printf("}");
printf("\nComplement of A in Bit representation is:");
for(i=0;i<5;i++)
{
compA[i]=1-A[i];
printf("%d ",compA[i]);
}
printf("\nA'={");
for(i=0;i<5;i++)
{
if(compA[i]==1)
printf("%d ",U[i]);
}
printf("}");
printf("\nComplement of B in Bit representation is: ");
79
for(i=0;i<5;i++)
{
compB[i]=1-B[i];
printf("%d ",compB[i]);
}
printf("\nB'={");
for(i=0;i<5;i++)
{
if(compB[i]==1)
printf("%d ",U[i]);
}
printf("}");
printf("\nDifference of A in Bit representation is:");
for(i=0;i<5;i++)
{
diffA[i]=A[i]&compB[i];
printf("%d ",diffA[i]);
}
printf("\nA-B={");
for(i=0;i<5;i++)
{
if(diffA[i]==1)
printf("%d ",U[i]);
}
80
printf("}");
printf("\nDifference of B in Bit representation is:");
for(i=0;i<5;i++)
{
diffB[i]=B[i]&compA[i];
printf("%d ",diffB[i]);
}
printf("\nB-A={");
for(i=0;i<5;i++)
{
if(diffB[i]==1)
printf("%d ",U[i]);
}
printf("}");
}
