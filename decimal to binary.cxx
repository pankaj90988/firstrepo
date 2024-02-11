//wap in c to change decimal number into binary form

#include <stdio.h>
#include<math.h>

int main() {
    int n,i=0,sum=0,binumber,temp;
    printf("enter a positive decimal form:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        binumber=temp%2;
        sum=sum+binumber*pow(10,i);
        temp=temp/2;
        i++;
    }
    printf("%d in binary form is=%d",n,sum);

    return 0;
}