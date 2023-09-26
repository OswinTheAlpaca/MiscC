#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "str_replace.h"

int main(void)
{
    // Replace all occurrences of "bo" with "ba" in "bobo"
    char *result = str_replace("bo", "bobo", "ba");

    // Print the result
    printf("Result: %s\n", result);

    // Don't forget to free the memory allocated by str_replace
    free(result);

    return 0;
}

