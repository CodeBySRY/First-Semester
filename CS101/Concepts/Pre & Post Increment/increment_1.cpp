#include <iostream>
using namespace std;

int main() {
    int x = 0;
    // Initially, x is 0.
    while (x++ < 10) // Post-increment is being applied in the while loop condition.
    // Since x++ is post-increment, the loop first compares the initial value of x with 10, and THEN, increments x by 1.
    // So, on each iteration, x is compared to 10, and then incremented afterward.
    // The incremented value is permanently updated and it is that value which is used in the next iteration of the loop.
    // On the final iteration, when x reaches 10, the condition is checked and it is false.
    // Due to post-increment, x is incremented after the comparison, bringing x to 11 before the loop exits.

    ;
    // Now, x is 11, so when cout << x; is executed, it outputs 11.
    cout << x;

    return 0;
}