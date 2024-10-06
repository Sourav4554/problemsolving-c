/*In number theory, an abundant number or excessive number is a
 positive integer for which the sum of its proper divisors is greater than the number. 
 The integer 12 is the first abundant number. 
Its proper divisors are 1, 2, 3, 4 and 6 for a total of 16.*/
#include<stdio.h>
int main(){
int num,number,i,sum=0,n;
printf("Enter the limit:");
scanf("%d",&num);
printf("Abuntant numbers are:");
for(number=1;number<=num;number++){
n=number;
sum=0;
for(i=1;i<number;i++){
if((number%i)==0){
sum+=i;
}}
if(sum>n){
printf("%d \n",n);
}
}
return 0;
}