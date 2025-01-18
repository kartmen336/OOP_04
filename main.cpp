#include "AEROFLOT.h"
#include "GetFunc.h"
#include "DBase.h"

int main() {
	system("chcp 1251");
	const int nRecord = 5; // количество записей в базе данных
	string any_Destination_point;
	setlocale(LC_ALL, "Russian"); // только для работы в среде Windows
	DBase dBase(nRecord);
	dBase.InitInput();
	dBase.Show();
	cout << "Ввод данных завершен." << endl;
	cout << "=================================================" << endl;
	cout << "Поиск  рейсов и типов самолетов, вылетающих в пункт назначения." << endl;
	cout << "Поиск завершается при вводе -1." << endl;
	while (true) {
		cout << "\nВведите пункт назначения или -1: ";
		cin >> any_Destination_point;
		if (any_Destination_point == "-1") break;
		dBase.SearchDestination_point(any_Destination_point);
	}
}