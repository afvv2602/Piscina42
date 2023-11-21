#include <unistd.h>

char *ft_strncat(char *dest, const char *src, unsigned int n) {
    unsigned int dest_len;
    unsigned int i;

    i= 0;
    dest_len = 0;
    while (dest[dest_len] != '\0') {
        dest_len++;
    }
    while (src[i] != '\0' && i < n) {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest);
}
/*int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";

    ft_strncat(dest, src, 3);
    printf("%s",dest);
    return 0;
}*/
