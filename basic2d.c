#include <stdio.h>

int main() {
   int arr[3][3]={{1,2,5},{3,4,5},{5,8,5}};
   for(int i=0;i<3;i++)
   {
       for(int j=0;j<3;j++)
       {
      printf("%d ",arr[i][j]);
       }
   printf("\n");
   }
   return 0;
}


//Take input through user


int main() {
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

