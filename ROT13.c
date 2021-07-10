#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int ch1=0;
char ch,cur;
char input_character[200],op[200];
void encrypt()
{
    int i,j=0;
    for(i=0;input_character[i]!='\0';i++,j++)
    {
        ch=input_character[i];
        ch = tolower(ch);
        switch(ch)
        {
        case 'a':
            op[j] = 'n';
            break;
        case 'b':
            op[j] = 'o';
            break;
        case 'c':
            op[j]='p';
            break;
        case 'd':
            op[j] = 'q';
            break;
        case 'e':
            op[j] = 'r';
            break;
        case 'f':
            op[j] = 's';
            break;
        case 'g':
            op[j] = 't';
            break;
        case 'h':
            op[j] = 'u';
            break;
        case 'i':
            op[j] = 'v';
            break;
        case 'j':
            op[j] = 'w';
            break;
        case 'k':
            op[j] = 'x';
            break;
        case 'l':
            op[j] = 'y';
            break;
        case 'm':
            op[j] = 'z';
            break;
        case 'n':
            op[j] = 'a';
            break;
        case 'o':
            op[j] = 'b';
            break;
        case 'p':
            op[j] = 'c';
            break;
        case 'q':
            op[j] = 'd';
            break;
        case 'r':
            op[j] = 'e';
            break;
        case 's':
            op[j] = 'f';
            break;
        case 't':
            op[j] = 'g';
            break;
        case 'u':
            op[j] = 'h';
            break;
        case 'v':
            op[j] = 'i';
            break;
        case 'w':
            op[j] = 'j';
            break;
        case 'x':
            op[j] = 'k';
            break;
        case 'y':
            op[j] = 'l';
            break;
        case 'z':
            op[j] = 'm';
            break;
        case ' ':
            op[j] = ' ';
            break;
        default:
            if(isdigit(ch))
            {
                op[j] = ch;
            }
            if(!isalnum(ch))
            {
                op[j] = ch;
            }
        }
        fflush(stdin);
    }
    printf("The encrypted text is:\n");
    puts(op);
}
void decrypt()
{
    int i,j=0;
    for(i=0;input_character[i]!='\0';i++,j++)
    {
        ch=input_character[i];
        ch = tolower(ch);
        switch(ch)
        {
        case 'n':
            op[j] = 'a';
            break;
        case 'o':
            op[j] = 'b';
            break;
        case 'p':
            op[j]='c';
            break;
        case 'q':
            op[j] = 'd';
            break;
        case 'r':
            op[j] = 'e';
            break;
        case 's':
            op[j] = 'f';
            break;
        case 't':
            op[j] = 'g';
            break;
        case 'u':
            op[j] = 'h';
            break;
        case 'v':
            op[j] = 'i';
            break;
        case 'w':
            op[j] = 'j';
            break;
        case 'x':
            op[j] = 'k';
            break;
        case 'y':
            op[j] = 'l';
            break;
        case 'z':
            op[j] = 'm';
            break;
        case 'a':
            op[j] = 'n';
            break;
        case 'b':
            op[j] = 'o';
            break;
        case 'c':
            op[j] = 'p';
            break;
        case 'd':
            op[j] = 'q';
            break;
        case 'e':
            op[j] = 'r';
            break;
        case 'f':
            op[j] = 's';
            break;
        case 'g':
            op[j] = 't';
            break;
        case 'h':
            op[j] = 'u';
            break;
        case 'i':
            op[j] = 'v';
            break;
        case 'j':
            op[j] = 'w';
            break;
        case 'k':
            op[j] = 'x';
            break;
        case 'l':
            op[j] = 'y';
            break;
        case 'm':
            op[j] = 'z';
            break;
        case ' ':
            op[j] = ' ';
            break;
        default:
            if(isdigit(ch))
            {
                op[j] = ch;
            }
            if(!isalnum(ch))
            {
                op[j] = ch;
            }
        }
        fflush(stdin);
    }
    printf("The decrypted text is :  \n");
    puts(op);
}
void main()
{
    printf("Enter the string:\n");
    gets(input_character);
    printf("\nPress 1 for Encryption or press 2 for Decryption\n");
    scanf("%d",&ch1);
    switch(ch1)
    {
    case 1:
        encrypt();
        break;
    case 2:
        decrypt();
        break;
    default:
        exit(0);
    }
    fflush(stdin);
}
