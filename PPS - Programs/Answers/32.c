// WAP to implement strlen (), strcat (),strcpy() using the concept of Functions.
#include <stdio.h>

int xstrlen(char *s);
void xstrcpy(char *t, char *s);
void xstrcat(char *t, char *s);

int main() {
    char s1[100], s2[100], s3[100];
    
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);
    
    printf("Length of s1: %d\n", xstrlen(s1));
    
    xstrcpy(s3, s1);
    printf("Copy of s1 into s3: %s\n", s3);
    
    xstrcat(s1, s2);
    printf("Concatenation of s1 and s2: %s\n", s1);
    
    return 0;
}

int xstrlen(char *s) {
    int len = 0;
    while(*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void xstrcpy(char *t, char *s) {
    while(*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}

void xstrcat(char *t, char *s) {
    while(*t != '\0') 
        t++;
    while(*s != '\0') {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}
