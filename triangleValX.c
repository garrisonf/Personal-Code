#include <stdio.h>

int main() {

    printf("Program finds the value of x in a triangle given two angles. \n");

    int a1, a2, angles, ans;

    printf("Angle 1: ");
        scanf("%d", &a1);

    printf("Angle 2: ");
        scanf("%d", &a2);

    angles = a1 + a2;
    ans = 180 - angles;

    printf("Value of X is %d", ans);

    return 0;
}