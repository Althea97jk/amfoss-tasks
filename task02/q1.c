#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T,X;
    scanf("%d", &T); 
    
    while(T--) {
        scanf("%d", &X); 
        if(X <= 10)
            printf("YES\n");
        else
            printf("NO\n");
}

    
    
    return 0;
}
