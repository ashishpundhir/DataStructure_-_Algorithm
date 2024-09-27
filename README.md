# Data structure and Algorithm 

## Chapter: 1 Flowchart and Algorithm




### FlowChart

                                  +---------------+
                                  |  Start        |
                                  +---------------+
                                            |
                                            |
                                            v
                                  +---------------+
                                  |  Initialize   |
                                  |  max_element =|
                                  |  array[0]     |
                                  +---------------+
                                            |
                                            |
                                            v
                                  +---------------+
                                  |  Loop through  |
                                  |  array elements|
                                  |  (i = 1 to n-1)|
                                  +---------------+
                                            |
                                            |
                                            v
                                  +---------------+
                                  |  If array[i] >  |
                                  |  max_element,   |
                                  |  then update    |
                                  |  max_element    |
                                  +---------------+
                                            |
                                            |
                                            v
                                  +----------------+
                                  |  End of loop   |
                                  +----------------+
                                            |
                                            |
                                            v
                                  +-------------------+
                                  |  Print max_element|
                                  +-------------------+
                                            |
                                            |
                                            v
                                  +---------------+
                                  |  End          |
                                  +---------------+


### code

                                 
 #include <iostream>

int findMaxElement(int array[], int n) {
  int max_element = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] > max_element) {
      max_element = array[i];
    }
  }
  return max_element;
}

int main() {
  int array[] = {4, 2, 9, 6, 5, 1};
  int n = sizeof(array) / sizeof(array[0]);
  int max_element = findMaxElement(array, n);
  std::cout << "Maximum element in the array: " << max_element << std::endl;
  return 0;
}


#### Explanation

The flowchart and C++ code above describe a simple algorithm to find the maximum element in an array of integers. Here's a step-by-step breakdown:

Initialize the max_element variable to the first element of the array.
Loop through the remaining elements of the array (from index 1 to n-1).
For each element, check if it is greater than the current max_element. If so, update max_element with the new maximum value.
After the loop, max_element will hold the maximum value in the array.
Print the max_element value.
Note that this is a basic example, and there are many ways to optimize and improve this algorithm for different scenarios.

