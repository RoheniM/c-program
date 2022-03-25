#include<stdio.h>
#include<string.h>
int main()
{
        char str1[50],str2[50];
        int i;
        
        printf("Enter the string:");
        scanf("%s",str1);
         printf("The word after removing S:\n");
        for(i=0;i<strlen(str1);i++)
        {
                if('S'==str1[i])
                {
                        str2[i]=str1[i];
                   continue;
                }
                printf("%s",str2);
         }
        
        
        return 0;
}
