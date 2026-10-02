#include <stdio.h>
int main()
{
	int i,j,k;
	printf("%14d",1);
	for(i=2;i<10;i++)
	 printf("%4d",i);
	printf("\n\n\n");
	for(i=1;i<10;i++)
	 { 
	 printf("%7d%3c",i,' ');
	 for(j=1;j<10;j++)
	 {
	 k=j*i;
	 printf("%4d",k);
     }
     printf("\n\n");
	 }
}
