#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[200];
    char word[50];
    int wordCount = 0;
    int i, j;

    // Prompt the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Loop through each word in the sentence
    for (i = 0; i < strlen(sentence); ) {
        // Extract a word from the sentence
        word[0] = '\0';
        j = 0;
        while (i < strlen(sentence) && !isspace(sentence[i])) {
            word[j++] = sentence[i++];
        }
        word[j] = '\0';  // Null-terminate the word

        // Increment word count since the word did not contain 'z'
        wordCount++;

        // Check if the word contains the letter 'z'
        if (strchr(word, 'z') || strchr(word, 'Z')) {
            break;
        }

        // Skip any spaces to move to the next word
        while (i < strlen(sentence) && isspace(sentence[i])) {
            i++;
        }
    }

    // Output the number of words processed before finding 'z'
    printf("Number of words processed before finding a word with 'z': %d\n", wordCount);

    return 0;
}
