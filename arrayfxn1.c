                     /* Define a fxn to find the greatest number in a given array
                                       int maxvalue(int A[],int size);  */
#include<stdio.h>
#include<conio.h>

int maxvalue(int A[],int size);
int main()
{
    int a[5];
   // int c;
    //c=maxvalue(a,5);
    printf("the maximum value present in an array is %d",maxvalue(a,5));
    getch();
    return 0;
}
int maxvalue(int A[],int size)
{
    int i,temp;
    printf("Enter %d values\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&A[i]);
    temp=A[0];
    for(i=0;i<size;i++)
    {
        if(A[i]>=temp)
            temp=A[i];
    }
    return temp;
}








