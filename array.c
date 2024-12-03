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
	printf("value of array is: %d\n",a[i]);
      
      }

      int k , flag=0; 
      printf("Enter the num you want:\n");
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
int x,y;
int left=0,right=9;
while (left<=right)
{
	int mid=left+(right-left)/2;

	if (a[mid]==y)
	{
		printf("Number found is:%d\n",mid);
 		break;
	}
	if (a[mid]<y)
	{
		left=mid+1;
		printf("value of 2nd number is:%d\n",mid+1);
		break;
	}
	else
	{
		right=mid-1;
		printf("right side num is:%d\n",mid-1);
		break;
	}
}


return 0;

}

             
