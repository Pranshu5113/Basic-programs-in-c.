#include<stdio.h>
main()
{
    int i,j;

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=45; j++)
            if(j==1||j==2&&i!=2&&i!=4&&i!=5||j==3&&i!=2&&i!=4&&i!=5||j==4&&i!=5&&i!=4&&i!=2||j==5&&i!=4&&i!=5||j==7||j==8&&i!=2&&i!=4&&i!=5||j==9&&i!=2&&i!=4&&i!=5||j==10&&i!=2&&i!=5||j==11&&i!=3&&i!=4&&i!=1||j==14&&i!=1||j==15&&i!=2&&i!=4&&i!=5||j==16&&i!=2&&i!=4&&i!=5||j==17&&i!=2&&i!=4&&i!=5||j==18&&i!=1||j==20||j==21&&i!=1&&i!=4&&i!=5&&i!=3||j==22&&i!=1&&i!=4&&i!=5&&i!=2||j==23&&i!=1&&i!=3&&i!=5&&i!=2||j==24||j==26&&i!=4||j==27&&i!=2&&i!=4||j==28&&i!=2&&i!=4||j==29&&i!=2||j==31||j==32&&i!=1&&i!=2&&i!=4&&i!=5||j==33&&i!=1&&i!=2&&i!=4&&i!=5||j==34&&i!=1&&i!=2&&i!=4&&i!=5||j==35||j==37||j==38&&i!=1&&i!=2&&i!=3&&i!=4||j==39&&i!=1&&i!=2&&i!=3&&i!=4||j==40&&i!=1&&i!=2&&i!=3&&i!=4||j==41)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        printf("\n");
    }
}