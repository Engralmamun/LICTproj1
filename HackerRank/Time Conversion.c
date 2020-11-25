#include<string.h>
#include<stdio.h>

int main(){
int h,m,s;
char tc[3];
scanf("%d:%d:%d%s",&h,&m,&s,&tc);


if(strcmp(tc,"PM")==00 && h!=12){
    h+=12;
}
if(strcmp(tc,"AM")==00 && h==12){
    h=0;
}
printf("%02d:%02d:%02d",h,m,s);

return 0;
}
