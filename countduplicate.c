/*COUNT DUPLICATE ELEMENTS */
#include<stdio.h>
int main(){
int i,j,count=0,flag,n,a[100];
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){  //used for taking each element
flag=0;
for(j=i-1;j>=0;j--){ //used for reverse iteration
if(a[i]==a[j]){
flag=1;
break;
}
}
if(flag==0){
for(j=i+1;j<n;j++){ //used for forward iteration
if(a[i]==a[j]){
count++;
break;
}}
}
}
printf("duplicate elements are:%d",count);
return 0;
}