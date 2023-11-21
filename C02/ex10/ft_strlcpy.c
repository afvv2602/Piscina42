#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0 && i < size)
    {
        dest[i] = '\0';
    }
    return (i);
}
/*int main() {
    char src[] = "string de test";
    char dest[20];
    unsigned int test = 0;
    test = ft_strlcpy(dest, src, sizeof(dest));
    return 0;
}*/
