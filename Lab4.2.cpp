#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;
    cout << "Выберите день недели" << endl << endl;
    cout << "[1] Понидельник" << endl;
    cout << "[2] Вторник" << endl;
    cout << "[3] Среда" << endl;
    cout << "[4] Четверг" << endl;
    cout << "[5] Пятница" << endl;
    cout << "[6] Суббота" << endl;
    cout << "[7] Воскресенье" << endl;
    cin >> num1;
    switch (num1) {
    case 1:
        cout << "4.50-Просыпайся" << endl;
        cout << "16.16-Твоя электричка подходит" << endl;
        break;

    case 2:
        cout << "4.50-Просыпайся" << endl;
        cout << "17.51-Твоя электричка подходит" << endl;
        break;

    case 3:
        cout << "4.50-Просыпайся" << endl;
        cout << "17.51-Твоя электричка подходит" << endl;
        break;

    case 4:
        cout << "4.50-Просыпайся" << endl;
        cout << "17.51-Твоя электричка подходит" << endl;
        break;

    case 5:
        cout << "4.50-Просыпайся" << endl;
        cout << "16.16-Твоя электричка подходит" << endl;
        break;

    case 6:
        cout << "9.00-Просыпайся" << endl;
        cout << "16.00-Займись хоть чемто" << endl;
        break;

    case 7:
        cout << "9.00-Просыпайся" << endl;
        cout << "16.00-Займись хоть чемто" << endl;
        break;
    }

    return 0;
}