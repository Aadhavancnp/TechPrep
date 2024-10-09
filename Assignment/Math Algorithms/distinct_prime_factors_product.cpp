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
