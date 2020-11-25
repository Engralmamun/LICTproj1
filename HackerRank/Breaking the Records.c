#include<stdio.h>

int main(){
int i,n,count1=0,count2=0,min,max;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
}
min=arr[0];
max=arr[0];

for(i=1;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        count1++;
    }

    if(arr[i]>max){
        max=arr[i];
        count2++;
    }
}

printf("%d ",count2);
printf("%d",count1);

return 0;
}
