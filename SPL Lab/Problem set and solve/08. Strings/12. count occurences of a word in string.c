#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char word[20];

    // মূল স্ট্রিং ইনপুট নেওয়া
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0'; // শেষের নতুন লাইন ক্যারেক্টারটি মুছে ফেলা
    }

    // খোঁজা হবে এমন শব্দ ইনপুট নেওয়া
    printf("Enter word: ");
    fgets(word, sizeof(word), stdin);
    if (word[strlen(word) - 1] == '\n') {
        word[strlen(word) - 1] = '\0'; // শেষের নতুন লাইন ক্যারেক্টারটি মুছে ফেলা
    }

    int word_len = strlen(word);
    int str_len = strlen(str);
    int count = 0;

    // মূল স্ট্রিংয়ে খোঁজা হবে এমন শব্দটি খুঁজে বের করা
    for (int i = 0; i <= str_len - word_len; i++) {
        int match = 1; // মিল পাওয়ার জন্য ফ্ল্যাগ

        // স্ট্রিং এবং ওয়ার্ড মিলানো
        for (int j = 0; j < word_len; j++) {
            if (tolower(str[i + j]) != tolower(word[j])) { // ক্যারেক্টার মেলানো
                match = 0;
                break;
            }
        }

        // যদি মিল পাওয়া যায় এবং এটি পুরো একটি শব্দ হয়
        if (match && (i == 0 || isspace(str[i - 1])) && (isspace(str[i + word_len]) || str[i + word_len] == '\0')) {
            count++;
        }
    }

    printf("Occurrences of '%s': %d\n", word, count);

    return 0;
}
