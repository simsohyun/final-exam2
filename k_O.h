void k_O(int i, int j)
{
    extern char user[9][9];
    extern char answer[9][9];
    extern int count;
    extern int life;

while(1)
{
    if(answer[i][j] == '1')
    {
        user[i][j] = 'O';
        
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                printf("%2c", user[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        count -=1;
        printf(" the o,x input was correct\n\n");
        break;
    }
    else
    {
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                printf("%2c",user[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        life -=1;
        printf(" the o,x input was incorrect,  there are %d remaining games of life\n\n", life);
        break;
    }

}
}
