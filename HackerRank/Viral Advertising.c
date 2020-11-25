#include<stdio.h>
int main()
{
  int n,i,temp,count=0,adv=5;

  scanf("%d",&n);

  for(i=0;i<n;i++){

    temp=adv/2;
    count +=temp;
    adv=temp*3;
}
printf("%d",count);
}



