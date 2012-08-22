#include <stdio.h>

#define MAX_SIZE_DATA 50

enum { Q0, Q1, Q2, Q3, Q4, Qe } State;

int main() {
    char input[MAX_SIZE_DATA];
    char c;
    int i = 0;
    int state = Q0;
    int done = 0;

    printf("Input: ");
    scanf("%s", input);
    printf("Regex: (ba)*(dac)*\n");
    printf("Match = ");

    do {
        c = toupper(input[i++]);

        if (c == '\0')
        {
            break;
        }

        switch(state)
        {
            case Q0:
                if (c == 'B')
                {
                    printf("b");
                    state = Q1;
                }
                else if (c == 'D')
                {
                    printf("d");
                    state = Q2;
                }
                else
                {
                    state = Qe;
                }
                break;
            case Q1:
                if (c == 'A')
                {
                    printf("a");
                    state = Q0;
                }
                else
                {
                    state = Qe;
                }
                break;
            case Q2:
                if (c == 'A')
                {
                    printf("a");
                    state = Q3;
                }
                else
                {
                    state = Qe;
                }
                break;
            case Q3:
                if (c == 'C')
                {
                    printf("c");
                    state = Q4;
                }
                else
                {
                    state = Qe;
                }
                break;
            case Q4:
                if (c == 'D')
                {
                    printf("d");
                    state = Q2;
                }
                else
                {
                    state = Qe;
                }
                break;
            default:
                printf("\nError\n");
                done = 1;
        }
    } while (!done);

    printf("\n");

    return 0;
}
