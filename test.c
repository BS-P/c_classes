#include<stdio.h>
int main ()
{
	int x ;
	printf("please enter a num\n");
	scanf ("%d",&x);
	if (x>0)
	{
		printf("num is positive\n");
	}
	else
	{
        printf ("error");
	}
	
	int y = x%10;
	printf("unit place digit is: %d\n", y);

return 0 ;
}
