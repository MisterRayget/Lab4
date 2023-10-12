#include <iostream>
using namespace std;

int main(){
    setlocale(0, "");
    int num1;//Первое число.
    int num2;//Второе число.
    int num3;//Ответ пользователя.
    cout << "Введите первое число:";
    cin >> num1;
    cout << "Введите второе число:";
    cin >> num2;
    cout << "Введите ответ:";
    cin >> num3;
    if (num1 * num2 == num3)
        cout << "Правильно";
    else
        cout << "Не правильно";


    return 0;
}