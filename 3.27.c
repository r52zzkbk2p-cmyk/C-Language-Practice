#include <stdio.h>
int main()
{
	int i,j;
	i=1;
	do{
		j=i;
		do{
			printf(" ");
		}while(j++<=9);
		j=1;
		do{
			printf("%c",97);
		}while(++j<=i);
		printf("\n");
	}while(i++<=9);	
}
