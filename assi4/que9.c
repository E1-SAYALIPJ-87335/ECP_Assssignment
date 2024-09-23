#include <stdio.h>

int next_fibonacci() 
{
    static int a = 0;  
    static int b = 1;  
    int next = a;      

    
    int temp = a;
    a = b;
    b = temp + b;

    return next;
}

int main() {
    
    for (int i = 0; i < 10; i++) {
        printf("%d\n", next_fibonacci());
    }
    return 0;
}

