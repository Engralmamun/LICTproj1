#include <stdio.h>
#include <string.h>

int main()
{
    int count=0,i,j;
    char str[1000];
    char array[]={'0','1','2','3','4','5','6','7','8','9'};

    gets(str);

    for(i=0; i<=9; i++)
    {
        for(j=0; j<strlen(str); j++)
        {
            if(array[i]==str[j])
            {
                count++;
            }
        }
        printf("%d ",count);
        count=0;
    }

    return 0;
}
