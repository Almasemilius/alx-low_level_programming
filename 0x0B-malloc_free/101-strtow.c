#include <stdlib.h>
#include <string.h>

static int count_words(char *str) {
    int count = 0;
    int len, i;

    len = strlen(str);
    i = 0;
    
    while (i < len) {
        while (i < len && str[i] == ' ')
            i++;
        if (i < len && str[i] != ' ') {
            count++;
            while (i < len && str[i] != ' ')
                i++;
        }
    }
    
    return count;
}

static char *get_next_word(char **str_ptr) {
    char *word_start;
     word_start = *str_ptr;
    
    while (**str_ptr && **str_ptr == ' ')
        (*str_ptr)++;
    
    while (**str_ptr && **str_ptr != ' ')
        (*str_ptr)++;
    
    return word_start;
}

char **strtow(char *str) {
        int word_count, word_index;
        char **words, *ptr, *word;
        size_t word_length;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    ptr = str;
    word_index = 0;
    while (*ptr) {
        word = get_next_word(&ptr);
    word_length = ptr - word;
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            while (word_index > 0)
                free(words[--word_index]);
            free(words);
            return NULL;
        }
        strncpy(words[word_index], word, word_length);
        words[word_index][word_length] = '\0';
        word_index++;
    }

    words[word_index] = NULL;
    return words;
}
