/*
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding the number itself). 
In other words, if you list out all the divisors of a number and add them up (except the number itself), 
and the sum equals the original number,
 then it's a perfect number.*/
#include<stdio.h>
int main(){
int num,i,n,sum=0;
printf("Enter the number:");
scanf("%d",&num);
n=num;
for(i=1;i<num;i++){
if(num%i==0){
sum+=i;
}}
(sum==n)?printf("%d is a perfect number\n",n):printf("%d is not a perfect number\n",n);
return 0;
}