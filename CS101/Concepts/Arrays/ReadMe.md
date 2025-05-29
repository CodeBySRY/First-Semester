## 📕 Important Concepts
When calculating averages, it is a standard practice and is necessary as well, to initialize the sum variable to zero (0). When using functions, and specifically, arrays, we do this outside the for loop, and not inside – because initializing the sum to zero inside the for loop sets the value of sum to zero in each iteration, producing no results.

Here's a C++ function to calculate the average of an array:

```cpp
float find_average(float arr[], int size) {
    float sum = 0; // Initialize sum before the loop
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i]; // Accumulate the sum of the elements
    }
    return sum / size; // Calculate and return the average
}
```

