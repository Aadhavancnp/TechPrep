#Binary Search

## 📏 Lower Bound

```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sortedList = {9, 10, 11, 17, 20, 29, 30, 30, 40, 50}; // 📊 Sorted List
    int target = 35; // 🎯 Target Value

    int start = 0;
    int end = sortedList.size() - 1;
    int lowerBoundIndex = -1; // ❓ Result Index

    while (start <= end) {
        int middle = start + (end - start) / 2;
        if (sortedList[middle] >= target) {
            lowerBoundIndex = middle; // 🔍 Found possible lower bound
            end = middle - 1; // 🔙 Search Left
        } else {
            start = middle + 1; // 🔜 Search Right
        }
    }
    cout << "Lower Bound Position: " << lowerBoundIndex << " 🏷️" << endl;

    return 0;
}
```

## 📏 Upper Bound
```c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sortedList = {9, 10, 11, 20, 29, 30, 30, 35, 40, 40, 50}; // 📊 Sorted List
    int target = 35; // 🎯 Target Value

    int start = 0;
    int end = sortedList.size() - 1;
    int upperBoundIndex = -1; // ❓ Result Index

    while (start <= end) {
        int middle = start + (end - start) / 2;
        if (sortedList[middle] > target) {
            upperBoundIndex = middle; // 🔍 Found possible upper bound
            end = middle - 1; // 🔙 Search Left
        } else {
            start = middle + 1; // 🔜 Search Right
        }
    }
    cout << "Upper Bound Index: " << upperBoundIndex << " 🏷️" << endl;

    return 0;
}
```