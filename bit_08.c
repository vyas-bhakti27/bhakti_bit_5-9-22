// Program to test any bit in an integers
#include <stdio.h>

main()
{
    int a,bit,mask,bitposition;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Enter the bit position:");
    scanf("%d", &bitposition);
    mask=1<<bitposition;  // left shift the bit position by one
    printf("a = %d\t",a);
    if((a&mask)==0)     
        bit=0;
    else
        bit=1;
    printf("The bit at position %d is %d\n",bitposition,bit);
    
}
