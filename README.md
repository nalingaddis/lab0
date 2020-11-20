# COMP 530 - Matrix Madness

## Outline

* Introduction
* Matrix Refresher
* Exercise 1 - Arrays
* Exercise 2 - Pointers
* Exercise 3 - Double Pointers
* Exercise 4 - Linked Lists
* Testing and Debugging

## Introduction

In this lab we will build four functions in `MatrixMultiplier.c` that multiple 2 matrices in a unique way. Each function implementation varies in the data structure used to represent an array. These data types are all common in C and will appear multiply times in this class, often in combination on the future labs. Additionally, this assignment will provide much practice debugging C with command line debuggers (see GDB section below). After completing this assignment you will have the C programming experience need to suceed in this course!

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

## Testing and Debugging

To test your code run `make` followed by `./tests`. Debugging help coming soon.
