/*To get trailing zero count*/

#include <stdio.h>

int main()
{
    int num,trailing_zero_count=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    
   for(int i=0;i<32;i++)//here 32 is number of bits=8*sizeof(num)
    {
     if((num>>i)&1)
     {
    break;
      }
      trailing_zero_count++;
    }
    
   printf("trailing_zero_count is %d",trailing_zero_count);

    return 0;
}
