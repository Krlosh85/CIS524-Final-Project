#include <stdio.h>

// Function to perform binary search recursively
int binary_search(int numbers[], int look_up_value, int start, int end) {
    // Base case
    if (start > end)
        return -1;

    // Find the middle index
    int middle = start + (end - start) / 2;  

    // Check if the middle element is the lookup value
    if (numbers[middle] == look_up_value)
        return middle;

    // If lookup value is greater, search the right half
    else if (numbers[middle] < look_up_value)
        return binary_search(numbers, look_up_value, middle + 1, end);

    // If lookup value is smaller, search the left half
    else
        return binary_search(numbers, look_up_value, start, middle - 1);
}

// Main function definition and no need to call it since the compiler calls this function first.
int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size

    // Get user input
    int look_up_value;
    printf("Enter a number to search: ");
    scanf("%d", &look_up_value);

    // Perform binary search
    int result = binary_search(numbers, look_up_value, 0, size - 1);

    // Print the result
    if (result != -1)
        printf("The number %d was found at index %d.\n", look_up_value, result);
    else
        printf("The number %d is not in the list.\n", look_up_value);

    return 0; // Exit program
}
