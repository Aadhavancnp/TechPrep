#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 🔢 Count Primes Function
int countPrimes(int n) {
    vector<bool> isPrime(n, true); // 🔍 Prime Status
    int count = 0;

    for (int i = 2; i <= sqrt(n); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false; // 🚫 Mark Non-Primes
            }
        }
    }

    for (int l = 2; l < n; ++l) {
        if (isPrime[l]) {
            count++; // ✔️ Count Prime
        }
    }
    return count; // 🎉 Return Count
}

int main() {
    int n;
    cout << "Enter a number to count primes less than it: ";
    cin >> n;
    cout << "Number of primes less than " << n << ": " << countPrimes(n) << endl;

    return 0;
}
