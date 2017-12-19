void map(char user[9][9], char answer[9][9])
{
    extern int count;
    extern int life;

    int i,j,a,b;
    char k;

    for(a=0;a<9;a++)
    {
        for(b=0;b<9;b++)
        {
            printf("%2c",user[a][b]);
        }
        printf("\n");
    }
    printf("\n");

while(1)
{
while(1)
{
    int re;
    while(1)
    {
        printf("  enter the 'x' coordinate(1~5) : ");
        scanf("%d", &i);
        getchar();
        if(i<1 || i>5)
            printf("  the 'x' coordinate value is invalid\n\n");
            else
                break;
    }

    while(1)
    {
        printf("  enter the 'y' coordinate(1~5) : ");
        scanf("%d", &j);
        getchar();
        if(j<1 || j>5)
            printf("  the 'y' coordinate value is invalid\n\n");
            else
                break;
    }

    re = coordinate_check(i,j);
    if(re == 0)
        break;

}

while(1)
{
    printf("  enter O or X : ");
    scanf("%c", &k);
    getchar();

    if(k == 'O')
    {
        i+=3; j+=3;
        system("clear"); printf("\n");
       k_O(i,j);
        break;
    }

    else if(k == 'X')
    {
        i+=3; j+=3;
        system("clear"); printf("\n");
        k_X(i,j);
        break;
    }
    else
    {
        printf("  invalid input\n\n");
        break;
    }
}

if(count <= 0)
    {
        printf("   congratulation!!\n\n");
        printf("   it's hourglass!!\n\n");
    }
if(life <=0)
{
    printf("   game over\n\n");
}
}
}
