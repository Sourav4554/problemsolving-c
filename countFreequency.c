/*COUNT Freequency of ELEMENTS */
#include<stdio.h>
int main(){
int i,j,count=0,flag=0,n,a[100];
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
flag=0;
count=0;
for(j=i-1;j>=0;j--){
if(a[i]==a[j]){
flag=1;
}}
if(flag==0){
for(j=i+1;j<n;j++){
if(a[i]==a[j]){
count++;
}
}
printf("%d occurs %d times\n",a[i],count+1);
}
}
return 0;
}