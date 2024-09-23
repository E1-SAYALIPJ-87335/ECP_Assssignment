#include <stdio.h>
#include <string.h>

void decimalToRoman(int num, char *roman) 
{
  
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    roman[0] = '\0'; 

    for (int i = 0; i < 13; i++) 
	{
        while (num >= values[i]) 
		{
            strcat(roman, symbols[i]);
            num -= values[i];
        }
    }
}


int romanToDecimal(const char *roman) 
{

    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int result = 0;
    int i = 0;
    while (*roman) 
	{
        int j;
        for (j = 0; j < 13; j++) 
		{
            if (strncmp(roman, symbols[j], strlen(symbols[j])) == 0) 
			{
                result += values[j];
                roman += strlen(symbols[j]);
                break;
            }
        }
        if (j == 13)
	   	{

            return -1;
        }
    }
    return result;
}


int main() {
    char roman[20];
    int number;


    number = 1987;
    decimalToRoman(number, roman);
    printf("Decimal %d to Roman: %s\n", number, roman);


    const char *romanNumeral = "MCMXCVII";
    int decimal = romanToDecimal(romanNumeral);
    printf("Roman %s to Decimal: %d\n", romanNumeral, decimal);

    return 0;
}

