#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long number) {
    if (number < 2) {
        return false;
    }

    if (number == 2) {
        return true;
    }

    if (number % 2 == 0) {
        return false;
    }

    for (long long divisor = 3; divisor <= number / divisor; divisor += 2) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long number;

    cout << "Enter an integer: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }

    return 0;
}
