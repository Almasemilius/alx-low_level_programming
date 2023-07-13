#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    unsigned int s1_len = 0;
    while (s1[s1_len] != '\0')
        s1_len++;

    unsigned int s2_len = 0;
    while (s2[s2_len] != '\0')
        s2_len++;

    if (n >= s2_len)
        n = s2_len;

    char *result = malloc(s1_len + n + 1);
    if (result == NULL)
        exit(1);

    unsigned int i;
    for (i = 0; i < s1_len; i++)
        result[i] = s1[i];

    unsigned int j;
    for (j = 0; j < n; j++)
        result[i++] = s2[j];

    result[i] = '\0'; 

    return result;
}