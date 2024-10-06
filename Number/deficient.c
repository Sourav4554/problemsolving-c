/*A deficient number is a positive integer where the sum of its proper divisors
 (all divisors excluding the number itself) is less than the number.
 In other words, if you sum all the divisors of the number (except the number 
 itself) and that sum is smaller than the original number,
 then it's called a deficient number.*/
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
(sum<n)?printf("%d is a deficiient number\n",n):printf("%d is not a deficient number\n",n);
return 0;
}