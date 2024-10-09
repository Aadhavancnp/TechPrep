# Math Algorithms

## Pascals Triangle

```c++
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // 🏗️ Generate Pascal's Triangle
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle; // 🔺 Triangle Storage
        triangle.push_back({1}); // 📍 First Row

        if (numRows == 1) return triangle;

        for (int i = 1; i < numRows; ++i) {
            vector<int> row = {1}; // 📍 Start Row with 1
            for (int j = 1; j < i; ++j) {
                int value = triangle[i - 1][j - 1] + triangle[i - 1][j]; // 🔄 Calculate Value
                row.push_back(value);
            }
            row.push_back(1); // 📍 End Row with 1
            triangle.push_back(row); // 🔺 Add Row to Triangle
        }
        return triangle; // 🎉 Return Result
    }
};

int main() {
    Solution sol;
    int numRows;
    cout << "Enter number of rows for Pascal's Triangle: ";
    cin >> numRows;
    vector<vector<int>> result = sol.generate(numRows);

    // 📜 Print the Triangle
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
```


## Count Primes

```c++
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
```

## Power(x,n)

```c++
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
```

## Distinct Prime Factors

```c++
#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

class Solution {
public:
    // 🔍 Find Prime Factors
    void findPrime(int n, set<int>& primeFactors) {
        while (n % 2 == 0) {
            primeFactors.insert(2); // 📍 Insert Prime 2
            n /= 2; // ➗ Divide by 2
        }

        for (int i = 3; i <= sqrt(n); i += 2) {
            while (n % i == 0) {
                primeFactors.insert(i); // 📍 Insert Prime Factor
                n /= i; // ➗ Divide by Factor
            }
        }
        
        if (n > 2) {
            primeFactors.insert(n); // 📍 Insert Remaining Prime
        }
    }

    // 🎯 Count Distinct Prime Factors
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> primeFactors; // 🔗 Unique Prime Factors
        for (int num : nums) {
            findPrime(num, primeFactors); // 🔍 Find Factors for Each Number
        }
        return primeFactors.size(); // 🎉 Return Count of Distinct Primes
    }
};

int main() {
    Solution sol;
    vector<int> nums = {12, 15, 10}; // Example Input
    cout << "Distinct Prime Factors Count: " << sol.distinctPrimeFactors(nums) << endl;

    return 0;
}
```