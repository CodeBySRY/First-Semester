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
---
### Sorting Algorithms
Sorting is the process of organizing elements in a structured manner. There are several sorting algorithms.

In the first semester, we learnt about `Selection Sort`, developing the logic ourselves. Only later did I learn about other sorting algorithms, that are contained within the C++ Standard library. For one, the `<cstdlib>` library allows us to use the **Quicksort** algorithm.
> [!NOTE]
> The demonstration of the Quicksort algorithm is in the file labelled `qsort.cpp`.

 **Quicksort** is a sorting algorithm that uses a divide-and-conquer strategy to sort an array. It does so by selecting a pivot element and then sorting values larger than it on one side and smaller to the other side, and then it repeats those steps until the array is sorted. It is useful for sorting big data sets.  

When it comes to using the qsort() function, as the algorithm in C++, it is necessary to include the following function, which basically works as a comparator:
```cpp
int compare(const void *a, const void *b) {
	const int *x = (int*) a;
	const int *y = (int*) b;
	
	if (*x > *y) {
		return 1;
	}
	else if (*x < *y) {
		return -1;
		
	}
	
	return 0;
}
```
