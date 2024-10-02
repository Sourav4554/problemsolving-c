/*Maximum and Minimum in an array*/
#include<stdio.h>
int main(){
int n,max,min,a[100],i;
printf("Enter the limmit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++){
if(a[i]>max){
max=a[i];
}
}
for(i=1;i<n;i++){
if(a[i]<min){
min=a[i];
}
}
printf("Maximum=%d\n",max);
printf("Minimum=%d\n",min);
return 0;
}