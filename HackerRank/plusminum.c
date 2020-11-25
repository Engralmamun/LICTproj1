#include<stdio.h>
int main()
{
    int i,n,m;

    printf("Enter an Integer Number");
    scanf("%d",&m);


    int countplus=0,countminus=0,countzero=0;
    for(i=0; i<m; i++)
    {
        scanf("%d",&n);

        if(n>0)
        {
            countplus++;
        }
        else if(n<0)
        {
            countminus++;
        }
        else
        {
            countzero++;
        }

    }
    float a=0,b=0,c=0;

    a= (float)countplus/(float)n;
    b=(float)countminus/(float)n;
    c=(float)countzero/(float)n;

    printf("%.6f\n%.6f\n%.6f\n",a,b,c);

    return 0;
}
