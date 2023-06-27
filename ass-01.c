#include <stdio.h>
#include <stdlib.h>

int find_common_result(int, int);

int main() {
    int corporation1, corporation2;
    int common_result;
    char common_names[7][20] = {"Bangalore", "BangaloreEast", "A", "B", "BangaloreWest", "C", "D"};

    printf("Enter Corporation (between 56001 to 56008): ");
    scanf("%d %d", &corporation1, &corporation2);

    common_result = find_common_result(corporation1 % 1000, corporation2 % 1000);

    if (common_result < 1) {
        printf("\nCorporation not found!\n");
        return 0;
    }

    printf("%d, %d -> ", corporation1, corporation2);

    for (; common_result >= 0; common_result--)
        printf("%s, ", common_names[common_result]);

    printf("\n");

    return 0;
}

int find_common_result(int firstcorp, int secondcorp) {
    if ((firstcorp >= 1 && firstcorp <= 4) && (secondcorp >= 1 && secondcorp <= 4)) {
        return 2; // BangaloreEast
    } else if ((firstcorp >= 1 && firstcorp <= 4) && (secondcorp == 7 || secondcorp == 8)) {
        return 1; // A
    } else if ((firstcorp == 5 || firstcorp == 6) && (secondcorp == 5 || secondcorp == 6)) {
        return 5; // BangaloreWest
    } else if ((firstcorp == 7 || firstcorp == 8) && (secondcorp == 1 || secondcorp == 4)) {
        return 6; // C
    } else if ((firstcorp == 7 || firstcorp == 8) && secondcorp == 7) {
        return 3; // D
    }
    


    return 0; // No common result
}
