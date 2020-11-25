#include<math.h>
#include<stdio.h>
int main(){
int i,j,n,sum=0;
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    if(arr[i]<=37){
        printf("%d\n",arr[i]);
    }else{

      float a=ceil((float)arr[i]/5.0);
      a*=5;
      if(a-arr[i]<3){
                printf("%d\n",(int)a);

      }else{

          printf("%d\n",arr[i]);
      }

    }

}

return 0;
}
