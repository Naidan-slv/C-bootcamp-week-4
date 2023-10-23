#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    
    int number;
    int array[number];
    int num_lines = 10;
    int total = 0;
    float mean;

    printf("How many numbers would you like to enter ?");
    scanf("%d",number);
    printf("Type %d numbers: ", number);
    
    for (int i = 0; i < number; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        total += i; 
    }

    fclose(file);
    return 0;
}