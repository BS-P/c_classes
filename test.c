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
        
	int z = (x/10)%10;
	printf("tens place digit is: %d\n" , z);
         
	int a = x/100;
	printf("hundred place digit is: %d\n", a);

        int sum = y+z+a ; 
        printf("sum of all digit is: %d\n" , sum);



return 0 ;
}
