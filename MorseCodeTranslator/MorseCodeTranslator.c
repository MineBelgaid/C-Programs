#include <stdio.h>
#include <stdlib.h>
#include "../Sources/functions.h"

char strtomorse(char strings[]);
char morsetostr(char string[]);

int main()
{
    int y;
    char table[2][255] = {"[1] : Morse Code to String",
                         "[2] : String to Morse Code"};
    char keypressed ,str[255];
    do
    {

        system("cls");
        y = makemenu(table, 2, 1);
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
                printf("Enter The Morse code to decypher : ");
                fgets(str,255,stdin);
                gotoxy(18, 14);
                printf("Translation to String  : ");
                morsetostr(str);
                gotoxy(18, 17);
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
                printf("Base To Decimal Converter By Amine Belgaid");
                textcolor(WHITE);
                gotoxy(18, 12);
                printf("Enter The Morse code to decypher : ");
                fgets(str,255,stdin);
                gotoxy(18, 14);
                printf("Translation to String  : ");
                strtomorse(str);
                gotoxy(18, 17);
                printf("Press <ENTER> to continue / Press <ESC> to exit ");
                keypressed = getch();
                textcolor(WHITE);
            } while (keypressed != 27);
        }
    } while (y != 0);
}

char morsetostr(char string[])
{
    char *p = string;
    int i, j;
    char temp[255];
    memset(temp, 0, 255);
    while ((*p) != '\0'&& (*p) != '\n')
    {
        j = 0;
        for (i = 0; i <= 255; i++)
        {
            if ((*p) == '\0' || *p == '\n')
            {
                break;
            }
           if ((*p) == ' ')
            {
                *p++;
                break;
            }
            temp[i] = *p++;
            j++;
        }
        if (strcmp(temp, ".-") == 0)
        {
            printf("a");
        }
        else if (strcmp(temp, "-...") == 0)
        {
            printf("b");
        }
        else if (strcmp(temp, "-.-.") == 0)
        {
            printf("c");
        }
        else if (strcmp(temp, "-..") == 0)
        {
            printf("d");
        }
        else if (strcmp(temp, ".") == 0)
        {
            printf("e");
        }
        else if (strcmp(temp, "..-.") == 0)
        {
            printf("f");
        }
        else if (strcmp(temp, "--.") == 0)
        {
            printf("g");
        }
        else if (strcmp(temp, "....") == 0)
        {
            printf("h");
        }
        else if (strcmp(temp, "..") == 0)
        {
            printf("i");
        }
        else if (strcmp(temp, ".---") == 0)
        {
            printf("j");
        }
        else if (strcmp(temp, "-.-") == 0)
        {
            printf("k");
        }
        else if (strcmp(temp, ".-..") == 0)
        {
            printf("l");
        }
        else if (strcmp(temp, "--") == 0)
        {
            printf("m");
        }
        else if (strcmp(temp, "-.") == 0)
        {
            printf("n");
        }
        else if (strcmp(temp, "---") == 0)
        {
            printf("o");
        }
        else if (strcmp(temp, ".--.") == 0)
        {
            printf("p");
        }
        else if (strcmp(temp, "--.-") == 0)
        {
            printf("q");
        }
        else if (strcmp(temp, ".-.") == 0)
        {
            printf("r");
        }
        else if (strcmp(temp, "...") == 0)
        {
            printf("s");
        }
        else if (strcmp(temp, "-") == 0)
        {
            printf("t");
        }
        else if (strcmp(temp, "..-") == 0)
        {
            printf("u");
        }
        else if (strcmp(temp, "...-") == 0)
        {
            printf("v");
        }
        else if (strcmp(temp, ".--") == 0)
        {
            printf("w");
        }
        else if (strcmp(temp, "-..-") == 0)
        {
            printf("x");
        }
        else if (strcmp(temp, "-.--") == 0)
        {
            printf("y");
        }
        else if (strcmp(temp, "--..") == 0)
        {
            printf("z");
        }
        else if (strcmp(temp, ".----") == 0)
        {
            printf("1");
        }
        else if (strcmp(temp, "..---") == 0)
        {
            printf("2");
        }
        else if (strcmp(temp, "...--") == 0)
        {
            printf("3");
        }
        else if (strcmp(temp, "....-") == 0)
        {
            printf("4");
        }
        else if (strcmp(temp, ".....") == 0)
        {
            printf("5");
        }
        else if (strcmp(temp, "-....") == 0)
        {
            printf("6");
        }
        else if (strcmp(temp, "--...") == 0)
        {
            printf("7");
        }
        else if (strcmp(temp, "---..") == 0)
        {
            printf("8");
        }
        else if (strcmp(temp, "----.") == 0)
        {
            printf("9");
        }
        else if (strcmp(temp, "-----") == 0)
        {
            printf("0");
        }
        else if (strcmp(temp, "/") == 0)
        {
            printf(" ");
        }
        for (i = 0; i <= j; i++)
        {

            temp[i] = 0;
        }
    }
        return '\0';
}

char strtomorse(char string[])
{
    int i, l;

    l = strlen(string);
    for (i = 0; i <= l; i++)
    {
        switch (string[i])
        {
        case 'a':
        case 'A':
            printf(".- ");
            break;
        case 'b':
        case 'B':
            printf("-...  ");
            break;
        case 'c':
        case 'C':
            printf("-.-.  ");
            break;
        case 'd':
        case 'D':
            printf("-.. ");
            break;
        case 'e':
        case 'E':
            printf(". ");
            break;
        case 'f':
        case 'F':
            printf("..-. ");
            break;
        case 'g':
        case 'G':
            printf("--. ");
            break;
        case 'h':
        case 'H':
            printf(".... ");
            break;
        case 'i':
        case 'I':
            printf(".. ");
            break;
        case 'j':
        case 'J':
            printf(".--- ");
            break;
        case 'k':
        case 'K':
            printf("-.- ");
            break;
        case 'l':
        case 'L':
            printf(".-.. ");
            break;
        case 'm':
        case 'M':
            printf("-- ");
            break;
        case 'n':
        case 'N':
            printf("-. ");
            break;
        case 'o':
        case 'O':
            printf("--- ");
            break;
        case 'p':
        case 'P':
            printf(".--. ");
            break;
        case 'q':
        case 'Q':
            printf("--.- ");
            break;
        case 'r':
        case 'R':
            printf(".-. ");
            break;
        case 's':
        case 'S':
            printf("... ");
            break;
        case 't':
        case 'T':
            printf("- ");
            break;
        case 'u':
        case 'U':
            printf("..- ");
            break;
        case 'v':
        case 'V':
            printf("...- ");
            break;
        case 'w':
        case 'W':
            printf(".-- ");
            break;
        case 'x':
        case 'X':
            printf("-..- ");
            break;
        case 'y':
        case 'Y':
            printf("-.-- ");
            break;
        case 'z':
        case 'Z':
            printf("--.. ");
            break;
        case '1':
            printf(".---- ");
            break;
        case '2':
            printf("..--- ");
            break;
        case '3':
            printf("...-- ");
            break;
        case '4':
            printf("....- ");
            break;
        case '5':
            printf("..... ");
            break;
        case '6':
            printf("-.... ");
            break;
        case '7':
            printf("--... ");
            break;
        case '8':
            printf("---.. ");
            break;
        case '9':
            printf("----. ");
            break;
        case '0':
            printf("----- ");
            break;
        case '/':
            printf("....-- ");
            break;
        case '[':
            printf(".--... ");
            break;
        case ']':
            printf("-..-- ");
            break;
        case '<':
            printf("--..-- ");
            break;
        case '>':
            printf("..--.. ");
            break;
        case '(':
            printf("---... ");
            break;
        case ')':
            printf("...--- ");
            break;
        case '}':
            printf("--..- ");
            break;
        case '{':
            printf("..--. ");
            break;
        case '.':
            printf(".----- ");
            break;
        case ',':
            printf("-..... ");
            break;
        case '_':
            printf("----.- ");
            break;
        case '|':
            printf("....-. ");
            break;
        case '?':
            printf("-.--- ");
            break;
        case '!':
            printf(".-.... ");
            break;
        case ';':
            printf("-....- ");
            break;
        case ':':
            printf(".----. ");
            break;
        case '-':
            printf(".---. ");
            break;
        case '$':
            printf("..---- ");
            break;
        case '%':
            printf("...-.- ");
            break;
        case '"':
            printf("...--. ");
            break;
        case '@':
            printf("---..- ");
            break;
        case '^':
            printf("-...-- ");
            break;
        case '~':
            printf("---.-- ");
            break;
        case '#':
            printf("..---. ");
            break;
        case '&':
            printf(".---.. ");
            break;
        case '+':
            printf("-...- ");
            break;
        case '=':
            printf("---.- ");
            break;
        case '*':
            printf("-..-- ");
            break;
        case ' ':
        case '\n':
            printf("/ ");
        }
    }
}