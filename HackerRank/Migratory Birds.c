#include<stdio.h>
int main(){
int n,i,j;

scanf("%d",&n);

int arr1[]={0,0,0,0,0};
int arr2[n];

for(i=0;i<n;i++){
   scanf("%d",&arr2[i]);
}
for(i=0;i<5;i++){
    for(j=0;j<n;j++){
     if(i+1==arr2[j]){
        arr1[i]+=1;
     }
    }
}
int index;
int max=arr1[0];
for(i=1;i<5;i++){
    if(max<arr1[i]){
        max=arr1[i];
        index=i+1;
    }
}
printf("%d",index);


}
