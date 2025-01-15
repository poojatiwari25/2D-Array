//maximum element of array and its index
#include <stdio.h>

int main() {
   int r;
   printf("Enter no. of rows: ");
   scanf("%d",&r);
   int c;
   printf("Enter no. of cols: ");
   scanf("%d",&c);
   int arr[r][c];
   int max = arr[0][0];
   int maxr = 0;
   int maxc = 0;
   printf("Enter elements of array:\n");
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
       {
         scanf("%d",&arr[i][j]);
       }
   }
    printf("the elements of array are:\n");
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
          if(arr[i][j] > max){
            max = arr[i][j]; 
            maxr = i;
            maxc = j;
          }
       }
   }
        printf("The maximum element of the array is %d and its index is %d,%d ",max,(maxr,maxc));
    return 0;
}





//minimum element of array

#include <stdio.h>

int main() {
   int r;
   printf("Enter no. of rows: ");
   scanf("%d",&r);
   int c;
   printf("Enter no. of cols: ");
   scanf("%d",&c);
   int arr[r][c];
   int min = arr[0][0];
   int minr = 0;
   int minc = 0;
   printf("Enter elements of array:\n");
   for(int i=0;i<r;i++)
   {
      for(int j=0;j<c;j++)
       {
         scanf("%d",&arr[i][j]);
       }
   }
    printf("the elements of array are:\n");
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
          if(arr[i][j] < min){
            min = arr[i][j]; 
            minr = i;
            minc = j;
          }
       }
   }
        printf("The minimum element of the array is %d and its index is %d,%d ",min,(minr,minc));
    return 0;
}

