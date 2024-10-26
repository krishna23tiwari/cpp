//Example for Function without argument and with return value

#include<stdio.h>

int multi ();
void main()
{
    int result;
    printf("calculate two numbers \n");
    result = multi();
    printf("%d", result);

}

int multi()
{
    int a,b;
    printf("enter 2 numbers \n");
    scanf("%d%d",&a,&b);
    return a*b;


}
