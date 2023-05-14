// Problem: https://www.hackerrank.com/challenges/c-tutorial-functions/problem

// Solution #01:
#include <iostream>
using namespace std;

int getMaxNum(int num1, int num2, int num3, int num4) {
    int maxValue = num1;

    if(num2 > maxValue) {
        maxValue = num2;
    }
    if(num3 > maxValue) {
        maxValue = num3;
    }
    if(num4 > maxValue) {
        maxValue = num4;
    }
    return maxValue;
}

int main () {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    int maxNum = getMaxNum(num1, num2, num3, num4);
    cout << maxNum;
    return 0;
}


// Solution #02:
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    int maxNum = max({num1, num2, num3, num4});
    cout << maxNum;
    return 0;
}