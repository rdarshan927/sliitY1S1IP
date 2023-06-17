#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[20];
    char temp;
    int i, len;

    printf("Enter the word : ");
    scanf("%s", word);

    printf("Original array : %s\n\n", word);

    len = strlen(word);

    for(i=1; i<=len/2; i++)
    {
        temp = word[i-1];
        word[i-1] = word[len-i];
        word[len-i] = temp;
    }
    printf("Reversed array : %s", word);

    return 0;
}
