#include <stdio.h>
int main()
{
        int a[20],j,i,n,temp=0,k,key,first,last,mid;
        printf("Enter the total no. of elements:\n");
        scanf("%d",&n);
        printf("Enter the %d no. of elements one by one: \n",n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Unsorted list: \n");
        for(i=0;i<n;i++)
        {
                printf("%d \n",a[i]);
        }        
        for(i=0;i<n-1;i++)
        {
                for(j=0;j<n-i-1;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                temp=a[j];
                                a[j]=a[j+1];
                                a[j+1]=temp;
                                
                        }
                }
        }
        printf("Sorted list: \n");
        for(k=0;k<n;k++)
        {
                printf("%d \n",a[k]);
        }
        printf("Enter the required element to be searched\n");
        scanf("%d",&key);
        first=0;
        last=n-1;
        while(first<=last)
        {
                mid=(first+last)/2;
                if(key==a[mid])
                {
                        printf("%d is found at %d postion\n",key, mid+1);
                        return 1;
                }
                else if(key<a[mid])
                {
                        last=mid-1;
                }
                else
                {
                        first=mid+1;
                }
        }
        printf("%d is not found \n",key);
        
        return 0;
}
