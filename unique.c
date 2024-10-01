/*print unique elements*/
#include<stdio.h>
int main(){
int n,i,j,count=0,a[100];
printf("Enter the limit:");
scanf("%d",&n);
printf("Emter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
count=0;
for(j=0;j<n;j++){
if(i!=j&&a[i]==a[j]){
count++;
break;
}
}
if(count==0 ){
printf("%d ",a[i]);
}
}
return 0;
}