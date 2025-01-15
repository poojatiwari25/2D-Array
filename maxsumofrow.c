#include <stdio.h>

int main() {
   int arr[3][4]={{1,5,9,1},{1,5,5,1},{8,4,2,8}};
   int maxIdx=-1;
   int maxSum=0;
   for(int i=0;i<3;i++)
   { int sum=0;
      for(int j=0;j<4;j++)
       {
         sum = sum + arr[i][j];
         maxIdx=i;
       }
       printf("Index is %d and total sum is %d\n",maxIdx,sum);
   }
    return 0;
}

