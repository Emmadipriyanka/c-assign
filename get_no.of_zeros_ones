/*To get number of zeroes and ones*/

#include <stdio.h>

int main()
{
    int num,one=0,zero=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    int bits=8*sizeof(num);
   for(int i=0;i<bits;i++)//here 32 is number of bits=8*sizeof(num)
    {
        if((num)&(1<<i))
            one++;
        else
            zero++;
    }
    printf("no.of zeros in a given number %d is %d\n",num,zero);
    printf("no.of ones in a given number %d is %d \n",num,one);
    return 0;
}
