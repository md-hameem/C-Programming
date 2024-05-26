# QuickSort for Strings

This project implements a quicksort algorithm to sort an array of strings in C. The program includes functions to compare strings and to perform the quicksort algorithm.

## Files

- `main.c`: Contains the implementation of the string comparison function, the quicksort algorithm, and the `main` function to demonstrate their usage.

## Functions

### `int CompareString(char *str1, char *str2)`

This function compares two strings lexicographically. It returns `1` if `str1` is less than `str2`, `-1` if `str1` is greater than `str2`, and `0` if they are equal.

#### Parameters:
- `char *str1`: The first string.
- `char *str2`: The second string.

#### Returns:
- `int`: The comparison result (`1`, `-1`, or `0`).

### `int Partition(char array[10][100], int low, int high)`

This function partitions the array for the quicksort algorithm. It selects a pivot and rearranges the elements such that elements less than the pivot are on the left and elements greater than the pivot are on the right.

#### Parameters:
- `char array[10][100]`: The array of strings to be partitioned.
- `int low`: The starting index of the partition.
- `int high`: The ending index of the partition.

#### Returns:
- `int`: The index of the pivot after partitioning.

### `void QuickSort(char array[10][100], int low, int high)`

This function recursively sorts the array using the quicksort algorithm.

#### Parameters:
- `char array[10][100]`: The array of strings to be sorted.
- `int low`: The starting index for the quicksort.
- `int high`: The ending index for the quicksort.

## `main` Function

The `main` function demonstrates the usage of the `QuickSort` function with a predefined list of strings.

### Example Usage

```c
int main() {
    int total = 10;
    char strs[10][100];
    strcpy(strs[0], "acos");
    strcpy(strs[1], "char");
    strcpy(strs[2], "ceil");
    strcpy(strs[3], "atan");
    strcpy(strs[4], "define");
    strcpy(strs[5], "floor");
    strcpy(strs[6], "clock");
    strcpy(strs[7], "float");
    strcpy(strs[8], "ctime");
    strcpy(strs[9], "exep");

    QuickSort(strs, 0, total - 1);

    int i;
    for (i = 0; i < total; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}
```

## Compilation and Execution

To compile and run the program, use the following commands:

```sh
gcc -o quicksort_program main.c
./quicksort_program
```


## Acknowledgments

- The quicksort algorithm is an efficient sorting algorithm with an average time complexity of \(O(n \log n)\).
- The string comparison function is customized to handle lexicographic comparison of strings.