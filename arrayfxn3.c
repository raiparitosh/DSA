

                 /* Define a fxn to calculate sum of all the elements of a given arrray
                                 int sum(int A[],int size);      */

#include<stdio.h>
#include<conio.h>
int sum(int A[],int size);
int main()
{
    int a[5];
    printf("Sum of all the elements of the given arrray is %d",sum(a,5));
    getch();
    return 0;
}
int sum(int A[],int size)
{
    int i,sum=0;
    printf("Enter %d values\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    return sum;
}
