#include<stdio.h>
int main(){
int num,number,i,sum=0,n;
printf("Enter the limit:");
scanf("%d",&num);
printf("Deficient numbers are:");
for(number=1;number<=num;number++){
n=number;
sum=0;
for(i=1;i<number;i++){
if((number%i)==0){
sum+=i;
}}
if(sum<n){
printf("%d \n",n);
}
}
return 0;
}