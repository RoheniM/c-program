#include<stdio.h>
int main()
{
        int n,i,avg;
        struct student
        {
                int roll,eng,math,sci,soc,lang1,lang2;
                char name[20];
                float avg;
        };
        struct student s[20];
        printf("Enter the number of students:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
               printf(" Enter student no. %d details\n",i+1);
               printf("Enter roll no:");
               scanf("%d",&s[i].roll);
               printf(" Enter student name:");
               scanf("%s",s[i].name);
               printf(" Enter student marks in english:");
               scanf("%d",&s[i].eng);
               printf(" Enter student marks in maths:");
               scanf("%d",&s[i].math);
               printf(" Enter student marks in science:");
               scanf("%d",&s[i].sci);
               printf(" Enter student marks in social:");
               scanf("%d",&s[i].soc);
               printf(" Enter student marks in language 1:");
               scanf("%d",&s[i].lang1);
               printf(" Enter student marks in language 2:");
               scanf("%d",&s[i].lang2);
        }
        for(i=0;i<n;i++)
        {
                s[i].avg=(s[i].eng+s[i].math+s[i].sci+s[i].soc+s[i].lang1+s[i].lang2)/6;
        }
        printf("Enter the average marks:");
        scanf("%d",&avg);
        for(i=0;i<n;i++)
        {
                if(s[i].avg>avg)
                {
                        printf("The students who got above average marks are:%s\n",s[i].name);
                }
                else
                {
                        printf("The students who got below average marks are:%s\n",s[i].name);
                }
        }
        return 0;
}
