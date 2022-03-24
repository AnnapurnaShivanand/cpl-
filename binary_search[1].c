#include<stdio.h>
#include<math.h>
int main()
{
int first,last,mid;
printf("sorted elements:");
for(i=0;i<n;i++)
{
  printf("%d",a[i]);
}
  first=0;
  last=n-1;
  printf("enter the element");
  scanf("%d",&key);
  while(first<=last)
  {
     mid=(first+last)/2;
     if(key==a[mid])
     {
         printf("element %d found at %d", key,mid+1)
         return (1);
     }
         else if (key<[mid])
         {
           last=mid-1;
         }
         else first=mid+1;
         }
         printf("element %d not found",key);
         return 0;
}


         
