#include <stdio.h>
#include <stdlib.h>

char score_array[21];

int score() {
    int result =0;
    for(int i = 0; i < 21; ++i) {
        result += score_array[i];
    }
    return result;
};

int main()
{
    printf("Welcome in boiling kata\n");
    printf("Insert values\n");
    for(int i = 0; i < 21; ++i) {
        scanf("%i", &score_array[i]);
    }
    printf("Result: %i",score());
    return 0;
}
