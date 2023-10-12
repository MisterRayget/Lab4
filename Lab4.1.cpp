#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1 = 0;//Значение введенное пользователем.
    int num2 = 0;//Макс. возрост
    int num3 = 100;//Мин. возраст
    int num4 = 0;//сумма поситителей
    int num5 = 0;//для записи среднего возраста
    int num6 = 0;//колличеставо поситителей
    cout << "Введите количество поситителей:";
    cin >> num6;
    for (int num7 = 0; num7 < num6; num7++) {
        cout << "Введите возраст:";
        cin >> num1;
        if (num1 > num2)
            num2 = num1;
        if (num1 < num3)
            num3 = num1;
        num4 += num1;
    }
    num5 = num4 / num6;
    cout << "Средний возраст всех посетителей:" << num5 << endl;
    cout << "Самый взрослый:" << num2 << endl;
    cout << "Самый молодой:" << num3 << endl;

    return 0;
}