#include<stdio.h>
int main()
{
    int i,j,n,suma=0,sumb=0,m;
    printf("Enter a number");
    scanf("%d",&n);
    int array[n][n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==j){
                suma+=array[i][j];
            }
            if(i+j==n-1){
                sumb+=array[i][j];
            }
        }

    }
   // printf("%d\n",suma);
   // printf("%d",sumb);
    m=abs(suma-sumb);
    printf("%d",m);

    return 0;
}
