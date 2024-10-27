#include<stdio.h>

void arrev(int arr[])
{
    printf("before reversal array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n");

    printf("after reversal \n");
    for (int j = 6; j >-1 ; j--)
    {
        printf("%d", arr[j]);
    }
    
}

int main()
{
    void arrec(int arr[]);
    int a[]= {1,2,3,4,55,6,7};
    arrev(a);
    
    return 0;
}