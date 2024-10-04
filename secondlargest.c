#include<stdio.h>
#include<limits.h>
int main(){
int i,n,a[100],l1=INT_MAX,l2=INT_MAX;
printf("Enter the limits:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
for(i=0;i<n;i++){
	if(a[i]<l1){
		l2=l1;
		l1=a[i];
		}
	else if(a[i]<l2 && a[i]>l1){
		l2=l1;
		}}
printf("Smallest element=%d\n",l1);
printf("second smallest=%d\n",l2);
return 0;
}