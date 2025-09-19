#include <stdio.h>

int vowel_count(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        char c = str[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            count++;
    }
    return count;
}

int main() {
    char str[1000];
    printf("Input: ");
    scanf("%[^\n]", str);
    printf("Output: Number of vowels: %d\n", vowel_count(str));
}