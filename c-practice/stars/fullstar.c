#include <stdio.h>
int main (){
    int i,j,row;
    printf("enter the no. of the rows:");
    scanf("%d",&row);
    for (i=1;i<=row;i++)
            { for (j=i;j<=row-1;j++)
                {printf(" ");}
                
                

                { for(j=1;j<=2*i-1;j++)
                 printf("*");}
                    {printf("\n");}}


                
for (i=row-1;i>=1;i--)
            { for (j=i;j<=row-1;j++)
                {printf(" ");}
                
                

                { for(j=1;j<=2*i-1;j++)
                 printf("*");}
                {printf("\n");}}
                return 0;
}