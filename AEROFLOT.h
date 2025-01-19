#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
static const int l_name = 10;

class AEROFLOT
{
public:
    AEROFLOT();
    ~AEROFLOT();
    string GetDestination_point() const;
    int GetFlight_number() const;
    bool operator < (const AEROFLOT& counter) const
    {
        return flight_number < counter.flight_number;
    }
    friend istream& operator >>(istream&, AEROFLOT&); // Операция извлечения (ввода)
    friend ostream& operator <<(ostream&, AEROFLOT&); // Операция вставки (вывода)
private:
    string destination_point;
    int    flight_number;
    string aircraft_type;
};


