#pragma once
#include "AEROFLOT.h"
class DBase {
public:
    DBase(int);
    ~DBase();
    void InitInput();
    void Show();
    void SearchDestination_point(string);
private:
    AEROFLOT* pAEROFLOT;
    int  nRecords;
};

