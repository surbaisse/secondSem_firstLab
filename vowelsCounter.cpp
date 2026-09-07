#include <iostream>
#include <string>
// проверка явялется ли байт буквой гласной
bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}
// подсчет кол-ва гласных
int countVowels(const std::string& str) {
    int count = 0;
    for (char ch : str) {
        if (isVowel(ch)) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::string input;

    std::cout << "Введите строку: ";
    std::getline(std::cin, input); 

    int result = countVowels(input);
    std::cout << "Количество гласных: " << result << std::endl;

    return 0;
}
