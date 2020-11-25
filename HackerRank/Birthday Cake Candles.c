#include<stdio.h>
int main()
{
    int n,i,j,m,sum=0,count=0;
    int max=-214783648;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(max<=arr[i]){
            max=arr[i];
        }

    }

    for(i=0;i<n;i++){
        if(max==arr[i]){
            count++;
        }

    }

    printf("%d",count);



}
