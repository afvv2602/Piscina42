#include <stdio.h>

unsigned int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int len_d;
    unsigned int len_s;
    unsigned int i;

    i = 0;
    len_d =  ft_strlen(dest);
    len_s =  ft_strlen(src);
    if (size <= len_d) {
        return len_s + size;
    }
    while (src[i] != '\0' && len_d + i < size - 1) {
        dest[len_d + i] = src[i];
        i++;
    }
    dest[len_d + i] = '\0';
    return len_d + len_s;
}


int main() {
    char destin[20] = "Hello";
    char source[20] = ", world!";
    unsigned int result = ft_strlcat(destin, source, 10);
    printf("Result: %s\n", destin);
    printf("Length: %d\n", result);
    return (0);
}
