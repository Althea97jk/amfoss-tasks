#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y);
        
        int capacity = (N + 1) * Y; 
        
        if (capacity >= X)
            printf("YES\n");
        else
            printf("NO\n");
    }
        return 0;
}
