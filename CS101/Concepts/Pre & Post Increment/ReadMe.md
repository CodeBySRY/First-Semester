## 📕 Important Concepts
C++ has both **increment** and **decrement** operators.
Increment Operator (++) : it increases the value of a variable by 1.
- Pre-increment (++x) : Increments the value first, then returns the new value.
- Post-increment (x++) : Returns the current value, then increments the variable.

```cpp
#include <iostream>
using namespace std;

int main () {
    int a = 50;
    int b;
    b = a++; // In Post-increment (a++), the current value of a is assigned to b, and THEN, the value of a is incremented.
    // Therefore, the value of b after this = 50.
    // Therefore, the value of a = 51.

    cout << a << endl;
    cout << b << endl;

    return 0;
}
```
---


## Understanding Increment Operators in Loops

### Key Differences Between Pre-Increment (++x) and Post-Increment (x++)

### **Post-Increment (x++)**:
- Returns the **current value** first, then increments the variable
- In loops: The value used in the condition is the value **before** increment
- After operation: Variable contains incremented value

### **Pre-Increment (++x)**:
- **Increments first**, then returns the new value
- In loops: The value used in the condition is the value **after** increment
- After operation: Variable contains incremented value

## Classic Exam Question That Trips Up Students

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 0;
    
    // Loop 1: Post-increment in condition
    cout << "Loop 1 (Post-increment): ";
    while(x++ < 8) {
        cout << x << " ";
        y += x;
    }
    cout << "\nFinal x: " << x << ", y: " << y << endl << endl;
    
    // Reset values
    x = 5;
    y = 0;
    
    // Loop 2: Pre-increment in condition
    cout << "Loop 2 (Pre-increment): ";
    while(++x < 8) {
        cout << x << " ";
        y += x;
    }
    cout << "\nFinal x: " << x << ", y: " << y << endl;
    
    return 0;
}