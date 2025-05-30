# 🖥 Lab Tasks [Lab B]
## Task # 1
Create a function **calculateArea** that can calculate the area of:
- A circle, given its radius. A = π × r2
- A rectangle, given its length and width. A = length * width
- A triangle, given its three sides. A = √[s(s-a)(s-b)(s-c)], where  s = (a + b + c)/2

Overload the **calculateArea** function to handle these different cases.

**Solution**: `lab_b_task_1.cpp`

---
## Task # 2
A construction company is tasked with designing a wheelchair ramp for a building. To ensure the ramp is accessible and follows regulations, the engineers need to calculate the length of the ramp (hypotenuse) based on the height of the building's entrance (opposite side) and the horizontal distance available for the ramp (adjacent side).

Write a C++ function that calculates the length of the ramp (c) using the Pythagorean theorem, where:
- const int a is the height of the entrance from the ground.
- const int b is the horizontal distance available for the ramp with a default value of 1.
- c is the length of the ramp.

The function should return the length of the ramp  without modifying the parameters (a and b).

Write a main function that:
- Prompts the user to enter the value of a and b.
- Calls ramp with only the a, letting the b default to 1.
- Calls ramp with both a and b provided by the user.

Print the calculated area in both cases.

**Solution**: `lab_b_task_2.cpp`

---
## Task # 3
Define an *inline function* **calculateCube** that takes a single parameter double x and returns the Cube of x.
In the main function:
- Call calculateCube with an int value, a float value, and a double value.
- Print the result of each call and observe if argument promotion happens.


**Solution**: `lab_b_task_3.cpp`

---