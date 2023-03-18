                    /*  Define a fxn to find averageof elements of a given array
                                     int avg(int A[],int size);     */

#include<stdio.h>
#include<conio.h>

int avg(int A[],int size);

int main()
{
    int a[5];
    printf("The average of elements of the given array is %d",avg(a,5));
    getch();
    return 0;
}
int avg(int A[],int size)
{
    int i,sum=0;
    int average;                 //average is of int type as sum of int values is alway s going to be integer
    printf("Enter %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    average=sum/size;
    return  average;

}
