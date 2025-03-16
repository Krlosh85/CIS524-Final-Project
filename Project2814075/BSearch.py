
def binary_search(numbers, look_up_value, start, end) -> int:
    '''
    This binary search implements recursion for simplicity.
    '''
    # Base case
    if start > end:
        return -1

    # Get the middle index
    middle = (start + end) // 2  

    # Check if the middle element is the look up value
    if numbers[middle] == look_up_value:
        return middle

    # Search the right side of the array if the look up value is bigger than the middle
    elif numbers[middle] < look_up_value:
        return binary_search(numbers, look_up_value, middle + 1, end)  

    # Search the right side of the array if the look up value is smaller than the middle
    else:
        return binary_search(numbers, look_up_value, start, middle - 1)  

# Main function definition
def main():
    numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
    look_up_value = int(input("Enter a number to search: "))  # Get user input
    
    result = binary_search(numbers, look_up_value, 0, len(numbers) - 1)
    if result != -1:
        print(f"The number {look_up_value} was found at index {result}.")
    else:
        print(f"The number {look_up_value} is not in the list.")
        
# Calling the main function
if __name__ == "__main__":
    main()

