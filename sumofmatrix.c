#include <stdio.h>

int main() {
   int r;
   printf("Enter no. of rows: ");
   scanf("%d",&r);
   int c;
   printf("Enter no. of cols: ");
   scanf("%d",&c);
   int arr[r][c];
   int sum=0;
   printf("enter elements of array:\n");
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
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
      sum = sum+arr[i][j];
       }
   }
        printf("%d ",sum);
    return 0;
}

