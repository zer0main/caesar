#include <bits/stdc++.h>

#define ALPH_SIZE 32
#define INPUT_SIZE 10000

char str[INPUT_SIZE];

static const char* alphabet[] = {
    "А", "Б", "В", "Г", "Д", "Е", "Ж", "З", "И", "Й", "К", "Л", "М",
    "Н", "О", "П", "Р", "С", "Т", "У", "Ф", "Х", "Ц", "Ч", "Ш", "Щ",
    "Ъ", "Ы", "Ь", "Э", "Ю", "Я",
};

static int indexOfChar(const char* c) {
    for (int j = 0; j < ALPH_SIZE; j++) {
        if (memcmp(c, alphabet[j], 2) == 0) {
            return j;
        }
    }
    throw int();
}

int main() {
    int n_symb, shift;
    std::cin >> n_symb >> shift;
    fread(str, 2, n_symb, stdin);
    for (int i = 0; i < n_symb; i++) {
        int index = indexOfChar(str + 2 * i + 1);
        index = (index + shift) % ALPH_SIZE;
        std::cout << alphabet[index];
    }
    std::cout << std::endl;
    return 0;
}
