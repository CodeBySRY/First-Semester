# 📍 Miscellaneous Topics
Below are codes and related concepts regarding topics which were asked in exams or assignments, that caused difficulties, so I thought I should compile them all into a single ReadMe.md file.

I hope those viewing this file is able to benefit, in any way whatsoever. 
> Happy learning!
---


### Switch Case Example Without Break Statement

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 1; // An initialization is made here.
    switch(x) { // A SyntaxCompiler error that can occur here is omitting the '('.
    case 1:
        cout << "Testing out as to what happens if I omit break in this case. \n";
        // NOT adding break; does not cause SyntaxCompiler errors.
        // IF the break is not added to cases, once that code block is executed,
        // a 'fall through' occurs whereby the next case's code block is executed.
    case 2:
        cout << "CASE 21" << endl;
        break;
        // Since a break; is added in case 2, the code block stops here and
        // doesn't 'fall through' into case 10.
    case 10:
        cout << "Congratulations!" << endl;
        cout << "Case 10 Has Been Reached!" << endl;
    }
    return 0;
}
```

> [!NOTE]
> An interesting thing is that even though the `x` value does not correspond to this case, it still executes, just because of the omission of break; in the previous case.

---
### Infinite Loop Example with User Input
```cpp
#include <iostream>
using namespace std;

int main () {
    int i, j, k;
    string myName; // Defining the variable using the string data type so that I can input the full name/username from the user.
    cout << "Kindly Enter Your Name: ";
    cin >> myName;
    for (i = 1; ;i++) { // Here, the loop-continuation condition is NOT defined, and therefore, the loop will run indefinitely.
    cout << "Hello " << myName << "!" << endl;
    cout << "Counter: " << i << endl; // The counter, and consequently, the value of i will start from 1, which is defined in the for loop.

    }
    return 0;
}
```
_**WARNING**_: This is an infinite loop that will:
- Continuously print greetings
- Keep incrementing the counter
- Never reach the return 0 statement
- Must be stopped manually (Ctrl+C in terminal)

---
```cpp
#include <iostream>
using namespace std;

int main () {
    int i, j, k;
    string myName; // Defining the variable using the string data type so that I can input the full name/username from the user.
    cout << "Kindly Enter Your Name: ";
    cin >> myName;
    for (i = 1; ;i++) // Here, the curly braces are omitted, and therefore, although THERE WILL BE NO SYNTAX/COMPILER ERRORS , the for loop will only work for and execute the line right after, which is only the line below.
    cout << "Hello " << myName << "!" << endl;
    cout << "Counter: " << i << endl; // This code block will not execute because it is not part of the for loop now that the braces () are removed.

    return 0;
}
```