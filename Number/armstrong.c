#include<stdio.h>
int main(){
int num1,num2,sum,n1,n2,ldigit,sum1=0,sum2=0;
printf("Enter two numbers:");
scanf("%d%d",&num1,&num2);
n1=num1,n2=num2;
while(n1>0){
ldigit=n1%10;
sum1+=(ldigit*ldigit*ldigit);
n1/=10;
}
ldigit=0;
while(n2>0){
ldigit=n2%10;
sum2+=(ldigit*ldigit*ldigit);
n2/=10;
}
(sum1==num1&&sum2==num2)?printf("Both numbers are armstrong\n"):printf("NOt an armstrong number combo\n");
return 0;
}