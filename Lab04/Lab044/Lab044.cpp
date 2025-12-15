#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << "Sum of numbers from 0 to 100 divisible by 3: " << sum << endl;
    return 0;
}