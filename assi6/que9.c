#include <stdio.h>
#include <string.h>

void findAndReplace(const char *source, const char *find, const char *replace, char *result) {
    const char *pos = source;
    char *resPos = result;
    
    
    int findLen = strlen(find);
    int replaceLen = strlen(replace);
    
    result[0] = '\0';

    
    while ((pos = strstr(pos, find)) != NULL) {
        strncpy(resPos, source, pos - source);
        resPos += pos - source;
        
    
        strcpy(resPos, replace);
        resPos += replaceLen;
        
        pos += findLen;
        source = pos;
    }
   
    strcpy(resPos, source);
}

int main() {
    char source[] = "This is test time";
    char find[] = "is";
    char replace[] = "was";
    char result[1024];  

    findAndReplace(source, find, replace, result);

    printf("Source: %s\n", source);
    printf("Find: %s\n", find);
    printf("Replace: %s\n", replace);
    printf("Output: %s\n", result);

    return 0;
}

