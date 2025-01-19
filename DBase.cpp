#include "DBase.h"
#include <cstring>
#include <algorithm>
using namespace std;

DBase::DBase(int nRec) : nRecords(nRec),
pAEROFLOT(new AEROFLOT[nRec]) {}
DBase::~DBase() { if (pAEROFLOT) delete[] pAEROFLOT; }

void DBase::InitInput() {
    for (int i = 0; i < nRecords; i++) cin >> *(pAEROFLOT + i);        
}
void DBase::Sort() {
    sort(pAEROFLOT, pAEROFLOT + nRecords, [](AEROFLOT& a, AEROFLOT& b) { return a < b; }); 
}
void DBase::Show() {
    cout << "================================" << endl;
    cout << "Содержимое базы данных:" << endl;
    sort(pAEROFLOT, pAEROFLOT + nRecords, [](AEROFLOT& a, AEROFLOT& b) {
        return a < b; 
        });
    cout << "Пункт назначения " << "Номер рейса " << "Тип самолёта" << endl;
    for (int i = 0; i < nRecords; i++) cout << *(pAEROFLOT + i);         
}
void DBase::SearchDestination_point(string anyDestination_point) {
    bool not_found = true;
    for (int i = 0; i < nRecords; i++)
        if ((pAEROFLOT + i)->GetDestination_point() == anyDestination_point) {
            cout << "Пункт назначения " << "Номер рейса " << "Тип самолёта" << endl;
            cout << *(pAEROFLOT + i);
            not_found = false;
        }
    if (not_found) cout << "Такого пункта назначения нет." << endl;
}