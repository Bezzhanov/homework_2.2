#include <iostream>
struct BankAccount
{
	int AccountNumber;
	std::string AccountOwner;
	float AccountBalance;

	
	void create_new(){
		std::cout << "Введите номер счёта: ";
		std::cin >> AccountNumber;
		std::cout << "Введите имя владельца: ";
		std::cin >> AccountOwner;
		std::cout << "Введите баланс: ";
		std::cin >> AccountBalance;
	};
	void change_balance() {
		std::cout << "Введите новый баланс: ";
		std::cin >> AccountBalance;
	}

	void print_account() {
		std::cout << "Ваш счёт: " << AccountOwner << ", " << AccountNumber << ", " << AccountBalance;
	}
};



int main() {
	setlocale(LC_ALL, "ru_RU");
	BankAccount my;
	my.create_new();
	my.change_balance();
	my.print_account();


	return 0;
}