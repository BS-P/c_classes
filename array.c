#include<stdio.h>
int main ()
{
	int a[10]={2,8,5,4,1, 43, 54, 23 , 76, 45};
       
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

      for (int j=0;j<9;j++)
      {
      for (int i=j;i<10;i++)
      {
	      if (a[j]>a[i])
	         {
			int temp=a[i];
		        a[i]=a[j];
			a[j]=temp;
		 }
      }
      }

      for(int i=0;i<10;i++)
      {
	printf(" %d\t",a[i]);
      
      }

      int k , flag=0; 
      printf("\nEnter the num you want:");
      scanf("%d",&k);
         for (int i=0;i<10;i++)
          {
		      if (a[i]==k)
                      {
		      printf("given number exist\n");
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
        

printf("binary search operation\n");
int x;
int low=0,high=9;
while (low<=high)
{
	int mid=low+(high-low)/2;

	if (a[mid]==k)
	{
		printf("Number found at location:%d\n",mid);
 		break;
	}
        else if (a[mid]<k)
	{
		low=mid+1;
	//	printf("Number of right side is :%d\n",left);
		
	}
	else
	{
		high=mid-1;
	//	printf("Number of left side is :%d\n",right);
	
	}
}


return 0;

}

            
