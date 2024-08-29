# 📚 Home Work - [27-08-2024] 📅

## 1. Number System Conversions 🔄

Here's how to convert between different number bases:

### **a. (1012) base 2 = ( ?) base 10**

* **Explanation:** Each digit in a binary number represents a power of 2, starting from the rightmost digit as **`2⁰`**.

* **Calculation:**
   (1 × 2³) + (0 × 2²) + (1 × 2¹) + (2 × 2⁰) = 8 + 0 + 2 + 2 = 12

* **Answer:** (1012) base 2 = (12) base 10

### **b. (237) base 8 = ( ?) base 2**

* **Explanation:** Each digit in an octal number represents a power of 8. We convert each octal digit to its 3-bit binary equivalent.

* **Calculation:**
  * 2 = 010
  * 3 = 011
  * 7 = 111
* **Answer:** (237) base 8 = (010011111) base 2

### **c. (535) base 9 = ( ?) base 10**

* **Explanation:** Each digit in a base-9 number represents a power of 9.

* **Calculation:**
   (5 × 9²) + (3 × 9¹) + (5 × 9⁰) = 405 + 27 + 5 = 437

* **Answer:** (535) base 9 = (437) base 10

## 2. Logarithm Properties 📈

Logarithms are the inverse of exponentiation. Here are some key properties:

* **Product Rule:** logₐ(x * y) = logₐ(x) + logₐ(y)
* **Quotient Rule:** logₐ(x / y) = logₐ(x) - logₐ(y)
* **Power Rule:** logₐ(xⁿ) = n * logₐ(x)
* **Change of Base:** logₐ(x) = logₓ(x) / logₓ(a)

**Example:**

log₁₀(100) = 2 (because 10² = 100)

## 3. 1's Complement and 2's Complement 🔄

These are methods for representing signed numbers in binary.

* **1's Complement:** Invert all the bits of a binary number.

* **2's Complement:** Invert all the bits and add 1 to the result.

**Practical Applications:**

* **Computer Arithmetic:** 1's and 2's complement simplify addition and subtraction of signed numbers in hardware.

* **Error Detection:** Parity bits, often used in data transmission, rely on 1's complement for error checking.

## 4. N -> Power of 2 Code Implementation 💻

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int powerOfTwo = 1 << n || pow(2, n); 
    cout << n << " to the power of 2 is: " << powerOfTwo << endl;

    return 0;
}
```

## 5. Representing Positive and Negative Numbers ➕➖

* **Unsigned:** Only represents positive numbers.

* **Signed:** Represents both positive and negative numbers.

Common methods for signed representation include:

* **Sign-Magnitude:** Use the most significant bit (MSB) to indicate the sign (0 for positive, 1 for negative).

* **1's Complement:** Invert all bits for negative numbers.

* **2's Complement:** Invert all bits and add 1 for negative numbers.

## 6. Binary Addition and Subtraction ➕➖

**Addition:**

* Add each column, starting from the rightmost.
* If the sum is 2 or greater, carry-over a 1 to the next column.

**Subtraction:**

* Use 2's complement for negative numbers.
* Add the two numbers (including the 2's complement representation of the negative number).

## 7. Operator Precedence Table 🧮

Operator precedence determines the order in which operations are performed in an expression.

| Operator | Precedence | Associativity |
|---|---|---|
| () | Highest | Left to Right |
| ! ~ ++ -- | | Right to Left |
| * / % | | Left to Right |
| + - | | Left to Right |
| << >> | | Left to Right |
| < <= > >= | | Left to Right |
| == != | | Left to Right |
| & | | Left to Right |
| ^ | | Left to Right |
| \| | | Left to Right |
| && | | Left to Right |
| \|\| | | Left to Right |
| = += -= *= /= %= &= ^= \|= <<= >>= | | Right to Left |

## 8. Leading and Trailing Zeroes 0️⃣

* **Leading Zeroes:** Zeroes that appear before the first non-zero digit in a number.

* **Trailing Zeroes:** Zeroes that appear after the last non-zero digit in a number.

**Significance:**

* Leading zeroes in whole numbers don't affect the value.
* Trailing zeroes after the decimal point in a decimal number indicate precision.

## 9. Significant Zeroes 0️⃣

Significant zeroes are zeroes that contribute to the precision of a measurement.

* **Example:** 10.200 has four significant figures (all the digits are significant).

## 10. Bit Masking 🎭

Bit masking involves using bitwise operations (AND, OR, XOR, NOT) to manipulate individual bits within a binary number.

**Example:**

```c++
int num = 10; // Binary: 1010
int mask = 0b0100; // Binary: 0100

int result = num & mask; // Bitwise AND
// result will be 0b0100 (4 in decimal)
```

## 11. Code Implementation 💻

Here are some C++ code examples for bit manipulation:

## **a. How many set bits are there?**

```c++
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
```

## **b. Check if the ith bit is set or not**

```c++
bool isBitSet(int num, int i) {
    return (num >> i) & 1;
}
```

## **c. Set the ith bit**

```c++
int setBit(int num, int i) {
    return num | (1 << i);
}
```

## **d. Unset the ith bit**

```c++
int unsetBit(int num, int i) {
    return num & ~(1 << i);
}
```

## **e. Generate all possible subsets of an array**

```c++
#include <iostream>
#include <vector>

void generateSubsets(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < (1 << n); i++) {
        std::cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}
```

## **f. Swapping two numbers**

```c++
void swap(int& a, int& b) {
    a ^= b;
    b ^= a;
    a ^= b;
}
```

## **g. Odd or even**

```c++
bool isEven(int num) {
    return !(num & 1);
}
```

## **h. Upper to lower case and related problems**

```c++
char toLowerCase(char ch) {
    return ch | 0x20; // Set the 5th bit to 1
}
```

## **i. Toggle the bit**

```c++
int toggleBit(int num, int i) {
    return num ^ (1 << i);
}
```
