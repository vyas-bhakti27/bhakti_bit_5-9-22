// Q4) A program to test 5th bit

#include <stdio.h>

main()
{
    int a,bit,mask=0x20; 
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("a = %d\t",a);
    if((a&mask)==0) 
        bit=0;
    else
        bit=1;
    printf("5th bit is  %d\n",bit); // print the 5th bit

}
