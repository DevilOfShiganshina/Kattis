#include <iostream>
#include <string>

char decrypt(short, short, short);

int main(void) {

    std::string text, key;
    std::cin >> text >> key;

    for (short i = 0; i < text.length(); ++i) {
        if (key[i] == 'A') { continue; }
        text[i] = decrypt(int(text[i] - 65), int(key[i] - 65), i);
    }

    std::cout << text << std::endl;

    return 0;
}

char decrypt(short c, short k, short in) {
    if (in % 2 == 0) {
        c = c - k;
        if (c < 0) { return (char((26 + c) + 65)); }
        return (char(c + 65));
    }

    else { return (char(((c + k) % 26) + 65)); }
}