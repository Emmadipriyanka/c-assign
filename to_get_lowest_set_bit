/*To get lowest set bit*/

#include <stdio.h>

int main()
{
    int num,order;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
   for(int i=0;i<32;i++)
    {
     if((num>>i)&1)
     {
    order=i;
    break;
      }
    }
    
   printf("Lowest set bit is %d",order);

    return 0;
}
