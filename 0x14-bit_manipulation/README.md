<a href="https://holbertonschool.com"><img src="https://i.ibb.co/RyBcXY6/cherry72.png" align="right" alt="cherry72" border="0"></a>

# BIT MANIPULATION

How to manipulate bits and use bitwise operators.


Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte. C language is very efficient in manipulating bits.

Here are following operators to perform bits manipulation:

Bitwise Operators:

Bitwise operator works on bits and perform bit by bit operation.

Assume if B = 60; and B = 13; Now in binary format they will be as follows:

A = 0011 1100

B = 0000 1101

-----------------

A&B = 0000 1000

A|B = 0011 1101

A^B = 0011 0001

~A  = 1100 0011

## Compilation

gcc 4.8.4 using the flags
```sh
-Wall -Werror -Wextra and -pedantic
```
## Written in

**GNU Emacs 24.3.1**

## Prototypes:

* ```unsigned int binary_to_uint(const char *b);```
* ```void print_binary(unsigned long int n);```
* ```int get_bit(unsigned long int n, unsigned int index);```
* ```int set_bit(unsigned long int *n, unsigned int index);```
* ```int clear_bit(unsigned long int *n, unsigned int index);```
* ```unsigned int flip_bits(unsigned long int n, unsigned long int m);```
* ```int get_endianness(void);```

## Functions

| Format | Usage |
| ------ | ------ |
| **binary_to_uint** | function that converts a binary number to an unsigned int. |
| **print_binary** | function that prints the binary representation of a number. |
| **get_bit** | function that returns the value of a bit at a given index. |
| **set_bit** | function that sets the value of a bit to 1 at a given index. |
| **clear_bit** |  function that sets the value of a bit to 0 at a given index. |
| **flip_bits** | function that returns the number of bits you would need to flip to get from one number to another. |
| **get_endianness** | function that checks the endianness. |

### Author

 - [Doniben Jimenez](https://github.com/Doniben)