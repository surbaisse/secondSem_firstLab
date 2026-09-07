#include <iostream>
#include <string>

using namespace std;

// проверка является ли байт символом
bool isLetter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int main() {
	// ввод строки
	string result;
    string input;
    cout << "Введите строку на английском: ";
    getline(cin, input);
	// составление строки без спец символов и знаков препинания
    for (char ch : input) {
        if (isLetter(ch) || ch == ' ') {
            result += ch; 
        }
    }
	// вывод результата
    cout << "Результат: " << result << std::endl;
}
