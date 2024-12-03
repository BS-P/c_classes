#include<stdio.h>
int main ()
{
	int a[5]={2,8,5,4,1};
       
/*

       for(int i=0;i<4;i++)
       {
       if (a[i]>a[i+1])
       {
	 int temp=a[i];
	 a[i]=a[i+1];
	 a[i+1]=temp;

       }  
       }
*/

      for (int j=0;j<4;j++)
      {
      for (int i=j;i<5;i++)
      {
	      if (a[j]>a[i])
	         {
			int temp=a[i];
		        a[i]=a[j];
			a[j]=temp;
		 }
      }
      }

      for(int i=0;i<5;i++)
      {
	printf("value of array is: %d\n",a[i]);
      
      }

      int k , flag=0; 
      printf("Enter the num you want:\n");
      scanf("%d",&k);
         for (int i=0;i<5;i++)
          {
		      if (a[i]==k)
                      {
		      printf("given number exist");
		       flag=0;
			      break;
		      }
                     else{ 
                         flag = -1;
                        }
}
if (flag==-1)
{
 printf(" num doesn't exist\n");

 }	 
          





return 0;

}

             
