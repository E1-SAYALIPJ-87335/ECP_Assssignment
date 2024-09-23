#include <stdio.h>

int next_fibonacci() {
    static int a = 0;  
    static int b = 1;  
    int next;

    next = a;          
    a = b;            
    b = next + b;      

    return next;
}

int main() {
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", next_fibonacci());
    }
    return 0;
}

