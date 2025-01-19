#pragma once
#include "AEROFLOT.h"
class DBase {
public:
    DBase(int);
    ~DBase();
    void InitInput();
    void Sort();        // функция для сортировки списка рейсов по возрастанию номера рейса
    void Show();
    void SearchDestination_point(string); // поиск рейса по пункту назначения
private:
    AEROFLOT* pAEROFLOT;
    int  nRecords;
};

