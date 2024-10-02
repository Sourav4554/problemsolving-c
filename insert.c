/*Insert an element in given position*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int n,po,i,j,num,a[100];
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
printf("Enter the position:");
scanf("%d",&po);
printf("Enter the number:");
scanf("%d",&num);
//check if the position is invalid or not
 if(po<=0 || po>n+1){  
 printf("invalid position\n");
 exit(0);
 }
 //insert element into that array
for(i=n-1;i>=po-1;i--){
a[i+1]=a[i];
}
a[po-1]=num;
printf("After insertion:");
for(i=0;i<n+1;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}