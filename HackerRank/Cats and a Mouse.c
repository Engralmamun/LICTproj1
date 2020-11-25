#include<stdio.h>
int main()
{
    int x=0,y=0,z=0,i,j,n,count=0;

    scanf("%d",&n);
    int arra[n][3];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arra[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        x=arra[i][0];
        y=arra[i][1];
        z=arra[i][2];

        while(1)
        {
            if(x==z && y==z)
            {
                printf("Mouse C\n");
                break;
            }
            if(x==z && y !=z){
                 printf("Cat A\n");
                break;
            }

            if(x!=z && y ==z){
                 printf("Cat B\n");
                break;
            }

            if(x<z && y<z)
            {

                x++;
                y++;
            }
            else if( x<z && y>z)
            {
                y--;
                x++;

            }
            else if(x>z && y<z)
            {
                x--;
                y++;
            }
            else
            {
                y++;
                x++;
            }

        }
    }

    return 0;
}
