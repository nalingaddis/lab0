#include "MatrixMultiplier.h"

// Compute the matrix product M * N and store it in P
void exercise1(const double M[A][B], const double N[B][C], double P[A][C]) {
    // Syntatically this should look similar to Java
    
    // Hints:
    // - See the assignment write up for the defintion of a matrix product
    // - Remember to initialize the values of P before using them

    /* ------ CODE HERE ------ */
}

// Compute M * N using pointers and return the product as a pointer
double* exercise2(const double* M, const double* N) {
    // Initialize a chuck of memory on the heap big enough for the product

    // Hints: 
    // - Use malloc to allocate heap memory
    // - Use `sizeof(type)` to get the size required to represent a single instance of `type`
    // - Remember to cast the result of malloc to the appropiate pointer type 

    /* ------ CODE HERE ------ */
    
    // Loop through the values of M, N to compute the product

    // Hints:
    // - Remember to initialize the values in your heap memory before use
    // - Remember you can only index like a 1D array, indices need to be expressions
    
    /* ------ CODE HERE ------ */

    // Return the matrix product
    
    /* ------ CODE HERE ------ */
    return NULL;
}

// Compute M * N using double pointers and return the product as a double pointer 
double** exercise3(const double** M, const double** N) {
    // Allocate a a chuck of memory to return, each value in the chuck will be 
    // a single pointer that points to a row of the matrix
    
    /* ------ CODE HERE ------ */

    // For each pointer in your chuck of memory, allocate another chuck of memory
    // to hold the values of the row represented by this pointer
    
    /* ------ CODE HERE ------ */

    // Loop through the input pointers and compute the product
    // Note that although double pointers maybe conceptually more confusing,
    // using them in this context is more familiar because we can index them
    // like how we would index a 2D array

    // Hints:
    // - This part should look EXTREMELY similar to exercise 1
    // - Again remember to initial all values in memory before use
    
    /* ------ CODE HERE ------ */

    // Return the product
    
    /* ------ CODE HERE ------ */
    return NULL;
}

// Compute the product of M and the TRANSPOSE of N using structs
// Before implementing this exercise please do the following:
// - Read the assignment right up for a refresher on matrix transposes
// - Inspect struct implementations in the MatrixMultiplication.h file 
// - For further reading on the Matrix implementation used here, see assignment write up
Matrix* exercise4(const Matrix* M, const Matrix* N) {
    // Initialize a new Matrix pointer
    // Hint: To initialize a pointer generally (and in the context of this assignmet) means 
    // to declare it and then assign it a value returned by malloc
    
    /* ------ CODE HERE ------ */

    // Initialize a new Row pointer, this row will be the head of the row linked list
    
    /* ------ CODE HERE ------ */

    // Store the address of this row in your Matrix pointer
    // Hint: Use the '->' operator to access values inside a struct pointer
    
    /* ------ CODE HERE ------ */

    // Begin looping through the input matrices
    for(int r=0; r<A; r++) {
        // Steps to complete here:
        // - Get the first entry of the current row of M
        // - Get the first row of N
        // - Initialize a new entry and store it as the head of the current row of P

        /* ------ CODE HERE ------ */

        for(int c=0; c<C; c++) {
            // Steps to complete here:
            // - Get the first entry in the current row of N
            // - Initialize the value of the current entry of P

            /* ------ CODE HERE ------ */

            for(int i=0; i<B; i++) {
                // Steps to complete here:
                // - Update the value of the current entry of P
                // - Increment the current entry of M
                // - Increment the current entry of N

                /* ------ CODE HERE ------ */

            }
            // Steps to complete here:
            // - Initialize the next entry of P
            // - Increment the current entry of P
            // - Increment the current row of N
            // - Reset the current entry of M to head of the current row of M
            
            /* ------ CODE HERE ------ */

        }
        // Steps to complete here:
        // - Initialize the next row of P
        // - Increment the current row of P
        // - Increment the current row of M
        
        /* ------ CODE HERE ------ */
    }
    
    // Return the product
    
    /* ------ CODE HERE ------ */
    return NULL;
}