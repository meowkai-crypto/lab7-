#include <iostream>
#include <string>
#include <regex>

bool validateEmail(const std::string& email) {
    std::regex pattern(R"(^[\w.]+@[\w-]+\.[\w-]+$)");
    return std::regex_match(email, pattern);
}

bool validatePhone(const std::string& phone) {
    std::regex pattern(R"(^\+7?[\s-]?\(?\d{3}\)?[\s-]?\d{3}[\s-]?\d{2}[\s-]?\d{2}$)");
    return std::regex_match(phone, pattern);
}

bool validateUrl(const std::string& url) {
    std::regex pattern(R"(^https?://[\w.-]+\.[a-z]{2,}(/[\w./-]*)?$)");
    return std::regex_match(url, pattern);
}

int main() {
    setlocale(LC_ALL, "");

    std::string email, phone, url;

    std::cout << "Введите вашу почту: ";
    std::getline(std::cin, email);
    std::cout << "Email: " << (validateEmail(email) ? "[Корректный]" : "[Некорректный]") << "\n\n";

    std::cout << "Введите ваш номер телефона: ";
    std::getline(std::cin, phone);
    std::cout << "Телефон: " << (validatePhone(phone) ? "[Корректный]" : "[Некорректный]") << "\n\n";

    std::cout << "Введите ваш URL: ";
    std::getline(std::cin, url);
    std::cout << "URL: " << (validateUrl(url) ? "[Корректный]" : "[Некорректный]") << "\n";

    return 0;
}