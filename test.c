#include<stdio.h>
int main ()
{
	int x,sum=0;
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

           sum+=temp;    
	  printf("value of temp is: %d\n" ,temp);  	  
	}
	
  printf("sum of digits is: %d\n" , sum);


return 0;
}



