#include <stdio.h>
#include <string.h>

char* shortcut(char* str_out, const char* str_in, char* result);

int main()
{
    char input[] = "codewars";
    char output[100];
    char result[100];

    shortcut(output, input, result);
    printf("Output: %s\n", output);

    return 0;
}

char* shortcut(char* str_out, const char* str_in, char* result)
{
    int j = 0;
    const char vowels[6] = "aeiou";

    for (int i = 0; str_in[i] != '\0'; i++)
    {
        int isVowel = 0;

        for (int k=0 ; vowels[k] != '\0'; k++)
        {
            if (str_in[i] == vowels[k])
            {
                isVowel = 1;
                break;
            }
         
        }
            
        if (!isVowel)
        {
            result[j] = str_in[i];
            j++;
        }
       
    }
                
    result[j] = '\0';

    strcpy(str_out, result);
    return str_out;
}
