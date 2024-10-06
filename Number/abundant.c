#include<stdio.h>
int main(){
int num,n,i,sum=0;
printf("Enter the Number:");
scanf("%d",&num);
n=num;
for(i=1;i<n;i++){
if((num%i)==0){
sum+=i;
printf("%d\n",sum);
}
}
if(sum>n){
printf("%d is a Abundant Number ",n);
}
else{
printf("%d is not a Abundant Number ",n);
}
return 0;
}