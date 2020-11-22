# Lab 0 - Matrix Madness

COMP 530 Student's Guide

## Outline

* Introduction
* Matrix Refresher
* Exercise 1 - Arrays
* Exercise 2 - Pointers
* Exercise 3 - Double Pointers
* Exercise 4 - Linked Lists
* Testing
* Debugging

## Introduction

In this lab we will build four functions in `MatrixMultiplier.c` that multiple 2 matrices in a unique way. Each function implementation varies in the data structure used to represent an array. These data types are all common in C and will appear multiply times in this class, often in combination on the future labs. Additionally, this assignment will provide much practice debugging C with command line debuggers (see GDB section below). After completing this assignment you will have the C programming experience need to succeed in this course!

## Matrix Refresher

A matrix `M` is a mathematical object similar to the 2D Array programming object. Let `M`<sub> i j</sub> represent the entry in the i<sup>th</sup> row and j<sup>th</sup> column of `M`. Let `M` be a `A x B` matrix and `N` be a `B x C` matrix, then we define `M * N` to be the matrix product of two matrices `M, N`  where

> `(M*N)`<sub> i j </sub>=
(`M`<sub> i 1 </sub> * `N`<sub> 1 j </sub>) +
(`M`<sub> i 2 </sub> * `N`<sub> 2 j </sub>) + ... +
(`M`<sub> i B </sub> * `N`<sub> B j </sub>)

This is the same as the dot product of the i<sup>th</sup> row of `M` with the j<sup>th</sup> column of `N`. Additionally we if `M` is a `A x B` matrix we define the transpose `M`<sup>T</sup> to be a `B x A` matrix where 

>`M`<sub> i j </sub> = `M`<sup>T</sup><sub> j i </sub>

## Exercise 1 - Arrays

The first exercise a warm up to practice implementing the multiplication algorithm without worrying about new data types. For all of you who have Java experience, this code should look fairly familiar

## Exercise 2 - Pointers

Now implement the multiplication algorithm using single pointers, essentially a flattened version of the array from Exercise 1. Note that this matrix is stored in row major order, which means rows are stored sequentially in memory.

## Exercise 3 - Double Pointers

This implementation uses a new data type called a double pointer, denoted by the double asterisks in `int**`. This means that the value pointed to by a double pointer is another pointer to an `int` value. In the context of our problem, the double pointer initially points to a group of pointers where each pointer in the group represents a row in the matrix.

## Exercise 4 - Linked Lists

The final implementation uses three custom types to define a matrix. Each matrix is defined a linked list of rows, and each row is defined as a linked list of entries. For simplicity, in this implementation you are multiplying the first matrix by the transpose of the second.

## Testing

To test your code run `make` followed by `./tests`. To develop your own test cases, edit the matrix arrays in `tests.c` and remember to change the matrix dimension constants appropiately (`const int A, B, C`).

## Debugging

While working on labs in this course you will often find yourself facing the notorious `Segmentation Fault`. Segfaults can be particularly annoying errors because their error messages do not give any insight into what caused the error. This is where powerful command line debuggers like `gdb` and `lldb` come in handy. For this course you will mostly use `gdb` on the classroom server, but `lldb` is the default on MacOS and is extremely similar to `gdb`. In fact, the most common `gdb` commands should seem familiar since most GUI debuggers uses these same commands via buttons.

To start a debugging session run
>`gdb <filename>`

where `filename` is the name of your compiled executable file, for this assignment it is `tests`. Note that your executable must be compiled with the `-g` flag, but the `Makefile` has already done this for `tests`. Syntax for commands inside the bugger is as follows `n[ame]` which means the command can be executed by typing either `n` or `name`. Common commands to know are:

* `r[un] {args}` runs the executable with the given `{args}`
* `b[reak] <file.c>:line` sets a breakpoint in the source code file `file.c` on line `line`
* `p[rint] <expression>` prints the evaluated expression, this can be used to print array values or dereferenced pointers
* `n[ext] <n>` if the code has reached a breakpoint, this command will step over `n` lines of code
  * If no `n` is provided the default value is 1
* `c[ontinue] <n>` if the code has reached a breakpoint, this command will continue executing until `n` breakpoints are hit
  * For example, if you set a breakpoint in a loop an called `c` you would break in the next iteration of the loop
* `u[ntil]` will continue to execute until you reach the next line of code
  * For example, if you are on the last line of a loop then calling until would stop on the next line after the loop, completing all loop iterations
* `s[tep]` will step into the next line
* `finish` will step out of the current function
* `backtrace` will print the current frames on the function call stack
* `f[rame] <n>` will switch to frame number `n`
