#include<stdio.h>
#include<math.h>
int main()
{
  int a[10];
  int i,j,temp,n;
  printf("enter the integers");
  scanf("%d",&n);
  
  printf("enter the interger\n");
  for(i=0;i<n;i++)
  { 
    scanf("%d",&a[i]); 
  }
  for(i=0;i<n-1;i++)
  {
  	for(j=0;j<n-1-i;j++) 
  {
    		if(a[j]>a[j+1])
    		{
      			temp=a[j];
      			a[j]=a[j+1];
      			a[j+1]=temp;
    		}
  } 
 }
   printf("sorted list in ascending order:\n");
   for(i=0;i<n;i++)
    {printf("%d\n",a[i]);}
   return 0;
}

   first=0;
   last=n-1;
   printf("enter key elements");
   scanf("%d",&key);
   while(first<=last)
   {
     mid=(first+last)/2;
     if(key==a[mid])
     {
         printf("element %d found at %d\n",key,mid+1);
         return 0;
     }
     else if (key=a[mid])
     {
           last=mid+1;
     }
    }
    printf("element %d not found ",key);
    



   return 0;
}
       
    
    
    
  

