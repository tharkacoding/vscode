#include <bits/stdc++.h>

using namespace std;

bool isArmstrong(long long number) {
    if (number < 0) {
        return false;
    }

    long long original = number;
    int digits = 0;

    do {
        digits++;
        number /= 10;
    } while (number != 0);

    long long sum = 0;
    number = original;

    do {
        int digit = number % 10;
        long long power = 1;

        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        number /= 10;
    } while (number != 0);

    return sum == original;
}

int main() {
    long long number;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number.\n";
    } else {
        cout << number << " is not an Armstrong number.\n";
    }

    return 0;
}
