#include <iostream>
#include <string>

int main(void) {
  std::string ciphertext, key;
  std::cin >> ciphertext >> key;

  for (short i = 0; i < ciphertext.length(); i++) {
    short deciphered_char = ((int(ciphertext[i] - 65) - int(key[i] - 65)) % 26);
    if (deciphered_char < 0) { deciphered_char += 26; }
    ciphertext[i] = char('A' + (deciphered_char % 26));
    key += ciphertext[i];
  } std::cout << ciphertext << std::endl;
  return 0;
}