#include <iostream>
using namespace std; // библиотека
int main() // метод
{
    int age = 23;
    cout<<"Hello World " << age << endl;
    // типы данных int, string, double, bool
    string name = "Cholponai";
    cout<< name << endl;
    
    int a1 = 25;
    int a2 = 35;
    int a3 = a1 + a2;
    cout << a1 << " + " << a2 << " = " << a3 << endl;
    a3 = a1 - a2;
    cout << a1 << " - " << a2 << " = " << a3 << endl;
    a3 = a1 * a2;
    cout << a1 << " x " << a2 << " = " << a3 << endl;
    a3 = a1 / a2;
    cout << a1 << " : " << a2 << " = " << a3 << endl;
    
    double ilgiz = 12.3;
    cout << ilgiz << endl;
    
//   >  <   !=     ==   <=    >=   в программировании
//   >  <   ≠      =    ≤     ≥   в школьной математике 

    bool b1 = 12 > 15;   // true false 
    bool b2 = 12 < 15;   // 1     0
    cout <<" 12 > 15 ответ " << b1  << endl;
    cout <<" 12 < 15 ответ " << b2  << endl;
    
    bool b3 = 5 != 4;
    cout <<" 5 ≠ 4 ответ " << b3  << endl;
    bool b4 = 5 != 5;
    cout <<" 5 = 5 ответ " << b4  << endl;
    
    bool b5 = 48 == 48;
    cout <<" 48 = 48 ответ " << b5  << endl;
    bool b6 = 48 == 46;
    cout <<" 48 = 46 ответ " << b6  << endl;
    
    // string myName = "";
    // cout << "Ввведите имя : ";
    // cin >> myName;
    
    // string myLastName = "";
    // cout << "Ввведите фамилию : ";
    // cin >> myLastName;
    
    //  cout << "Вас зовут " << myLastName << " " << myName << endl;
    
    // int money;
    // cout<<"Сколько у Вас денег: ";
    // cin >> money;
    // if(money > 100){
    //     cout << "Ты можешь купить торт";
    // }
    // else if(money >= 50){ 
    //     cout << "Ты можешь купить пирог";
    // }
    // else{
    //     cout << "Ты можешь купить конфету";
    // }
    int number;
    cout<<"Введите число: ";
    cin >> number;
    if(number > 0){
        cout << "Число положительное";
    }
    else if(number < 0){ 
        cout << "Число отрицательное";
    }
    else if(number == 0){ 
        cout << "Число равно нулю";
    }
    
    return 0;
}
