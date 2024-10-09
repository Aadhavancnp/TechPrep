#include <iostream>
using namespace std;

class Solution {
public:
    // ⚡ Calculate Power Function
    double myPow(double x, int n) {
        long long exponent = n; // 🧮 Handle Large Exponents
        double result = 1;

        if (exponent < 0) {
            x = 1 / x; // 🔄 Invert for Negative Exponent
            exponent = -exponent;
        }

        while (exponent > 0) {
            if (exponent % 2 == 1) {
                result *= x; // ✨ Multiply Result
            }
            x *= x; // 🌟 Square the Base
            exponent /= 2; // ➗ Halve the Exponent
        }

        return result; // 🎉 Return Result
    }
};

int main() {
    Solution sol;
    double x;
    int n;
    cout << "Enter base and exponent (x n): ";
    cin >> x >> n;
    cout << "Result: " << sol.myPow(x, n) << endl;

    return 0;
}
