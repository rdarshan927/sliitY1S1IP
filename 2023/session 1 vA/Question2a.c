#include<stdio.h>
#include<string.h>

//completed

int main(void)
{
    char word[15];
    char temp;
    int i, len;

    printf("Enter the word : ");
    scanf("%s", word);

    len = strlen(word);

    for(i=1; i<=len/2; i++)
    {
        temp = word[i-1];
        word[i-1] = word[len-i];
        word[len-i] = temp;
    }
    printf("%s", word);

    return 0;
}
