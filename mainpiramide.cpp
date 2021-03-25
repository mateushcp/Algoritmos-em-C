#include <iostream>
using namespace std;

int main()
{
    int piramid;
    int i;
    int j;
    cin >> piramid;
    for (i = 0; i < piramid; i++) {
        for (j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; piramid >= i; piramid--) {
        for (int j = 0; j <= piramid; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
