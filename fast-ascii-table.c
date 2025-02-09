/*
 * Super Duper Ultra Fast version of ascii-table
 */

#include <stdio.h>

int main()
{
    printf("Dec     Hex     Char                  | Dec     Hex     Char | Dec      Hex     Char | Dec      Hex     Char\n");
    printf("--------------------------------------+----------------------+-----------------------+------------------------\n");
    printf("0       0       [null]                | 32      20      [ ]  | 64       40      [@]  | 96       60      [`]\n");
    printf("1       1       [start of heading]    | 33      21     	[!]  | 65      	41     	[A]  | 97      	61     	[a]\n");
    printf("2       2       [start of text]       | 34      22     	[\"]  | 66      	42     	[B]  | 98      	62     	[b]\n");
    printf("3       3       [end of text]         | 35      23     	[#]  | 67      	43     	[C]  | 99      	63     	[c]\n");
    printf("4       4       [end of transmission] | 36      24     	[$]  | 68      	44     	[D]  | 100      64      [d]\n");
    printf("5       5       [enquiry]             | 37      25     	[%%]  | 69      	45     	[E]  | 101     	65     	[e]\n");
    printf("6       6       [aknowledge]          | 38      26     	[&]  | 70      	46     	[F]  | 102     	66     	[f]\n");
    printf("7       7       [bell]                | 39      27     	[']  | 71      	47     	[G]  | 103     	67     	[g]\n");
    printf("8       8       [backspace]           | 40      28     	[(]  | 72      	48     	[H]  | 104     	68     	[h]\n");
    printf("9       9       [horizontal tab]      | 41      29     	[)]  | 73      	49     	[I]  | 105     	69     	[i]\n");
    printf("10      a       [line feed]           | 42      2a     	[*]  | 74      	4a     	[J]  | 106     	6a     	[j]\n");
    printf("11      b       [vertical tab]        | 43      2b     	[+]  | 75      	4b     	[K]  | 107     	6b     	[k]\n");
    printf("12      c       [form feed]           | 44      2c     	[,]  | 76      	4c     	[L]  | 108     	6c     	[l]\n");
    printf("13      d       [carriage return]     | 45      2d     	[-]  | 77      	4d     	[M]  | 109     	6d     	[m]\n");
    printf("14      e       [shift out]           | 46      2e     	[.]  | 78      	4e     	[N]  | 110     	6e     	[n]\n");
    printf("15      f       [shift in]            | 47      2f     	[/]  | 79      	4f     	[O]  | 111     	6f     	[o]\n");
    printf("16      10      [data link escape]    | 48      30     	[0]  | 80      	50     	[P]  | 112     	70     	[p]\n");
    printf("17      11      [device control 1]    | 49      31     	[1]  | 81      	51     	[Q]  | 113     	71     	[q]\n");
    printf("18      12      [device control 2]    | 50      32     	[2]  | 82      	52     	[R]  | 114     	72     	[r]\n");
    printf("19      13      [device control 3]    | 51      33     	[3]  | 83      	53     	[S]  | 115     	73     	[s]\n");
    printf("20      14      [device control 4]    | 52      34     	[4]  | 84      	54     	[T]  | 116     	74     	[t]\n");
    printf("21      15      [negative aknowledge] | 53      35     	[5]  | 85      	55     	[U]  | 117     	75     	[u]\n");
    printf("22      16      [synchronious idle]   | 54      36     	[6]  | 86      	56     	[V]  | 118     	76     	[v]\n");
    printf("23      17      [end of trans. block] | 55      37     	[7]  | 87      	57     	[W]  | 119     	77     	[w]\n");
    printf("24      18      [cancel]              | 56      38     	[8]  | 88      	58     	[X]  | 120     	78     	[x]\n");
    printf("25      19      [end of medium]       | 57      39     	[9]  | 89      	59     	[Y]  | 121     	79     	[y]\n");
    printf("26      1a      [substitute]          | 58      3a     	[:]  | 90      	5a     	[Z]  | 122     	7a     	[z]\n");
    printf("27      1b      [escape]              | 59      3b     	[;]  | 91      	5b     	[[]  | 123     	7b     	[{]\n");
    printf("28      1c      [file seperator]      | 60      3c     	[<]  | 92      	5c     	[\\]  | 124     	7c     	[|]\n");
    printf("29      1d      [group seperator]     | 61      3d     	[=]  | 93      	5d     	[]]  | 125     	7d     	[}]\n");
    printf("30      1e      [record seperator]    | 62      3e     	[>]  | 94      	5e     	[^]  | 126     	7e     	[~]\n");
    printf("31      1f      [unit seperator]      | 63      3f     	[?]  | 95      	5f     	[_]  | 127     	7f     	[del]\n");
}
