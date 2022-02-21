#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int i;
    char password[] = "Ckk`$nkf%";
    char password2[] = "jfw[esawkia"; //nbs_awesome
    char corr[] = "Gkvvagp$tewwskv`";
    char incorr[] = "Mjgkvvagp$tewwskv`";

    if (argc < 2) {
        printf("Usage: dua.exe <password>\n");
        return 0;
    }

    for (i = 0; i < strlen(password2); i++) {
        password2[i] ^= 4;
    }

    for (i = 0; i < strlen(password); i++) {
        password[i] ^= 4;
    }

    for (i = 0; i < strlen(corr); i++) {
        corr[i] ^= 4;
    }

    for (i = 0; i < strlen(incorr); i++) {
        incorr[i] ^= 4;
    }

    if (strcmp(argv[1], password2) == 0) {
        printf("%s\n", corr);
        printf("%s\n", password);
    }
    else {
        printf("%s\n", incorr);
        
    }
}
