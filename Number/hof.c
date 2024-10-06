#include<stdio.h>
int main(){
int num1,num2,i,hof=1,min;
printf("Enter the two numbers:");
scanf("%d%d",&num1,&num2);
min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++){
if(num1%i==0 && num2%i==0){
hof=i;
}
}
printf("hof of %d and %d is %d\n",num1,num2,hof);
return 0;
}