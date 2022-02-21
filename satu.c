#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    char number[] = "dcb279fbe68e7bgg91f5941b689c6149";

    if (argc < 2) {
        printf("Usage: satu.exe <flag>\n");
        return 0;
    }

    for (i = 0; i < strlen(number); i++) {
        number[i] -= 1;
    }

    if (strcmp(argv[1], number) == 0) {

        printf("\nCorrect flag\n"); //cba168ead57d6aff80e4830a578b5038

    }
    else {
        printf("\nincorrect flag\n");
    }
}
