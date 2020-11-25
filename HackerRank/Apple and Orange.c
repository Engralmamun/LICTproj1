#include<stdio.h>
int main()
{
    int s,t,a,b,m,n,i,temp1,temp2,Apple,Orange,apple=0,orange=0;
    scanf(" %d %d %d %d %d %d",&s,&t,&a,&b,&m,&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&Apple);
        temp1=a+Apple;
        if(temp1>=s && temp1<=t)
        {
            apple++;
        }

    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&Orange);

        temp2=b+Orange;
        if(temp2>=s && temp2<=t)
        {
            orange++;
        }
    }

      printf("%d\n%d",apple,orange);
      return 0;
}
