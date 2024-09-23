#include <stdio.h>
#include <limits.h>

int main() {
    
    printf("char\n");
    printf("Size: %zu\n", sizeof(char));
    printf("Format Specifier: %c\n", (char)0); 
    printf("Range: %d to %d\n", CHAR_MIN, CHAR_MAX);
    
   
    printf("\nunsigned char\n");
    printf("Size: %zu\n", sizeof(unsigned char));
    printf("Format Specifier: %c\n", (unsigned char)0); 
    printf("Range: %d to %d\n", 0, UCHAR_MAX);
    
   
    printf("\nshort int\n");
    printf("Size: %zu\n", sizeof(short int));
    printf("Format Specifier: %hd\n", (short int)0); 
    printf("Range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    
    
    printf("\nunsigned short int\n");
    printf("Size: %zu\n", sizeof(unsigned short int));
    printf("Format Specifier: %hu\n", (unsigned short int)0); 
    printf("Range: %d to %d\n", 0, USHRT_MAX);
    
    
    printf("\nint\n");
    printf("Size: %zu\n", sizeof(int));
    printf("Format Specifier: %d\n", (int)0);
    printf("Range: %d to %d\n", INT_MIN, INT_MAX);
    
    
    printf("\nunsigned int\n");
    printf("Size: %zu\n", sizeof(unsigned int));
    printf("Format Specifier: %u\n", (unsigned int)0); 
    printf("Range: %d to %d\n", 0, UINT_MAX);
    
  
    printf("\nlong int\n");
    printf("Size: %zu\n", sizeof(long int));
    printf("Format Specifier: %ld\n", (long int)0); 
    printf("Range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    
   
    printf("\nunsigned long int\n");
    printf("Size: %zu\n", sizeof(unsigned long int));
    printf("Format Specifier: %lu\n", (unsigned long int)0); 
    printf("Range: %lu to %lu\n", 0UL, ULONG_MAX);
    
    return 0;
}

