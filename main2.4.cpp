#include <iostream>
#include <string>
#include <iomanip>
#include "Board kills monstrs.h"
#include "Board kills monstr type.h"

using namespace std;

class dostavka : public Board {
	dostavka() {
		exercise = "Help us!";
		coins = 0;
		location_start = "Рощя";
		location_end = "Речка";
		thing = "Берёзкина Лариса Лукиничка";
		time = "Один час";
	}

	void print() override {
		std::cout << "Задача: " << exercise << std::endl
			<< "Награда: " << coins << std::endl
			<< "Расположения предмета: " << location_start << std::endl;
		locat();
		cout << "Расположения заказчика: " << location_end << std::endl;
		locat();
		std::cout << "Вещь: " << thing << std::endl
			<< "Титул: " << title << std::endl
			<< std::endl;
	}
};
int main() {
	setlocale(LC_ALL, "rus");
	srand((unsigned)time(NULL));

	Board_kills_monstrs dask_1;
	Board_kills_monstr_type dask_2;

	cout << "Helllllllllllllllll\n\n\n";

	dask_1.print();
	dask_2.print();


	cout << "Helllllllllllllllll\n\n\n";
	system("pause");

	return 0;
}
