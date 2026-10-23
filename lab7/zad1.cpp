#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& text) {
    std::istringstream iss(text);
    std::string word;
    int count = 0;
    while (iss >> word) {
        ++count;
    }
    return count;
}

int main() {
    std::string text;
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);

    std::cout << "Количество слов: " << countWords(text) << "\n";
    return 0;
}