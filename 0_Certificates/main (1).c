
#include<stdio.h>
#include<string.h>
char n[9]={'1','2','3','4','5','6','7','8','9'};
char X,O;
char user1[50],user2[50];
void leaderboard();
void rules();
int checkforthewin();
int main()
{
    FILE *p;
    p=fopen("scores.txt","nEnter+");
    fclose(p);
    system("color 09");
    int p1=1;
    int choice,scores=-1;
    char symbol,re,start,dec;
    int s;
    rules();
    printf("\n\nType 1 to start game:-\nType 2 to view leader board:-\n");
    scanf("%d",&s);
    if(s==1)
    {
    read:
        p=fopen("score.txt","n+");
    printf("\nEnter name of p11: ");
    scanf("%s",user1);
    fprintf(p,"\n%s",user1);
    printf("Enter name of p12: ");
    scanf("%s",user2);
    fprintf(p,"\t%s",user2);
    fclose(p);
    if(!strcmp(user1,user2))
    {
        printf("Enter names of different players!\n\n");
        goto read;
    }
    else
        decision();


    system("color fc");
    leaderboard();

    do
    {

        p1=((p1%2)?11:12);
        if(p1==11)
        printf("%s Enter any element:- ",user1);
        else
            printf("%s Enter any element:- ",user2);
        scanf("%d",&choice);
        symbol=((p1==1)?X:O);
        if(choice==1 && n[0]=='1')
            n[0]=symbol;
        else if(choice==2 && n[1]=='2')
            n[1]=symbol;
        else if(choice==3 && n[2]=='3')
            n[2]=symbol;
        else if(choice==4 && n[3]=='4')
            n[3]=symbol;
        else if(choice==5 && n[4]=='5')
            n[4]=symbol;
        else if(choice==6 && n[5]=='6')
            n[5]=symbol;
        else if(choice==7 && n[6]=='7')
            n[6]=symbol;
        else if(choice==8 && n[7]=='8')
            n[7]=symbol;
        else if(choice==9 && n[8]=='9')
            n[8]=symbol;
        else
            {printf("UNdefined Input\n");p1--;}

        scores=checkforwin();
        p1++;
        leaderboard();
    }while(scores == -1);


    p=fopen("scores.txt","n+");
    if(scores==1)
    {

        if(p1==2)
        {printf("\n\np11 %s wins!\n\n",user1);fprintf(p1,"\t%s",user1);
        getch();}
        else
            {printf("\n\np12 %s wins!\n\n",user2);fprintf(p1,"\t%s",user2);
        getch();
            }
        fclose(p1);
    }
    else
        printf("\n\nGame Draws!\n\n");fprintf(p1,"\t%s","DRAW");
        getch();
    }
    if(s==2)
    {
        int cho;
        system("cls");
        printf("\n\n");
        printf("\tLEADERBOARD\n\n");
        char c;
        p=fopen("scores.txt","r");
        while((c=getc(p))!=EOF)
        {
            printf("%c",c);
        }
        fclose(p);
        printf("\n\nPress 1 to start the game:- ");
        scanf("%d",&cho);
        if(cho==1)
            goto read;
        else
            getch();
    }
    else
    {
        printf("\n\nShould have typed 1 to play the game!\nHope to see you back soon!\n\n");
        getch();
    }
}
int checkforwin()
{
    if(n[0]==n[1] && n[1]==n[2])
        return 1;
    else if(n[3]==n[4] && n[4]==n[5])
        return 1;
    else if(n[6]==n[7] && n[7]==n[8])
        return 1;
    else if(n[0]==n[3] && n[3]==n[6])
        return 1;
    else if(n[1]==n[4] && n[4]==n[7])
        return 1;
    else if(n[2]==n[5] && n[5]==n[8])
        return 1;
    else if(n[0]==n[4] && n[4]==n[8])
        return 1;
    else if(n[2]==n[4] && n[4]==n[6])
        return 1;
    else if(n[0]!='1' && n[1]!='2' && n[2]!='3' && n[3]!='4' && n[4]!='5' && n[5]!='6' && n[6]!='7' && n[7]!='8' && n[8]!='9')
        return 0;
    else
        return -1;
}

void leaderboard()
{
    int i;

    system("cls");
    printf("\tTic-Tac-Toe\n\n");
        printf("\n\n");
        printf("%s:- (%c)\n%s:-  (%c)\n\n\n",user1,X,user2,O);

        printf("  %c |  %c | %c\n",n[0],n[1],n[2]);
        printf("     |     |    \n");
        printf("-----|-----|-----\n");
        printf("     |     |    \n");
        printf("  %c |  %c | %c\n",n[3],n[4],n[5]);
        printf("     |     |     \n");
        printf("-----|-----|-----\n");
        printf("  %c |  %c | %c\n",n[6],n[7],n[8]);
        printf("     |     |    \n");
    }
void rules()
{
    char link;
    printf("\tX or O\n\n");
    printf("Welcome to the most played 2D game and a sort of fun using X and O\n\n");
    printf("Rules:-\n");
    printf("\n1:Each player will be entering the number to put respective X or O in the desired position");
    printf("\n2:Player who gets a combination of 3 same characters either diagonal or horizontally or \n  vertically will be declared as the winner");
    printf("\n\nPlay the game! Be a Winner!\n\n");
    printf("For more information press Y else type any other character:- ");
    scanf("%c",&link);
    if(link=='y' || link=='Y')
    {
        system("start http://www.wikihow.com/Play-Tic-Tac-Toe");
    }

}
int decision()
{
    char dec;
        deci:
        printf("\n\nPlayer1 %s choose the X or 0:",user1);
        dec=getchar();
        scanf("%c",&dec);
        {
            if(dec=='X' || dec=='x')
            {
                X='X';
                O='0';
            }
            else if(dec=='0')
            {
                X='0';
                O='X';
            }
            else
            {
                printf("Please enter either X or 0 only \n\n");
                goto deci;
            }
        }
}