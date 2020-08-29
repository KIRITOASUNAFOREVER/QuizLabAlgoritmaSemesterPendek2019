#include<stdio.h>
#include<stdlib.h>

int main()
{
   int t;
   scanf("%d",&t);
   int count=1;
   while(t--)
   {
       int n;
       scanf("%d",&n);
      
       int arr[n];
       int i,j;
       for(i=0;i<n;i++)
       {
           scanf("%d",&arr[i]);
       }
      
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
               if(arr[i]>arr[j])
               {
                   int temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp;
               }
           }
       }
      
       printf("Case #%d:",count);
       count++;
      
       printf("\n");
       for(i=0;i<n;i++)
       {
           if(arr[i]%2==1)
           {
               printf("%d ",arr[i]);
           }
       }
      
       printf("\n");
       for(i=0;i<n;i++)
       {
           if(arr[i]%2==0)
           {
               printf("%d ",arr[i]);
           }
       }
       printf("\n");
   }
}
