#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout<<"Dankov Artem,IS-01,27-V"<<endl;
    int i, p1, p2, p3;
    for (i = 10000; i <= 1000000; i++) {
        p1 = i % 10; // визначаємо останню цифру числа
        p2 = i % 100; // визначаємо останній біном числа
        p3 = i % 1000; // визначаємо останній октант числа
        int k = 0, a = i;
        while (a >= 1) {
            k++;
            a /= 10;
        }
        if (k == 5) {  // умова перевірки для п'ятицифрового числа
            int d1, d2, d3, d4, d5;
            d1 = p1;
            d2 = i / 10 % 10;
            d3 = i / 100 % 10;
            d4 = i / 1000 % 10;
            d5 = i / 10000;
            if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5) cout << i << endl; // При рівності всіх 5 цифр виводимо число
        }
        else {
            int p21, p22; // оголошуємо перший та другий біноми
            p21 = i / 100 % 100; // обчислення
            p22 = i / 10000;
            if (p2 == p21 && p21 == p22) cout << i << endl; // перевірка трьох біномів 6-цифрового числа
            else {
                int p31 = i / 1000;
                if (p3 == p31) cout << i << endl;  // перевірка двох октантів 6-цифрового числа
            }
        }
    }
}

