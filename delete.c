#include<stdio.h>
#include<stdlib.h>
int main(){
int po,n,i,a[100];
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Current array is:");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
printf("Enter the position would be the element delete:");
scanf("%d",&po);
//check if the position is invalid or not
 if(po<=0 || po>n){  
 printf("invalid position\n");
 exit(0);
 }
 for(i=po-1;i<n-1;i++){
 a[i]=a[i+1];
 }
 printf("After deleting array is:");
for(i=0;i<n-1;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}