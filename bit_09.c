//Q9) Program to switch on all the bits in an integer variable 
#include <stdio.h>

main()
{
    int a,mask,i;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("%d\t",a);
    for(i=0;i<=15;i++)
    {
        mask=1<<i; // left shift i by 1
        a= a| mask;
    }
    printf("%d\t",a);
    
}
