/*
TIPS
***********
find the middle term for checking condition in for loop 17th line
*/
//REVERSING AN ARRAY
#include<stdio.h>
int main(){
int i,n,j,temp,a[100];
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Reverse of an array is\n:");
for(i=0,j=n-1;i<n/2;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
