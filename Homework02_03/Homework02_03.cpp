#include <iostream>

struct address
{
	std::string City;
	std::string Street;
	int HouseNumber{};
	int ApartNumber{};
	int Index{};
};

int main ()
{ 
	setlocale(LC_ALL, "Russian");

	address add;

	std::cout << "Город: ";
	std::cin >> add.City;

	std::cout << "Улица: "; 
	std::cin >> add.Street;

	std::cout << "Номер дома: "; 
	std::cin >> add.HouseNumber; 
	

	std::cout << "Номер квартиры: ";
	std::cin >> add.ApartNumber;

	std::cout << "Индекс: ";
	std::cin >> add.Index;

	return 0;
}
