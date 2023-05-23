// Problem: https://www.hackerrank.com/challenges/arrays-introduction/problem

// Solution #01:
#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int j = n - 1; j >= 0; --j) {
        cout << arr[j] <<" ";
    }
    
    return 0;
}