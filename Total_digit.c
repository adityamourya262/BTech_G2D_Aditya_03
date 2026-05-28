#include<stdio.h>
int main (){
    int  num1,count=0;
    printf("Enter the number:");
    scanf("%d",&num1);
      
    while(num1 != 0){
    num1 = num1/10;
    count++;  }
    {
        printf("total digit =%d",count);

    }
    return 0;
}