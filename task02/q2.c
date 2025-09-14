#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T, X, Y;
    scanf("%d", &T); 
    
    while (T--) {
        scanf("%d", &X);
        scanf("%d", &Y);
        if (Y <= X)
            printf("%d\n", Y); 
        else
            printf("%d\n", X); }


    
    
    return 0;
}
