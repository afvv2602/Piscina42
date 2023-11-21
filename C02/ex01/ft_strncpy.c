#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int cont;

    cont =   0;
    while ( src[cont] != '\0' && cont < n )
    {
        dest[cont] = src[cont];
        cont++;
    }
    while (cont < n)
    {
        dest[cont] = '\0';
        cont++;
    }
    return (dest);
}
/*int main()
{
    char *src = "Hola me llamo pedro";
    char dest[20];
    ft_strncpy(dest,src ,2);
    printf("%s", dest);
    return (0);
}*/
