#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int num1;
    cout << "Выберете номер пальца" << endl << endl;
    cout << "[1]" << endl;
    cout << "[2]" << endl;
    cout << "[3]" << endl;
    cout << "[4]" << endl;
    cout << "[5]" << endl;
    cin >> num1;
    switch (num1) {
    case 1:
        cout << "Большой палец" << endl;
        break;

    case 2:
        cout << "Указательный палец" << endl;
        break;

    case 3:
        cout << "Средний палец" << endl;
        break;

    case 4:
        cout << "Безымянный палец" << endl;
        break;

    case 5:
        cout << "Мизинец" << endl;
        break;
    }

    return 0;
}