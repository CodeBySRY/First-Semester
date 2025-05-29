## 📕 Important Concepts
In C++, a **function prototype** is a declaration of a function that specifies its name, return type, and parameters, but without the body (implementation) of the function.
- It serves as a way to inform the compiler about the function’s existence before it is actually defined.

A function prototype typically includes:
- The return type of the function;
- The name of the function;
- A list of parameters with their types


In C++, if a function prototype is NOT NEEDED, it means that the function is defined before any call to it in the code. 

```cpp
// Prototype examples:
float calculateAverage(float numbers[], int count);  // With parameter names
void printResults();                                // No parameters
int max(int, int);                                  // Without parameter names
```
