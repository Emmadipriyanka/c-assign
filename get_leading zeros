/*To get leading zero count*/

#include <stdio.h>

int main()
{
    int num,order=-5,bits,leading_zero;
    printf("Enter the number:\n");
    scanf("%d",&num);
    bits=8*sizeof(num);
   for(int i=0;i<bits;i++)//here 32 is number of bits=8*sizeof(num)
    {
     if((num>>i)&1)
     {
      order=i;
      }
      
    }
    leading_zero=bits-order-1;//we are subtraccting 1 because index starts from 0
   printf("leading_zero count is %d",leading_zero);

    return 0;
}
