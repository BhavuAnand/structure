#include <stdio.h>  
#include<string.h>
struct emp
{
    int age,phone,salary;
    char name[50];
};
void main ()    
{    
    struct emp e1[20];
    int i;
    for(i=0;i<20;i++)
    {
        scanf("%d",&e1[i].age);
        scanf("%s",&e1[i].name);
        scanf("%d",&e1[i].phone);
        scanf("%d",&e1[i].salary);
    }
    for(i=0;i<20;i++)
    {
        printf("%s",e1[i].name);
        printf("%d",e1[i].age);
        printf("%d",e1[i].phone);
        printf("%d",e1[i].salary);
    }
} 
