#include<stdio.h>
int main ()
{
	int x;
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

	while(x>0)
	{	
	int temp = x%10;
	int k = x/10;
	    x=k;

	  printf("value of temp is: %d\n" ,temp);
                                                     

	} 


return 0;
}



