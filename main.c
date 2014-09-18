#include <stdio.h>
#include <stdlib.h>

const int ABC_SIZE = 'z' - 'a' + 1;

char replace(char c, char a, int shift) {
    int c_index = c - a;
    int new_index = c_index + shift;
    int remainder;
    if (new_index >= 0) {
        remainder = new_index % ABC_SIZE;
    } else {
        int _ = (-new_index) % ABC_SIZE;
        remainder = ABC_SIZE - _;
    }
    char new_c = remainder + a;
    return new_c;
}

int main(int argc, char* argv[]) {
    int shift = atoi(argv[1]);
    while (true) {
        char c = getchar();
        if (c == EOF) {
            break;
        }
        if (c >= 'a' && c <= 'z') {
            putchar(replace(c, 'a', shift));
        } else if (c >= 'A' && c <= 'Z') {
            putchar(replace(c, 'A', shift));
        } else {
            putchar(c);
        }
    }
}
