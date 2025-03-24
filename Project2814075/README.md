# About

Author: Carlos Herrera

CSU ID: 2814075

Cleveland State University - CIS 524 - Comparative Programming Languages

# Description

In this coding assignment, I compared two different programming languages by implementing a well-known search algorithm: Binary Search!

Binary Search is a great example because it allows us to compare how each language implements key fundamentals of programming, including:
1. Readability & Syntax
2. Memory Management (static vs dynamic allocation in our case)
3. Execution
4. Typing of variables
5. Parameter Passing Methods (as seen in class)
6. Recursion (important in search algorithms)

# Requirements/Commands

## C Compiler
```bash
gcc BSearch.c -o BSearch
```
``` bash
./BSearch
```

## Python Compiler
```bash
python (or py) BSearch.py
```

# Explanation/Comparison
## Binary Search
### Def.
It is a search algorithm used to find the position and the value of a given value within a **SORTED** array/list of numbers. It can be implemented iteratively or recursively. While recursion makes the code shorter and more readable, it can cause stack memory overhead in C.

***Using Iteration***
Time Complexity: 

    Best Case: O(1)
    
    Average Case: O(log N)
    
    Worst Case: O(log N)

***Using Recursion***
Time Complexity: O(log N)


## Main Differences
### Concept #1: Readability & Syntax
| Python | C |
| --- | --- |
| Lists are defined by using brackets | Lists and arrays are defined by using curly brackets | 
| Easier to read than C (high-level syntax) | While not very difficult, it could confuse those who don't work with static memory allocation (low-level syntax) |
| Uses indentation to define code blocks | As many interpreted languages, uses curly brackets to define blocks of code |

### Concept #2: Memory Management

| Python | C |
| --- | --- |
| Automatical implementation | Manual implementation |
| Calculated by python | Calculated based on the context by the programmer |
| Has a Garbage collector and a reference counting to free memory when needed | Requires to use the function 'free()' to empty memory manually |
| Dynamically calculates the memory for the array size | Static Memory Management In this case we didn't have to define the size of the array since they are fixed for this example, but C would require to use malloc to allocate the space in memory beforehand. This means that we would need to know beforehand the amount of numbers that we will input, or use a different approach to create a dynamic array |


### Concept #3: Execution

| Python | C |
| --- | --- |
| Interpreted | Compiled |
| Requires a Process VM | Doesn't Require a Virtual Machine |
| Theoretically slower since it has to be interpreted first | Theoretically faster since it is lower level (closest to machine language) |

### Concept #4: Typing of variables

| Python | C |
| --- | --- |
| Dynamic | Static |
| No need to declare variable types, the compiler does it for the programmer | Explicit declarations are required |

### Concept #5: Parameter Passing Methods

| Python | C |
| --- | --- |
| Immutable types are passed by value while mutable are passed by reference | Default: Passes by value |
| When we pass the array of numbers is by reference | When we pass the array of numbers is by reference |
| When we call the binary search function, we pass the parameters by value | When we call the binary search function, we pass the remaining parameters by value|

### Concept #6: Recursion
| Python | C |
| --- | --- |
| Easier readability for recursive algorithms | Requires manual stack management for complex recursion (could have a stack overflow if not managed well)|

# Resources:
https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binarysearch#:~:text=Binary%20search%20is%20an%20efficient,possible%20locations%20to%20just%20one.

https://library.fiveable.me/key-terms/data-structures/memory-overhead 

https://www.geeksforgeeks.org/c-vs-python/
