#include <stdio.h>
#include <stdlib.h>
int main() {
    char* filename = "PP.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    int line_number_something=0;
    int buffer_size = 100;    
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        // atoi will convert the string into a number
        printf("%d\n", atoi(line_buffer));
        line_number_something++;
    }
    printf("There were %d lines\n",line_number_something);

    fclose(file);
    return 0;
}