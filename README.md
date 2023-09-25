# PUSH_SWAP

Push Swap is a C program that performs a stack operation to sort given numbers using various sorting algorithms.

## Usage

To use the program, you can run the following command:

./push_swap [numbers]
For example:

./push_swap 5 2 9 1 5

## Code Structure
Your code is organized into the following sections:

### ft_check_and_stack
This function converts the numbers obtained from the command line into a stack data structure. The numbers are concatenated into a string separated by spaces and then split. Each number is then added to the stack.

### ft_sorted_checker
This function checks whether the stack is sorted. It returns 1 if the stack is sorted, and 0 otherwise.

### sort_stack
This function selects the appropriate sorting algorithm to sort the stack based on its size. Different sorting methods are used depending on the size of the stack.

### check_whitespace
This function checks the content of the command line arguments. If the arguments do not contain numerical values, an error message is displayed.

### main
The main function is the starting point of the program. First, it checks whether the command line arguments contain numerical values. Then, it creates pointers to t_stack_node where references to the stacks will be stored, and calls the ft_check_and_stack function. It also performs an iterative check to ensure that all numbers in the stack are unique. If the stack is sorted, the program terminates; otherwise, the sort_stack function is called.

## Sorting Algorithms
The program can use the following sorting algorithms to sort the stack:

To sort a two-element stack, it uses the sa (swap A) command.
To sort a three-element stack, it uses the ft_three_sorter function.
To sort a five-element stack, it uses the ft_five_sorter function.
In other cases, it uses the radix_sort function.

### Error Handling
The program includes functions to handle errors. For example, it can display an error message in case of missing or invalid arguments.

### Resources
The source code of this program can be found in the push_swap.c file. Additionally, you can refer to the stack_node.h header file to understand the logic of the program.
