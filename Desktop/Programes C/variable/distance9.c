#include <stdio.h>
#include <math.h> 

double calculate_distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1 = 12, y1 = 4;
    int x2 = 14, y2 = 8;

    double distance = calculate_distance(x1, y1, x2, y2); 

    printf("Distance between (%d, %d) and (%d, %d) is: %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}
