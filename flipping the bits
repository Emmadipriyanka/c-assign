/*to find no. of flipped bits the number a to become number b*/
#include <stdio.h>

int main()
{
    int num1,num2,num3,count=0;
    printf("enter num1:\n");
    scanf("%d",&num1);
    printf("enter num2:\n");
    scanf("%d",&num2);
    
    num3=num1^num2;
    
    while(num3>0)
    {
        count++;
        num3=num3&(num3-1);
    }
    printf("The number of bits to be flipped for %d to become %d is %d",num1,num2,count);
    return 0;
}
