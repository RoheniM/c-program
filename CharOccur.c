#include<stdio.h>
#include<string.h>
int main()
{
        char ch,str[50];
        int i,n,count=0;
        printf("Enter the number of characters:");
        scanf("%d",&n); 
        printf("Enter the string:");
        scanf("%s",str); 
        printf("Enter the character to be searched:\n ");
        scanf( " %c", &ch);
         printf("The number of occurance=\n");
        for(i=0;i<n;i++)
        {
                if(ch==str[i])
                {
                        count=count+1;
                }
         }
         printf("%d\n",count);
        
        return 0;
}
