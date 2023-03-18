        /*   Define a fxn which returns an address of dynamically created array whose size is determined as a sum of sizes
                    of two given array. Also store the values of two given arrays in newly created array.    */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int * adrtn();
int a[5]={1,2,3,4,5};
int b[5]={6,7,8,9,10};
int main()
{
    int *ptr;
   // ptr=adrtn();
    printf("\nAddress of dynamically created array is %d",adrtn());
    getch();
    return 0;
}
int *adrtn()
{
    int i,j=0;
    int *p;
    p=(int *)calloc(10,4);
    for(i=0;i<10;i++)
    {
        if(i<=4)
            *(p+i)=a[i];
        else
        {
                *(p+i)=b[j];
                j++;
        }
    }
    printf("New Array is ");
    for(i=0;i<10;i++)
        printf(" %d ",(*(p+i)));
    return p;
}
