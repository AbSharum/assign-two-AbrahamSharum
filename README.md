[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/lrpHm8KS)
## Problem Set Two - String Manipulation and Pointers


Create a library named **mylib.c** and a header file **mylib.h**that contains the following functions.


**int Strlen(char \*str)**

Find the length of the null terminated string, str and returns the length. The **Strlen()** function calculates the length of the string pointed to by str, excluding the terminating null byte ('\0'). The function returns the number of bytes in the string pointed to by str.

**char \*Strcpy(char \*dest, char \*src)**

Copy a string from src to dest, returning a pointer to the end of the resulting string at dest. The **Strcpy()** function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  The strings may not overlap, and the destination string dest must be large enough to receive the copy.  Beware of buffer overruns!

**char \*Strcat(char \*dest, char \*src)**

Append the string src to the string dest, returning a pointer dest.  The **Strcat()** function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte. The strings may not overlap, and the dest string must have enough space for the result.  If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue for attacking secure programs.


**char \*Strchr(char \*str, int c)**
              
The **Strchr()** function returns a pointer to the first occurrence of the character c in the string s. The **Strchr()** function returns a pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.


**int Strcmp(char \*s1, char \*s2)**

The **Strcmp()**  function  compares  the two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2. The  strcmp() function returns an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.


**Tokenize()**

You are tasked with implementing a custom string tokenizer function named **tokenize()**. The function should take a string and split it into tokens based on a given set of delimiter characters. The implementation of the tokenize() function, including the parameter list and return value, is up to you.

As part of this task, you must design and explain your memory model for storing tokens and managing memory.

* You must create your own implementation of a string tokenizer.
* You are free to define the parameter list and return type of the function.
* Ensure your function can handle multiple delimiters.

Memory Management:

* Explain how you allocate, manage, and free memory for the tokens.
* Ensure the solution is robust against memory leaks.

Error Handling:

* Handle edge cases like empty strings, strings without delimiters, or invalid input.
* Your function must ensure no buffer overflows or undefined behavior.

Create another program named **libtest.c**, that includes the header file, **mylib.h** and tests each of the functions to ensure they are correct.


## You cannot include the <string.h> C Standard Library or use any of the functions in this library in your code

---

## Implementation Notes (as cloned)

`mylib.c` / `mylib.h` implement all the required functions from scratch, without `<string.h>`:

- `Strlen`, `Strcpy`, `Strcat`, `Strchr`, `Strcmp` — hand-rolled versions of the standard C string functions. Note: `Strcmp` here compares the *sum of byte values* of the two strings rather than doing a true lexicographic comparison, so it can report equality for anagrams/permutations of the same characters.
- `Tokenize(char *str, char *delimiter)` — splits `str` on any character found in `delimiter` and returns a `NULL`-terminated array of token strings (`char **`). It allocates one buffer sized to the input string for the token characters plus one pointer array for the token starts, so all tokens live in a single contiguous heap block referenced by individual pointers.

`libtest.c` is the test harness: it exercises `Strcpy`, `Strlen`, `Strcat`, `Strchr`, `Strcmp`, and `Tokenize`, printing results for each, and frees the string buffer it allocated with `malloc`.

There is no Makefile in this repo — build/run via the one-liner in `run.sh`:

```sh
gcc mylib.c libtest.c -o libtest
./libtest
```

