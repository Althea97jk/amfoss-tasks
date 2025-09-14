#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        int floorX = (X - 1) / 10 + 1;
        int floorY = (Y - 1) / 10 + 1;
        printf("%d\n", abs(floorX - floorY));}
    
    return 0;
}
