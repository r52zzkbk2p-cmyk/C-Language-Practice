#include <stdio.h> 
main()
{
    int number, divisor;
    do{
	
        printf("Input data please!\n");
        scanf("%d",&number);
        if(number>0)
        {
            printf("The divisors of number:\n");
            for(divisor=2;divisor<number;divisor++)
                if(number%divisor==0)
                    printf("%3d\n", divisor);
        }
    }while(number>0);
}
