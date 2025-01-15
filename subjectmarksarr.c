#include <stdio.h>
#define r 4
#define c 3
int main() {
int arr[r][c];
for(int i=0;i<r;i++)
{
printf("Enter no. of students %d:\n ",i+1);
printf("Enter marks of phy,chem,maths of %d students: ",i+1);
  for(int j=0;j<c;j++)
   {
     scanf("%d",&arr[i][j]);
   }
}
for(int i=0;i<r;i++)
{
   
   for(int j=0;j<c;j++)
   {
  printf("%d ",arr[i][j]);
   }
printf("\n");
}
return 0;
}