<a href="https://holbertonschool.com"><img src="https://i.ibb.co/RyBcXY6/cherry72.png" align="right" alt="cherry72" border="0"></a>

# File I/O

###From Wikipedia, the free encyclopedia
Jump to navigationJump to search
In Unix and related computer operating systems, a file descriptor (FD, less frequently fildes) is an abstract indicator (handle) used to access a file or other input/output resource, such as a pipe or network socket. File descriptors form part of the POSIX application programming interface. A file descriptor is a non-negative integer, generally represented in the C programming language as the type int (negative values being reserved to indicate "no value" or an error condition).

Each Unix process (except perhaps a daemon) should expect to have three standard POSIX file descriptors, corresponding to the three standard streams.

Read more about in the [Hungys blog](https://medium.com/hungys-blog/unix-programming-file-io-1a08b365863), [The Linux System programing](http://igm.univ-mlv.fr/~yahya/progsys/linux.pdf), and [look at this video[(https://www.youtube.com/watch?v=dP3N8g7h8gY) 
## Compilation

gcc 4.8.4 using the flags
```sh
-Wall -Werror -Wextra and -pedantic
```
## Written in

**GNU Emacs 24.3.1**

## Prototypes:

* ```ssize_t read_textfile(const char *filename, size_t letters);```
* ```int create_file(const char *filename, char *text_content);```
* ```int append_text_to_file(const char *filename, char *text_content);```

## Functions

| Format | Usage |
| ------ | ------ |
| **read_textfile** | function that reads a text file and prints it to the POSIX standard output. |
| **create_file** | function that creates a file. |
| **append_text_to_file** | function that appends text at the end of a file. |

### Author

 - [Doniben Jimenez](https://github.com/Doniben)

