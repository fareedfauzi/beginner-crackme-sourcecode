#include <stdio.h>
#include <string.h>

// This crackme adds a hardcoded mask to its hardcoded password.

#define CORRECT_LEN 6

// Returns one if the given password is equal to the given correct word masked
// with the given mask.
int check_pw(char* password, char* correct, char* mask) {
    // Look at each character of the submitted string, computing the mask along the way.
    int i = 0;
    // If this is never modified, the password was right.
    char success = 1;
    do {
        char masked_char = correct[i] + mask[i];
        if (masked_char != password[i]) {
            return 0;
        }
        i++;
    } while (correct[i] != 0 && password[i] != 0);
    return 1;
}

int main(int argc, char** argv) {

    if (argc != 2) {
        printf("NUsage: empat.exe <password>\n");
        return -1;
    }

    char correct[CORRECT_LEN + 1] = "lAmBdA";
    char mask[CORRECT_LEN + 1] = {2, 3, 2, 3, 5};
    // This makes the real password "nDoEiA"
    
    if (strlen(argv[1]) == CORRECT_LEN && check_pw(argv[1], correct, mask)) {
        printf("Yes, %s is correct!\n", argv[1]);
        return 0;
    }
    
    printf("No, %s is not correct.\n", argv[1]);
    return 1;

}
