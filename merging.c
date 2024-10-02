/*Merging to arrays into a single Array*/
#include<stdio.h>
int main(){
int i,n1,n2,j,a[100],b[100],c[100];
printf("Enter the limit of array1:");
scanf("%d",&n1);
printf("Enter the elements of arary1:");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);
}
printf("Enter the limit of array2:");
scanf("%d",&n2);
printf("Enter the elements of array2:");
for(i=0;i<n2;i++){
scanf("%d",&b[i]);
}
for(i=0;i<n1;i++){  // copy elements from first array 
c[i]=a[i];
}
for(int j=0;j<n2;j++){ //copy elements from second array
c[i+j]=b[j];
}
printf("merged array is:");
for(i=0;i<n1+n2;i++){   //print the merged array
printf(" %d",c[i]);
}
printf("\n");
return 0;
}