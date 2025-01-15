// 1 2 3 
// 6 5 4 
// 7 8 9 
#include <stdio.h>

int main() {
   int m;
   printf("Enter no. of rows: ");
   scanf("%d",&m);
   int n;
   printf("Enter no. of cols: ");
   scanf("%d",&n);
   int a[m][n];
   printf("enter elements of array:\n");
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<m;i++)
   {
       if(i%2==0){
           for(int j=0;j<n;j++){
              printf("%d",a[i][j]);
           }
       }
       else{
           for(int j=n-1;j>=0;j--){
              printf("%d",a[i][j]);
           }
       
       }
       printf("\n");
   }
   return 0;
   }




// 7 4 1 
// 2 5 8 
// 9 6 3 
#include <stdio.h>

int main() {
   int m;
   printf("Enter no. of rows: ");
   scanf("%d",&m);
   int n;
   printf("Enter no. of cols: ");
   scanf("%d",&n);
   int a[m][n];
   printf("enter elements of array:\n");
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
   }
   for(int j=0;j<n;j++)
   {      
        if(j%2!=0){
            for(int i=0;i<m;i++){
              
              printf("%d ",a[i][j]);
           }
       }
       else{
           for(int i=m-1;i>=0;i--){
               printf("%d ",a[i][j]);
           }
       
       }
       printf("\n");
   }
   return 0;
   }



// 1 4 7
// 8 5 2
// 3 6 9
#include <stdio.h>
int main() {
   int m;
   printf("Enter no. of rows: ");
   scanf("%d",&m);
   int n;
   printf("Enter no. of cols: ");
   scanf("%d",&n);
   int a[m][n];
   printf("enter elements of array:\n");
   for(int i=0;i<m;i++)
   {
      for(int j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
   }
   for(int j=0;j<n;j++)
   {      
        if(j%2==0){
            for(int i=0;i<m;i++){
              
              printf("%d",a[i][j]);
           }
       }
       else{
           for(int i=m-1;i>=0;i--){
               printf("%d",a[i][j]);
           }
       
       }
       printf("\n");
   }
   return 0;
   }