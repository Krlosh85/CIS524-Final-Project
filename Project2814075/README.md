# About

Author: Carlos Herrera

CSU ID: 2814075

Cleveland State University - CIS 524 - Comparative Programming Languages

# Description

In this coding assignment I compared two different programming languages by implementing a well known search algorithm: Binary Search!
This is a good example because it can be used to compare how does each language implements the following fundamentals in any programming languages:
1. Recursion / Iteration
2. Memory Management (static vs dynamic allocation in our case)
3. Parameter Passing Methods (as seen in class)
4. Data Structure implementation (since they are mathematically the same structures, the syntax is the one that changes, while semantics stay the same)

# Requirements/Commands

## C Compiler
```bash
c++ BSearch.c -o BSearch
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
It is a search algorithm used to find the position and the value of a given value within a **SORTED** array/list of numbers. It can be implemented with iterations and with recursion. 

*** Using Iteration ***
Time Complexity: 
    Best Case: O(1)
    Average Case: O(log N)
    Worst Case: O(log N)

*** Using Recursion ***
Time Complexity: O(log N)


## Main Differences
### Concept #1: Readability & Syntax
| Python | C |
| --- | --- |
| Lists are defined by using brackets |
| Lists and arrays are defined by using curly brackets |

### Concept #2: Memory Management

| Python | C |
| --- | --- |
| Dynamically calculates the memory for the array size | Static Memory Management In this case we didn't have to define the size of the array since they are fixed for this example, but C would require to use malloc to allocate the space in memory beforehand. This means that we would need to know beforehand the amount of numbers that we will input, or use a different approach to create a dynamic array |
| Py | C |

### Concept #3: Execution

| Python | C |
| --- | --- |
| Requires a Process VM | Doesn't Require a Virtual Machine |
| Compiled | Interpreted |

### Concept #4:

| Python | C |
| --- | --- |
|  | |
|  | |

# Resources:
https://www.khanacademy.org/computing/computer-science/algorithms/binary-search/a/binary-search#:~:text=Binary%20search%20is%20an%20efficient,possible%20locations%20to%20just%20one. 