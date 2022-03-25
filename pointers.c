#include<stdio.h>
#include<math.h>
int main()
{
        int n,i;
        float  *p,mean=0,var=0,sd=0,sum=0,a[20];
        printf("Enter the number of elements: \n");
        scanf("%d",&n);
        printf("Enter the array elements:\t \n");
        p=a;
        for(i=0;i<n;i++)
        {       
                scanf("%f",p);
                p++;
        }
        printf("The array elements are: \t\n");
        p=a;
        for(i=0;i<n;i++)
        {
                printf("%f\n",*p);
                p++;
        }
        p=a;
        for(i=0;i<n;i++)
        {
                sum=sum+*p;
                p++;
        }
        mean=sum/n;
        printf("The mean=%f \n",mean);
        p=a;
        for(i=0;i<n;i++)
        {
                var=var+pow((*p-mean),2);
                p++;
        }
        var=var/n;
        printf("The variance=%f \n",var);
        sd=sqrt(var);
        printf("The standard deviation=%f \n",sd);
        return 0;
}
