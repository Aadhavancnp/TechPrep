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