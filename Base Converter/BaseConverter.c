#include <stdio.h>
#include <windows.h>
#include "../Sources/functions.h"

int main(void)
{
    char table[4][255] = {
        "[1] : Base To Decimal",
        "[2] : Decimal To Base",
        "[3] : Base To Base"};
    int y, basea,baseb, i;
    char digits[255], keypressed;
    do
    {
        system("cls");
        y = makemenu(table, 3, 1);
        _setcursortype(2);
        if (y == 1)
        {
            do
            {
                system("cls");
                textcolor(LIGHTBLUE);
                makeborder(20, 80, 3, 9);
                gotoxy(30, 6);
                printf("Base To Decimal Converter By Amine Belgaid");
                textcolor(WHITE);
                gotoxy(18, 12);
                printf("Enter The base to convert from  : ");
                scanf("%d", &basea);
                gotoxy(18, 14);
                printf("Enter The Number to convert : ");
                scanf("%s", digits);
                gotoxy(18, 16);
                printf("The converstion is : ");
                textcolor(GREEN);
                printf("%d", basetodec(digits, basea));
                textcolor(RED);
                gotoxy(18, 19);
                printf("Press <ENTER> to continue / Press <ESC> to exit ");
                keypressed = getch();
                textcolor(WHITE);
            } while (keypressed != 27);
        }
        if (y == 2)
        {
            do
            {
                system("cls");
                textcolor(LIGHTBLUE);
                makeborder(20, 80, 3, 9);
                gotoxy(30, 6);
                printf("Decimal To Base Converter By Amine Belgaid");
                textcolor(WHITE);
                gotoxy(18, 12);
                printf("Enter The base to convert to : ");
                scanf("%d", &basea);
                gotoxy(18, 14);
                printf("Enter The Number to convert : ");
                scanf("%s", digits);
                dectobase(digits, basea);
                gotoxy(18, 16);
                printf("The converstion is : ");
                textcolor(GREEN);
                for (i = 0; i <= strlen(digits); i++)
                {
                    printf("%c", digits[i]);
                }
                gotoxy(18, 19);
                textcolor(RED);
                printf("Press <ENTER> to continue / Press <ESC> to exit ");
                keypressed = getch();
                textcolor(WHITE);
            } while (keypressed != 27);
        }
        if (y == 3)
        {
            do
            {
                system("cls");
                textcolor(LIGHTBLUE);
                makeborder(20, 80, 3, 9);
                gotoxy(30, 6);
                printf("Base To Base Converter By Amine Belgaid");
                textcolor(WHITE);
                gotoxy(18, 12);
                printf("Enter The base to convert from  : ");
                scanf("%d", &basea);
                gotoxy(18, 14);
                printf("Enter The base to convert to  : ");
                scanf("%d", &baseb);
                gotoxy(18, 16);
                printf("Enter The Number to convert : ");
                scanf("%s", digits);
                basetobase(digits, basea,baseb);
                gotoxy(18, 18);
                printf("The converstion is : ");
                textcolor(GREEN);
                for (i = 0; i <= strlen(digits); i++)
                {
                    printf("%c", digits[i]);
                }
                gotoxy(18, 21);
                textcolor(RED);
                printf("Press <ENTER> to continue / Press <ESC> to exit ");
                keypressed = getch();
                textcolor(WHITE);
            } while (keypressed != 27);
        }
    } while (y != 0);
}
