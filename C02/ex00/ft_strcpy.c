#include <unistd.h>

char    *ft_strcpy(char *dest, char *src)
{
    int cont;

    cont    =   0;
    while (src[cont])
    {
        dest[cont] = src[cont];
        cont++;
    }
    dest[cont] = '\0';
    return dest;
}
/*int main()
{
    char *dest;
    char *src = "Hola";
    ft_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}*/
