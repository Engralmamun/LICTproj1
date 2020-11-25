#include<stdio.h>

int main(){
 int i,n,m,count=0;
scanf("%d",&n);
 for(i=0;i<n;i++){
    scanf("%d",&m);

    if(m==1){
        printf("HARD");
         break;
    }
    count++;
 }
 if(count==n){
    printf("EASY");
 }
}
