#include <stdio.h>

int main() {

    printf("Program calculates the amount and total cost of tiles needed to fill a given space. \n");

    int length, width;
    int areaTile, costTile;
    int totalArea;
    int numTiles;
    int ans;

    printf("Area length: ");
        scanf("%d", &length);
    printf("Area width: ");
        scanf("%d", &width);
    printf("Area of one tile (Squared): ");
        scanf("%d", &areaTile);
    printf("Cost of one tile: ");
        scanf("%d", &costTile);

    totalArea = length * width;
    numTiles = totalArea/areaTile;
    ans = numTiles * costTile;

    printf("Number of tiles needed: %d \n", numTiles);
    printf("Total cost: $%d", ans);

    return 0;
}