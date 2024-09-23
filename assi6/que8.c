#include <stdio.h>
#include <string.h>

void numToWords(int num, char *result);

void one(int num, char *result) {
    const char *words[] = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
    };
    strcpy(result, words[num]);
}

void twoLessThan20(int num, char *result) {
    const char *words[] = {
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    strcpy(result, words[num - 10]);
}

void ten(int num, char *result) {
    const char *words[] = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };
    strcpy(result, words[num / 10]);
}

void two(int num, char *result) {
    if (num < 10) {
        one(num, result);
    } else if (num < 20) {
        twoLessThan20(num, result);
    } else {
        char str[100];
        ten(num, str);
        if (num % 10 != 0) {
            strcat(str, " ");
            one(num % 10, result);
            strcat(str, result);
        }
        strcpy(result, str);
    }
}

void three(int num, char *result) {
    char str[100];
    if (num >= 100) {
        one(num / 100, str);
        strcat(str, " Hundred ");
        num %= 100;
        if (num != 0) {
            strcat(str, "and ");
        }
    }
    two(num, result);
    strcat(str, result);
    strcpy(result, str);
}

void numToWords(int num, char *result) {
    if (num == 0) {
        strcpy(result, "Zero");
        return;
    }

    if (num >= 1000) {
        three(num / 1000, result);
        strcat(result, " Thousand ");
        num %= 1000;
    }

    if (num > 0) {
        three(num, result);
    }
}

int main() {
    int number;
    char result[1000] = {0}; 

    printf("Enter a number (0-999999): ");
    scanf("%d", &number);

    if (number < 0 || number > 999999) {
        printf("Number out of range.\n");
        return 1;
    }

    numToWords(number, result);
    printf("%s\n", result);

    return 0;
}

