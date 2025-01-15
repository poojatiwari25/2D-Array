#include <stdio.h>

int main() {
   int r;
   printf("Enter no. of rows: ");
   scanf("%d",&r);
   int c;
   printf("Enter no. of cols: ");
   scanf("%d",&c);
   int arr[r][c];
   int brr[r][c];
   int sum[r][c];
   printf("enter values of array 1:\n");
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
       {
         scanf("%d",&arr[i][j]);
       }
   }
    printf("enter values of array 2:\n");
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
       {
         scanf("%d",&brr[i][j]);
       }
   }
    printf("Array 1 values are:\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
      printf("%d ",arr[i][j]);
       }
   printf("\n");
   }
    printf("Array 2 values are:\n");
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
      printf("%d ",brr[i][j]);
       }
   printf("\n");
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
      sum[i][j] = arr[i][j]+brr[i][j];
       }
   }
   printf("Sum of array is: \n");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        printf("%d ",sum[i][j]);
      }
     printf("\n"); 
    }
    return 0;
}

