#include <stdio.h>
#include <math.h>
#define esp 10e-7
int main()
{
	int n=1;
	char ch;
	float sum,term,x;
	do
	{
		printf("Please input x value:");
		scanf("%f",&x);
		
		sum=term=x;
		do
		{n++;
		term*=(-x*x)/((2*n-2)*(2*n-1));
		sum=sum+term;
		}while(fabs(term)>=esp);
		printf("sin(x)=%f",sum);
		printf("\n contine? y/n\n");
		scanf(" %c",&ch);		
	}while(ch=='y');
	printf("\n program end. \n");
}
