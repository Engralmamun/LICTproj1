#include<stdio.h>
int main(){
int i,n,k,b,sum=0,abill;
scanf("%d %d",&n,&k);

int bill[n];

for(i=0;i<n;i++){
  scanf("%d",&bill[i]);
}

for(i=0;i<n;i++){
  if(i !=k){
    sum+=bill[i];
  }
}
scanf("%d",&b);
abill=sum/2;
if(abill==b){
    printf("Bon Appetit");
}else{

 printf("%d",abs(abill-b));
}

}
