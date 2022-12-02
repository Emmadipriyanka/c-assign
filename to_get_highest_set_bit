/*To get highest set bit*/

#include <stdio.h>

int main()
{
    int num,order=-2;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
   for(int i=0;i<32;i++)
    {
     if((num>>i)&1)
     {
    order=i;   
      }
    }
   if(order!=-2)
   printf("Highest set bit is %d",order);

    return 0;
}
