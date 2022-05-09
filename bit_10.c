//Q10) Priting the binary patterns of a 16 bit intergers
#include <stdio.h>

main()
{
    int a;
    printf("Enter the value of a : "); // asking user to enter value of a
    scanf("%d",&a);
    bit_pattern(a);   // calling function
}
bit_pattern(int a)  // declaring function
    {
        int i,mask;
        for(i=15;i>=0;i--)
        {
            mask=1<<i;
            if((a&mask)==0)
                printf("0");
            else
                printf("1");
            
        }
        printf("\n");
        
}
