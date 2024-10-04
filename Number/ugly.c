/*An ugly number is defined as a number whose only prime factors are 2, 3, or 5. */
#include<stdio.h>
int main(){
int num,x,n;
printf("Enter a Number:");
scanf("%d",&num);
n=num;
if(num<0){
printf("Enter a positive intiger:\n");
}
while(num!=1){
if(num%5==0){
num/=5;
}
else if(num%3==0){
num/=3;
}
else if(num%2==0){
num/=2;
}
else{
x=1;
break;
}
}
if(x==0){
printf("%d is a ugly number\n",n);
}
return 0;
}