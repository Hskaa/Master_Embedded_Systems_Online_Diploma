#include<stdio.h>
int main()
{
    int num ; 
    printf("Enter  Number : ");
    while (1)
    {
        scanf("%d",&num);
    
        if((num%2)==0)
         {
            printf("%d is an Even number\n",num);
         }
        else
        {
            printf("%d is an Odd number\n",num);
        }
    }

}