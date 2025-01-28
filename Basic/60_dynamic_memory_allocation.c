/*
  #include <stdlib.h>


  1. malloc()  --> malloc stands for memory allocation. It takes number of bytes to be allocated as an
input and returns a pointer of type void.
   Returns NULL type 
   --> (<data_type>*) malloc(n * sizeof((<data_type>));

  2. calloc()  --> calloc stands for continuous allocation. It initializes each memory block with a default
value of 0.
   Returns NULL type
   --> ptr = (<data_type>*) calloc(n, sizeof(<data_type));

  3. free(ptr)    --> //memory of ptr is released.
  We can use free() function to deallocate the memory. The memory allocated using
calloc/malloc is not deallocated automatically.

  4. realloc() --> Sometimes the dynamically allocated memory is insufficient or more than required.
realloc is used to allocate memory of new size using the previous pointer and size.

   ptr = (<data_type>*) realloc(<variable>,n * sizeof(<data_type>)); 

*/


