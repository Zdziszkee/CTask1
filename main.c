#include <stdio.h>
#include<ctype.h>

#define  MAX_SIZE 1000

int main() {
    double numbers[MAX_SIZE];
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) {
        numbers[i] = 0;
    }
    unsigned int counter = 0;
    int character;
    while ((character = getchar() != EOF)) {
        if (counter < 1000 && isdigit(character)) {
            numbers[counter] = character;
            counter++;
        } else {
            printf("Given character is not a");
            continue;
        }
    }
    return 69;
}
