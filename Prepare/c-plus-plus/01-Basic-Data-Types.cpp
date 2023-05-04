// Problem: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;
    
    cin >> a;
    cin >> l;
    cin >> c;
    cin >> f;
    cin >> d;

    cout << a << endl;
    cout << l << endl;
    cout << c << endl;
    cout << fixed << f << endl;
    cout << fixed << d << endl;

    return 0;
}
