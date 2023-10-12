#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    char num1;
    cout << "Выберете станцию" << endl << endl;
    cout << "[A] Белые столбы" << endl;
    cout << "[B] Узуново" << endl;
    cout << "[C] Аэропорт Домодедово" << endl;
    cout << "[D] Барыбино" << endl;
    cout << "[E] Домодедово" << endl;
    cin >> num1;
    switch (num1) {
    case 'a':
    case 'A':
        cout << "Будет на станции Повелецкая" << endl;
        cout << "4.30" << endl;
        break;

    case 'b':
    case 'B':
        cout << "Будет на станции Повелецкая" << endl;
        cout << "7.40" << endl;
        break;

    case 'c':
    case 'C':
        cout << "Будет на станции Повелецкая" << endl;
        cout << "1.30" << endl;
        break;

    case 'd':
    case 'D':
        cout << "Будет на станции Повелецкая" << endl;
        cout << "8.00" << endl;
        break;

    case 'e':
    case 'E':
        cout << "Будет на станции Повелецкая" << endl;
        cout << "7.59" << endl;
        break;
    
    }

    return 0;
}