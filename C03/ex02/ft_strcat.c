#include <unistd.h>

char *ft_strcat(char *dest, const char *src) {
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
/*int main() {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    ft_strcat(dest, src);
    return 0;
}*/
