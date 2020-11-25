#include<stdio.h>

int main()
{
    int n, i, a=0, b=0, c=0, temp;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", & temp);
        if(temp>0)
        {
            a++;
        }
        else if(temp<0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    double d = (double)a / (double)n;
    double e = (double)b / (double)n;
    double f = (double)c / (double)n;

    printf("%.6f\n", d);
    printf("%.6f\n", e);
    printf("%.6f\n", f);


    return 0;
}
