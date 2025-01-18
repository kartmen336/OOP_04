#include "AEROFLOT.h"
#include "GetFunc.h"
int GetInt(istream& in) { // ---------------------------- ввод целого числа
    int value;
    while (true) {
        in >> value;                                                  // 5
        if (in.peek() == '\n') {                                      // 6
            in.get();                                                 // 7
            break;
        }
        else {
            cout << "Повторите ввод (ожидается целое число):" << endl; // 8
            in.clear();                                                // 9
            while (in.get() != '\n') {};                             // 10
        }
    }
    return value;
}

string GetString(istream& in) { // --------------------- ввод вещественного числа
    string value;
    do {
        in >> value;
        if (in.peek() == '\n') { in.get(); break; }
        else {
            cout << "Повторите ввод (ожидается вещественное число):" << endl;
            in.clear();
            while (in.get() != '\n') {};
        }
    } while (value.empty());
    return value;
}