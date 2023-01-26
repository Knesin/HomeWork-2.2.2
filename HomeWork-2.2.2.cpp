#include <iostream>
#include <string>

struct account {
    unsigned int number;
    std::string name;
    double money;
};

void changeMoney(account& user, const double &new_money)
{
    user.money = new_money;
}

int main()
{
    account user1;
    double in_money;

    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::cout << "Введите номер счёта: ";
    std::cin >> user1.number;
    std::cout << "Введите имя владельца: ";
    std::cin >> user1.name;
    std::cout << "Введите баланс: ";  
    std::cin >> user1.money;
    std::cout << "Введите новый баланс : ";
    std::cin >> in_money;
    changeMoney(user1, in_money);
    std::cout << "Ваш счёт: " << user1.name << ", " << user1.number << ", " << user1.money << std::endl;

}
