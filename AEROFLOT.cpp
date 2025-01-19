#include "windows.h"      // для работы в среде Windows с кириллицей
#include "AEROFLOT.h"
#include "GetFunc.h"
AEROFLOT::AEROFLOT() { }
AEROFLOT::~AEROFLOT() {}
string AEROFLOT::GetDestination_point() const { return destination_point; }
int AEROFLOT::GetFlight_number() const { return flight_number; }
istream& operator >> (istream& in, AEROFLOT& ob) { // ---- Операция извлечения (ввода)
    cout << "\nВведите данные в формате" << endl;
    cout << "Название пункта назначения <Enter> Номер рейса <Enter>";
    cout << " Тип самолёта <Enter>:" << endl;
    ob.destination_point = GetString(in);
    ob.flight_number = GetInt(in);                               
    ob.aircraft_type = GetString(in);;
    return in;
}
ostream& operator << (ostream& out, AEROFLOT& ob) { // ---- Операция вставки (вывода)
    out << left << setw(15);
    out << ob.destination_point << "  ";
    out << left << setw(10);
    out << ob.flight_number << "  ";
    out << ob.aircraft_type << endl;
    return out;
}