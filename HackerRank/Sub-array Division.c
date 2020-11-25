
#include<stdio.h>
int main(){
int i,j,n,m,d,sum=0,count=0;

scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++){
  scanf("%d",&arr[i]);

}

scanf("%d %d",&d ,&m);

for(i=0;i<=n-m;i++){
    for(j=0;j<m;j++){
   sum+=arr[i+j];
    }
    if(sum==d){
    count++;

    }
    sum=0;
}
printf("%d",count);

return 0;
}
