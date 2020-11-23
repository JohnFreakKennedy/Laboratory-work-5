#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout<<"Dankov Artem,IS-01,27-V"<<endl;
    int i, j, p1, p2, p3;
    for (i = 10000; i <= 1000000; i++) {
        p1 = i % 10;
        p2 = i % 100;
        p3 = i % 1000;
        int k = 0, a = i;
        while (a >= 1) {
            k++;
            a /= 10;
        }
        if (k == 5) {
            int d1, d2, d3, d4, d5;
            d1 = p1;
            d2 = i / 10 % 10;
            d3 = i / 100 % 10;
            d4 = i / 1000 % 10;
            d5 = i / 10000;
            if (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d5) cout << i << endl;
        }
        else {
            int p21, p22;
            p21 = i / 100 % 100;
            p22 = i / 10000;
            if (p2 == p21 && p21 == p22) cout << i << endl;
            else {
                int p31 = i / 1000;
                if (p3 == p31) cout << i << endl;
            }
        }
    }
}

/*int main()
{
    int i, j, g, p, n;
    //cout << 11111 << endl;
    for (i = 10000; i <= 1000000; i++) {
        for (j = 10, n = 1; n <= 3; j*=10, n++) {
            if (i < 100000 && n>1) break;
            int k = 0, a = i;
            p = i % j;
            while (a > 1) {
                k++;
                a /= 10;
            }
            int b = 0;
            for (g = 1; g <= k; g+=n) {
                b += pow(10, g-1) * p;
            }
            if (i == b) {
                cout << i << endl;
                break;
            }
        }
    }
}*/
