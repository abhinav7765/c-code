#include<stdio.h>
 int main()
{
int a[3][3],b[3][3],c[3][3],i,j,k;
 printf("Enter element of 1st matrix-\n");
for(i=0;i<3;i++)
{
  for(j=0;j<3;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

  printf("\nEnter element of 2nd matrix-");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  scanf("%d",&b[i][j]);
 }
}

 printf("\n1st matrix is :- \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d\t",a[i][j]);
 }
  printf("\n");
}
  
printf("\n2nd matrix is :-\n");

for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
{
  printf("%d\t",b[i][j]);
}
 printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
 {
  c[i][j]=a[i][j]+b[i][j];
 }
}
 
printf("\nsum of both matrix is :- \n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d\t",c[i][j]);
 }
  printf("\n");
}
 return 0;
} 