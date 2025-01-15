#include <stdio.h>
int main() {
//int arr[5][5]={10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10};
int r;
printf("Enter no. of rows: ");
scanf("%d",&r);
int c;
printf("Enter no. of cols: ");
scanf("%d",&c);
int arr[r][c];
for(int i=0;i<r;i++)
{
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