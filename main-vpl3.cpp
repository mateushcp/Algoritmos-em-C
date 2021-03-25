#include <iostream>
using namespace std;

int main() {
    long a = 200000;
    long b;
    long *pont;
    
    pont = &a;
    cout << *pont << " ";
    b = *pont;
    cout << b << " ";
    cout << pont << " ";
    cout << &a << " ";
    
    unsigned int val[5];
    for (int i = 0; i < 5; i++) {
        val[i] = 2 + (i * 2);
    }
    
    unsigned int *vpont;
    cout << 1 << " ";
    for (int i = 0; i < 5; i++) {
        cout << val[i] << " ";
    }
    
    vpont = val;
    vpont = &val[0];
    
    for (int i = 0; i < 5; i++) {
        cout << val[i] << " ";
    }
    
    for (int i = 0; i < 5; i++) {
        cout << *(val + i) << " ";
    }
    
    for (int i = 0; i < 5; i++) {
        cout << vpont[i] << " ";
    }
    
    cout << val[4] << " " << val[4] << " " << val[4] << " " << val[4] << " ";
    
    cout << vpont + 3 << " " << *(vpont + 3) << " ";
    vpont = &val[4];
    cout << vpont - 4 << " " << *(vpont - 4) << " ";
    
    return 0;
}
