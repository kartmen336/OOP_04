#include "windows.h"      // для работы в среде Windows с кириллицей
#include "AEROFLOT.h"
#include "GetFunc.h"
AEROFLOT::AEROFLOT(int lName) {
}
AEROFLOT::~AEROFLOT() {}
string AEROFLOT::GetDestination_point() const { return destination_point; }
int AEROFLOT::GetFlight_number() const { return flight_number; }
istream& operator >> (istream& in, AEROFLOT& ob) { // ---- Операция извлечения (ввода)
    cout << "\nВведите данные в формате" << endl;
    cout << "Название пункта назначения <Enter> Номер рейса <Enter>";
    cout << " Тип самолёта <Enter>:" << endl;
    cin >> ob.destination_point;
    //OemToChar(ob.destination_point, ob.destination_point);    // для работы в среде Windows с кириллицей
    ob.flight_number = GetInt(in);                                    // 3 
    cin >> ob.aircraft_type;
    //OemToChar(ob.aircraft_type, ob.aircraft_type);                                          // 4
    return in;
}
ostream& operator << (ostream& out, AEROFLOT& ob) { // ---- Операция вставки (вывода)
    out << left << setw(10);
    out << ob.destination_point << "  ";
    out << ob.flight_number << "  ";
    out << ob.aircraft_type << endl;
    return out;
}