#include "AEROFLOT.h"
#include "GetFunc.h"
int GetInt(istream& in) { // ---------------------------- ввод целого числа
    int value;
    while (true) {
        in >> value;                                                  
        if (in.peek() == '\n') {                                  
            in.get();                                               
            break;
        }
        else {
            cout << "Повторите ввод (ожидается целое число):" << endl; 
            in.clear();                                                
            while (in.get() != '\n') {};                           
        }
    }
    return value;
}

string GetString(istream& in) { // --------------------- ввод строки
    string value;
    int maxLength = 30;
    while (true) {
        getline(cin, value);

        if (value.length() <= maxLength) {
            break; // Ввод корректен, выходим из цикла
        }
        else {
            cout << "Ошибка: строка превышает максимальную длину! (максимальная длина строки - " << maxLength << " символов)" << endl;
        }
    }
    return value;
}