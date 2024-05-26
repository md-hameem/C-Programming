# Hashing with Linear Probing

This project implements a simple hashing mechanism using linear probing to handle collisions. The program is written in C and includes functions to hash string keys and handle collisions by linear probing.

## Files

- `main.c`: Contains the implementation of the hashing functions and the `main` function to demonstrate their usage.

## Functions

### `int HashValue(char key, int * flag, int size)`

This function computes the hash value for a given key character. It transforms the character into a number (`'a'` is 0, `'b'` is 1, and so on) and applies a hash function \(H(x) = x \% \text{size}\). It uses linear probing to resolve collisions.

#### Parameters:
- `char key`: The character to be hashed.
- `int * flag`: An array indicating the occupancy of each hash table slot.
- `int size`: The size of the hash table.

#### Returns:
- `int`: The index in the hash table where the key is stored.

### `void HashLinear(char ** strs, int total, int size)`

This function applies the `HashValue` function to a list of strings, storing their hash values in a hash table and handling collisions with linear probing.

#### Parameters:
- `char ** strs`: An array of strings to be hashed.
- `int total`: The total number of strings.
- `int size`: The size of the hash table.

## `main` Function

The `main` function demonstrates the usage of the `HashLinear` function with a predefined list of strings and a hash table size of 26.

### Example Usage

```c
int main() {
    char * strs[10];

    strs[0] = "acos";
    strs[1] = "char";
    strs[2] = "ceil";
    strs[3] = "atan";
    strs[4] = "define";
    strs[5] = "floor";
    strs[6] = "clock";
    strs[7] = "float";
    strs[8] = "ctime";
    strs[9] = "exep";

    HashLinear(strs, 10, 26);

    return 0;
}
```

## Compilation and Execution

To compile and run the program, use the following commands:

```sh
gcc -o hash_program main.c
./hash_program
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- The hashing algorithm uses linear probing for collision resolution.
- This example uses a simple transformation for hashing where each character is mapped to its alphabetical index.