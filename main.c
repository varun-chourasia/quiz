#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int ans[5];
int point = 0;
int total;
int ques();
int score1(), score2();
void result();
void gotoxy(int x, int y)
{
    COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CRD);
}
int ques()
{
    // here is ques1...
    gotoxy(35, 6);
    printf("1)who is the most popular cricketer in IPL\n\n");
    printf("1)Virat Kholi\n");
    printf("2)AB Devillers\n");
    gotoxy(70, 8);
    printf("3)MS Dhoni\n");
    gotoxy(70, 9);
    printf("4)Chris Gayle\n");
    gotoxy(50, 12);
    printf("enter your answer:");
    scanf("%d", &ans[0]);
    if (ans[0] == 3)
    {
        score1();
    }
    else
    {
        score2();
    }
    system("cls");
    // ques 3..
    gotoxy(35, 6);
    printf("2)who is the top run scorer in IPL\n\n");
    printf("1)Virat Kholi\n");
    printf("2)Suresh Raina\n");
    gotoxy(70, 8);
    printf("3)MS Dhoni\n");
    gotoxy(70, 9);
    printf("4)Chris Gayle\n");
    gotoxy(50, 12);
    printf("enter your answer:");
    scanf("%d", &ans[1]);
    if (ans[1] == 1)
    {
        score1();
    }
    else
    {
        score2();
    }
    system("cls");
    gotoxy(35, 6);
    // here is ques3...
    printf("3)who is the most popular franchaise of IPL\n\n");
    printf("1)RCB\n");
    printf("2)CSK\n");
    gotoxy(70, 8);
    printf("3)MI\n");
    gotoxy(70, 9);
    printf("4)GT \n");
    gotoxy(50, 12);
    printf("enter your answer:");
    scanf("%d", &ans[2]);
    if (ans[2] == 2)
    {
        score1();
    }
    else
    {
        score2();
    }
    system("cls");
    gotoxy(35, 6);
    // here is ques4...
    printf("4)who is the king of death over in IPL\n\n");
    printf("1)Andre Russel\n");
    printf("2)AB Devillers\n");
    gotoxy(70, 8);
    printf("3)MS Dhoni\n");
    gotoxy(70, 9);
    printf("4)Chris Gayle\n");
    gotoxy(50, 12);
    printf("enter your answer:");
    scanf("%d", &ans[3]);
    if (ans[3] == 3)
    {
        score1();
    }
    else
    {
        score2();
    }
    system("cls");
    gotoxy(35, 6);
    printf("5)which bowler takes most wickets in the histroy of IPL\n\n");
    printf("1)Dwayne Bravo\n");
    printf("2)Lasith Malinga\n");
    gotoxy(70, 8);
    printf("3)Yuzvender Chahal\n");
    gotoxy(70, 9);
    printf("4)Jasprith Bumarah\n");
    gotoxy(50, 12);
    printf("enter your answer:");
    scanf("%d", &ans[4]);
    if (ans[4] == 3)
    {
        score1();
    }
    else
    {
        score2();
    }
    system("cls");
    total = point;
    return total;
}

int score1()
{
    printf("CORRECT ANSWER ...");
    point += 5;
}
int score2()
{
    printf("WRONG ANSWER ...");
    point -= 5;
}

void result()
{
    if (total == 25)
    {
        gotoxy(42, 6);
        printf("CONGRATULATION \n");
        gotoxy(42, 8);
        printf(" YOU GOT 1ST SPOT \n\n");
    }
    else if (total == 20)
    {
        gotoxy(42, 6);
        printf("CONGRATULATION \n");
        gotoxy(42, 8);
        printf(" YOU GOT 2ND SPOT\n\n");
    }
    else
    {
        gotoxy(35, 8);
        printf(" YOU LOST THE GAME TRY AGAIN.......\n\n");
    }
}
int main()
{
    int option;
    system("COLOR 3");
    gotoxy(42, 4);
    printf("___________________________");
    gotoxy(41, 5);
    printf("|                           |");
    gotoxy(41, 6);
    printf("|    Welcome to the Game    |\n\n");
    gotoxy(41, 7);
    printf("|                           |");
    gotoxy(41, 8);
    printf("|>Press 7 to start the game | \n<");
    gotoxy(41, 9);
    printf("|                           |");
    gotoxy(41, 10);
    printf("|>Press 0 to quit the game  |  \n<");
    gotoxy(41, 11);
    printf("|                           |");
    gotoxy(41, 12);
    printf("|___________________________|");
    gotoxy(41, 14);
    printf("   enter your option :: ");
    scanf("%d", &option);
    system("cls");
    gotoxy(42, 4);
    printf("___________________________");
    gotoxy(41, 5);
    printf("|                           |");
    gotoxy(41, 6);
    printf("|        PRIZE POOL         |");
    gotoxy(41, 7);
    printf("|                           |");
    gotoxy(41, 8);
    printf("|> 1st Prize is 10,00,000/- |");
    gotoxy(41, 9);
    printf("|                           |");
    gotoxy(41, 10);
    printf("|> 2nd Prize is 5,00,000/-  |  \n<");
    gotoxy(41, 11);
    printf("|                           |");
    gotoxy(41, 12);
    printf("|___________________________|");
    getch();
    Sleep(2000);
    system("cls");
    gotoxy(40, 4);
    printf("_____________________________________");
    gotoxy(40, 5);
    printf("|                                    |");
    gotoxy(40, 6);
    printf("|         RULES OF THE GAME          |\n\n");
    gotoxy(40, 7);
    printf("|                                    |");
    gotoxy(40, 8);
    printf("|>1)socre is 25 out of 25 = 1st spot | \n<");
    gotoxy(40, 9);
    printf("|                                    |");
    gotoxy(40, 10);
    printf("|>2)score is 20 out of 25 = 2nd spot |  \n<");
    gotoxy(40, 11);
    printf("|                                    |");
    gotoxy(40, 12);
    printf("|____________________________________|");
    getch();
    Sleep(2000);
    system("cls");
    if (option == 7)
    {
        gotoxy(42, 12);
        printf("The game has started\n");
        Sleep(1500);
        gotoxy(42, 14);
        printf("please loading (*.*)....... ");
        Sleep(1500);
        gotoxy(42, 16);
        printf("press any key to continue......");
        system("cls");
        ques();
        system("cls");
        total = point;
        result();
    }
    else if (option == 0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid\n\n");
    }
    getch();
    return 0;
}
