#include<stdio.h>
void InsertionSort(int array[], int length)
{
    int key, i;
    for(int j = 1; j < length; j++)
    {
        key = array[j];
        i = j - 1;
        while(i >= 0 && array[i] > key)
        {
            array[i+1] = array[i];
            i--;
        }
        array[i+1] = key;
    }
}




int main(){
 int i,j,sum1=0,sum2=0;
 int arr[5];

 for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
 }
 InsertionSort(arr,5);

 for(i=0;i<4;i++){
    sum1+=arr[i];
    sum2+=arr[4-i];

 }
 printf("%d ",sum1);
 printf("%d",sum2);
 return 0;
}
