// WAP to check whether a given word exists in a file or not. If yes then find the number of times it occurs.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char word[50], temp[50], filename[50];
    int count = 0, found = 0;

    printf("Enter filename: ");
    scanf("%s", filename);
    
    printf("Enter word to search: ");
    scanf("%s", word);

    fp = fopen(filename, "r");
    if(fp == NULL) {
        printf("File not found.\n");
        exit(1);
    }

    while(fscanf(fp, "%s", temp) != EOF) {
        if(strcmp(word, temp) == 0) {
            found = 1;
            count++;
        }
    }
    
    if(found) 
        printf("Word '%s' found %d times.\n", word, count);
    else
        printf("Word not found.\n");

    fclose(fp);
    return 0;
}
