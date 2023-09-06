// Function to count the characters in a string - Pointer version

#include <stdio.h>

// Decalre Functions
int stringLength (const char *);

int main(void) {

  printf ("%d  ", stringLength("stringLength test"));
  printf ("%d  ", stringLength (""));
  printf ("%d\n", stringLength ("complete"));
  
  return 0;
}

// Define Functions
int stringLength (const char *string) {
  const char *cptr = string;
  while (*cptr)
    ++cptr;

  return cptr - string;
}