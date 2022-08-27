#include <stdio.h>
#include <stdbool.h>

int count(char *word);
char *concat(char *word1, char* word2);
bool compare(char *word1, char *word2);


int main()
{
    char word1[20];
    char word2[20];

    printf("Enter the first string: ");
    scanf("%s", word1);
    printf("Enter the second string: ");
    scanf("%s", word2);

    printf("String length: %i\n", count(word1));
    printf("Strings are %s\n", compare(word1, word2) ? "the same" : "not the same");
    printf("Concatenated strings: %s\n", concat(word1, word2));
    
    return 0;   
}


int count(char *word)
{
    int i = 0;
    for (i = 0; word[i] != '\0'; i++);

    return i;
}


char *concat(char *word1, char* word2)
{
    int word1_len = count(word1);
    for (int i = 0; i < count(word2); i++)
    {
        word1[word1_len + i] = word2[i];
    }

    return word1;
}


bool compare(char *word1, char *word2)
{
    for (int i = 0; i < count(word1); i++)
    {
        // Not complete: not checking cat and catterpilar for example
        // Should add checking \0
        if(word1[i] != word2[i])
        {
            return false;
        }
    }

    return true;
}