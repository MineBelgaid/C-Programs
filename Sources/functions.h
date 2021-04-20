#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include "myconio.h"
// Make Menu FUNCTION
int makemenu(char option[][255], int size, int exit)
{
    int i, k = 1, j = 1, z = 0, chr1, line = 0, max = size;
    int x = 18, y = 12;
    bool exit1;
    char keypressed;

    if (exit == 1)
    {
        exit1 = TRUE;
    }
    else
    {
        exit1 = FALSE;
    }
    // Header
    textcolor(LIGHTBLUE);
    makeborder(20, 80, 3, 9);
    gotoxy(30, 6);
    printf("This Program Was Created By Amine Belgaid");
    // End Of Header.
    textcolor(WHITE);
    gotoxy(x - 3, y);
    printf("Menu: ");
    for (i = 0; i < max; i++)
    {
        gotoxy(x, y + i + 1);
        puts(option[i]);
    }
    if (exit1)
    {
        gotoxy(x, y + max + 3);
        printf("[0] : Exit Program.");
    }
    gotoxy(4, line + 1);
    while ((keypressed != 'y') && (chr1 != 27))
    {
        chr1 = '0';
        while ((chr1 != 27) && (chr1 != 13))
        {
            _setcursortype(0);
            gotoxy(x, y + line + 1);
            textcolor(GREEN);
            if (line == max + 2)
            {
                gotoxy(x, y + max + 3);
                printf("[0] : Exit Program.");
            }
            else
            {
                puts(option[line]);
            }
            textcolor(WHITE);
            gotoxy(x, y + line + 1);
            textcolor(WHITE);
            chr1 = getch();

            switch (chr1)
            {
            case 0xE0:

                chr1 = getch();

                switch (chr1)
                {
                case 27: break;
                case 80:
                    if (line == max + 2)
                    {
                        gotoxy(x, y + max + 3);
                        printf("[0] : Exit Program.");
                    }
                    else
                    {
                        puts(option[line]);
                    }
                    line++;
                    if (line >= max + 2)
                    {
                        line = 0;
                    }
                    else if (line == max)
                    {
                        line = max + 2;
                    }
                    break;
                case 72:
                    if (line == max + 2)
                    {
                        gotoxy(x, y + max + 3);
                        printf("[0] : Exit Program.");
                    }
                    else
                    {
                        puts(option[line]);
                    }
                    line--;
                    if (line < 0)
                    {
                        line = max + 2;
                    }
                    else if (line == max + 1)
                    {
                        line = max - 1;
                    }
                    break;
                };
                break;
            case 49:
                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = 0;
                break;
            case 50:

                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = 1;
                break;
            case 51:

                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = 2;
                break;
            case 52:

                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = 3;
                break;
            case 53:

                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = max - 1;
                break;
            case 48:

                if (line == max + 2)
                {
                    gotoxy(x, y + max + 3);
                    printf("[0] : Exit Program.");
                }
                else
                {
                    puts(option[line]);
                }
                line = max + 2;
                break;
            }
        }
        if (line == max + 2)
        {
            gotoxy(x - 1, y + max + 5);
            textcolor(RED);
            printf("Are you sure you want to exit? Y/N");
            textcolor(WHITE);
            keypressed = getch();
            if (keypressed == 'n')
            {
                gotoxy(x - 1, y + max + 5);
                clreol();
            }
            else if (keypressed == 'y')
            {
                return 0;
            }
        }
        else
        {
            return line + 1;
        }
    }
}
// Decimal to base/ Base to Decimal/ Base to Base
int basetodec(char number[], int baseA)
{
    int dec = 0;
    if (baseA <= 10)
    {
        int i = 0, *p, result = 0;
        int intnum = atoi(number);
        while (intnum != 0)
        {
            dec += (intnum % 10) * pow(baseA, i);
            intnum /= 10;
            i++;
        }
    }
    else
    {
        int digit, i, j, count = 0;
        j = strlen(number) - 1;
        for (i = 0; i <= strlen(number) - 1; i++)
        {
            switch (number[i])
            {
            case '0':
                digit = 0;
                break;
            case '1':
                digit = 1;
                break;
            case '2':
                digit = 2;
                break;
            case '3':
                digit = 3;
                break;
            case '4':
                digit = 4;
                break;
            case '5':
                digit = 5;
                break;
            case '6':
                digit = 6;
                break;
            case '7':
                digit = 7;
                break;
            case '8':
                digit = 8;
                break;
            case '9':
                digit = 9;
                break;
            case 'A':
                digit = 10;
                break;
            case 'B':
                digit = 11;
                break;
            case 'C':
                digit = 12;
                break;
            case 'D':
                digit = 13;
                break;
            case 'E':
                digit = 14;
                break;
            case 'F':
                digit = 15;
                break;
            case 'G':
                digit = 16;
                break;
            case 'H':
                digit = 17;
                break;
            case 'I':
                digit = 18;
                break;
            case 'J':
                digit = 19;
                break;
            case 'K':
                digit = 20;
                break;
            case 'L':
                digit = 21;
                break;
            case 'M':
                digit = 22;
                break;
            case 'N':
                digit = 23;
                break;
            case 'O':
                digit = 24;
                break;
            case 'P':
                digit = 25;
                break;
            case 'Q':
                digit = 26;
                break;
            case 'R':
                digit = 27;
                break;
            case 'S':
                digit = 28;
                break;
            case 'T':
                digit = 29;
                break;
            case 'U':
                digit = 30;
                break;
            case 'V':
                digit = 31;
                break;
            case 'W':
                digit = 32;
                break;
            case 'X':
                digit = 33;
                break;
            case 'Y':
                digit = 34;
                break;
            case 'Z':
                digit = 35;
                break;
            }
            dec += (pow(baseA, j) * digit);
            j--;
        }
    }
    return dec;
}
void dectobase(char dec[], int baseB)
{
    int i = 0, rem, result = 0, count = 1;
    int intnum = atoi(dec);
    while (intnum >= baseB)
    {
        intnum /= baseB;
        count++;
    }
    intnum = atoi(dec);
    for (i = count - 1; i >= 0; i--)
    {
        rem = intnum % baseB;
        if (rem >= 10)
        {
            dec[i] = rem + 55;
        }
        else
            dec[i] = rem + 48;
        intnum /= baseB;
        result = 0;
    }
    dec[count] = '\0';
}
void basetobase(char num[], int baseA, int baseB)

{
    inttochar(num, basetodec(num, baseA));
    dectobase(num, baseB);
}

void inttochar(char chars[], int number)
{
    int n = number, count = 0, i;
    memset(chars, 0, 20);
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    n = number;
    if (count == 0)
    {
        count = 1;
    }
    for (i = count - 1; i >= 0; i--)
    {
        chars[i] = (n % 10) + '0';
        n /= 10;
    }
}

// Draw tabel + swap cells
void maketable(int table[], int size, int x, int y)
{
    int digits[50];
    int *p2, count, i, j, k, l, temp, n, x1, loop = -2, c1 = 3, c2 = 5, steps = 4;
    for (l = 0; l < 10; l++)
    {
        memset(digits, 0, sizeof(digits));
        x1 = x + 2;
        int *p = table;
        Sleep(125);
        clrscr();
        gotoxy(x, y);
        printf("%c%c\n", 201, 205);
        gotoxy(x, y + 1);
        printf("%c\n", 186);
        gotoxy(x, y + 2);
        printf("%c%c\n", 200, 205);
        for (i = 0; i <= size - 1; i++)
        {

            n = abs(*p);
            count = 0;
            while (n != 0)
            {
                n /= 10;
                count++;
            }
            n = abs(*p);
            if (count == 0)
            {
                count = 1;
            }
            for (k = count - 1; k >= 0; k--)
            {
                digits[k] = (n % 10);
                n /= 10;
            }
            if (abs(c1 - c2) == 1)
            {
                if (loop == 2)
                {
                    loop = 4;
                }
            }
            if (*p < 0)
            {
                gotoxy(x1, y);
                printf("%c", 205);
                gotoxy(x1, y + 1);
                printf("-");
                gotoxy(x1++, y + 2);
                printf("%c", 205);
            }
            if (i == c1)
            {
                switch (loop)
                {
                case (-1):
                    y -= 1;
                    break;
                case (0):
                    y -= 2;
                    break;
                case (1):
                    y -= 3;
                    break;
                case (2):
                    y -= 3;
                    x1 += steps;
                    break;
                case (3):
                    y += 3;
                    x1 += steps;
                    break;
                case (4):
                    y += 3;
                    break;
                case (5):
                    y += 2;
                    break;
                case (6):
                    y += 1;
                    break;
                }
            }
            if (i == c2)
            {
                switch (loop)
                {
                case (-1):
                    y += 1;
                    break;
                case (0):
                    y += 2;
                    break;
                case (1):
                    y += 3;
                    break;
                case (2):
                    y += 3;
                    x1 -= steps;
                    break;
                case (3):
                    y -= 3;
                    x1 -= steps;
                    break;
                case (4):
                    y -= 3;
                    break;
                case (5):
                    y -= 2;
                    break;
                case (6):
                    y -= 1;
                    break;
                }
            }
            for (j = 0; j < count; j++)
            {
                gotoxy(x1 + j, y);
                printf("%c", 205);
                gotoxy(x1 + j, y + 1);
                if (*p == 0)
                {
                    printf("0");
                }
                printf("%d", digits[j]);
                gotoxy(x1 + j, y + 2);
                printf("%c", 205);
            }
            if (i == c1)
            {
                switch (loop)
                {
                case (-1):
                    y += 1;
                    break;
                case (0):
                    y += 2;
                    break;
                case (1):
                    y += 3;
                    break;
                case (2):
                    y += 3;
                    x1 -= steps;
                    break;
                case (3):
                    y -= 3;
                    x1 -= steps;
                    break;
                case (4):
                    y -= 3;
                    break;
                case (5):
                    y -= 2;
                    break;
                case (6):
                    y -= 1;
                    break;
                }
            }
            if (i == c2)
            {
                switch (loop)
                {
                case (-1):
                    y -= 1;
                    break;
                case (0):
                    y -= 2;
                    break;
                case (1):
                    y -= 3;
                    break;
                case (2):
                    y -= 3;
                    x1 += steps;
                    break;
                case (3):
                    y += 3;
                    x1 += steps;
                    break;
                case (4):
                    y += 3;
                    break;
                case (5):
                    y += 2;
                    break;
                case (6):
                    y += 1;
                    break;
                }
            }
            if (i == (size - 1))
            {
                gotoxy(x1 + j, y);
                printf("%c%c", 205, 187);

                gotoxy(x1 + j, y + 1);
                printf(" %c", 186);
                gotoxy(x1 + j, y + 2);
                printf("%c%c", 205, 188);
            }
            else
            {
                gotoxy(x1 + j, y);
                printf("%c%c%c", 205, 203, 205);
                gotoxy(x1 + j, y + 1);
                printf(" %c", 186);
                gotoxy(x1 + j, y + 2);
                printf("%c%c%c", 205, 202, 205);
            }

            x1 += count + 3;
            *p++;
        }
        if (loop == -2)
        {
            gotoxy(4, 2);
            clreol();
            printf("Enter The first Cell: ");
            scanf("%d", &c1);
            gotoxy(4, 3);
            clreol();
            printf("Enter The Second Cell: ");
            scanf("%d", &c2);
            c1--;
            c2--;
        }
        if (loop == 2)
        {
            temp = table[c1];
            table[c1] = table[c2];
            table[c2] = temp;
        }
        loop++;
    }
}
// will draw cells given columns,rows, width and legth of each cell

void drawcolumns(int columns, int rows, int width, int length)
{
    int i, j = 0, k;
    for (k = 0; k < rows; k++)
    {

        for (i = 0; i < columns; i++)
        {
            makeborder(5 + (width * i), 5 + (width * (i + 1)), 5 + (length * j), 5 + (length * (j + 1)));
            if ((i >= 1) && (j == 0))
            {
                gotoxy(5 + (width * i), 5 + (length * j));
                printf("%c", 203);
            }
            if ((i >= 1) && (j > 0))
            {
                gotoxy(5 + (width * i), 5 + (length * j));
                printf("%c", 206);
                gotoxy(5, 5 + length * j);
                printf("%c", 204);
                gotoxy(5 + width * columns, 5 + length * j);
                printf("%c", 185);
            }
            if ((i >= 1) && (j >= (rows - 1)))
            {
                gotoxy(5 + (width * i), 5 + (length * (j + 1)));
                printf("%c", 202);
            }
        }
        j++;
    }
}
// DRAW BORDER Procedure
void makeborder(int x1, int x2, int y1, int y2)
{
    int i, wid, leng;
    wid = x2 - x1 - 1;
    leng = y2 - y1 - 1;
    gotoxy(x1, y1);
    printf("%c", 201);
    for (i = 0; i < wid; i++)
    {
        gotoxy(x1 + 1 + i, y1);
        printf("%c", 205);
        gotoxy(x1 + 1 + i, y2);
        printf("%c", 205);
    }
    gotoxy(x2, y1);
    printf("%c", 187);

    for (i = 1; i <= leng; i++)
    {
        gotoxy(x1, y1 + i);
        printf("%c", 186);
        gotoxy(x2, y1 + i);
        printf("%c", 186);
        gotoxy(x1, y2);
        printf("%c", 200);
        gotoxy(x2, y2);
        printf("%c", 188);
    }
}
