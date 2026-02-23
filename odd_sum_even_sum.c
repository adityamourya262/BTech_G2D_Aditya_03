#include<stdio.h>
int main ()
{
    int n, evensum=0,oddsum=0;
    printf("Enter a number :");
    scanf("%d",&n);
     for(int i=0; i<=n; i++){
        if(i%2==0){
            evensum=evensum+i;
        } 
        else{
            oddsum = oddsum + i;
        }
     }
     printf("sum of even number is: %d \n",evensum);
     printf("sum of odd number is: %d \n",oddsum);
     return 0;
}