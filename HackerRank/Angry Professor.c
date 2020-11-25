#include<stdio.h>
int main()
{
    int t,n,k,i,j,temp,count=0;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d%d",&n,&k);
        for(j=0; j<n; j++)
        {
            scanf("%d",&temp);
            if(temp<=0)
            {
                count++;
            }
        }
        if(count>=k)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");

        }
        count=0;

    }


}


