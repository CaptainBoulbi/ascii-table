#include <stdio.h>
#include <string.h>

int is_char(char c)
{
    return c >= 32 && c <= 126;
}

char* char_name(char c)
{
    c %= 128;

    static char buff[2] = {0};

    switch (c) {
        case 0: return "null";
        case 1: return "start of heading";
        case 2: return "start of text";
        case 3: return "end of text";
        case 4: return "end of transmission";
        case 5: return "enquiry";
        case 6: return "aknowledge";
        case 7: return "bell";
        case 8: return "backspace";
        case 9: return "horizontal tab";
        case 10: return "line feed";
        case 11: return "vertical tab";
        case 12: return "form feed";
        case 13: return "carriage return";
        case 14: return "shift out";
        case 15: return "shift in";
        case 16: return "data link escape";
        case 17: return "device control 1";
        case 18: return "device control 2";
        case 19: return "device control 3";
        case 20: return "device control 4";
        case 21: return "negative aknowledge";
        case 22: return "synchronious idle";
        case 23: return "end of trans. block";
        case 24: return "cancel";
        case 25: return "end of medium";
        case 26: return "substitute";
        case 27: return "escape";
        case 28: return "file seperator";
        case 29: return "group seperator";
        case 30: return "record seperator";
        case 31: return "unit seperator";
        case 127: return "del";
        default: buff[0] = c; return buff;
    }

    return "wtf?";
}

int main()
{
    printf("Dec\tHex\tChar                  | ");
    printf("Dec\tHex\tChar | ");
    printf("Dec\tHex\tChar | ");
    printf("Dec\tHex\tChar\n");
    printf("--------------------------------------+");
    printf("----------------------+");
    printf("-----------------------+");
    printf("------------------------\n");
    int nb_column = 4;
    int u = 128/nb_column;
    for (int i = 0; i < u; i++) {
        char c;
        char* s;

        c = u*0+i;
        s = char_name(c);
        printf("%d\t%x\t[%s] ", c, c, s);
        for (size_t y = 0; y < 19 - strlen(s); y++) {
            printf(" ");
        }
        printf("| ");

        c = u*1+i;
        s = char_name(c);
        printf("%d\t%x\t[%s]  | ", c, c, s);

        c = u*2+i;
        s = char_name(c);
        printf("%d\t%x\t[%s]  | ", c, c, s);

        c = u*3+i;
        s = char_name(c);
        printf("%d\t%x\t[%s]\n",   c, c, s);
    }
}
