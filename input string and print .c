#include<stdio.h>
main()
{
    int i,j,max;
    char str[20];
    printf("Enter the string:-");
    scanf("%s",&str);
    
    max=strlen(str);
    for(i=0;i<max;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
    }    

}