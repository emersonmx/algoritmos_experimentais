#include <stdio.h>
#include <string.h>

#define MAX_SIZE_DATA 50

enum { Q0, Q1, Qe } State;

int main() {
    char input[MAX_SIZE_DATA];
    char c;
    int i = 0;
    int state = Q0;
    int done = 0;

    printf("Input: ");
    scanf("%s", input);
    printf("Regex: (ab)*\n");
    printf("Match = ");

    do {
    	c = toupper(input[i++]);

        if (c == '\0')
        {
            break;
        }

        switch(state) {
            case Q0:
                if (c == 'A')
                {
                    printf("a");
                    state = Q1;
                }
                else
                {
                    state = Qe;
                }
                break;
            case Q1:
                if (c == 'B')
                {
                    printf("b");
                    state = Q0;
                }
                else
                {
                    state = Qe;
                }
                break;
            default:
                done = 1;
                printf("\nError\n");
        }
    } while (!done);

    printf("\n");

    return 0;
}

