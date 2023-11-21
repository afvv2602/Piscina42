#include <unistd.h>

char    *ft_strlowcase(char *str) {
    int cont;

    cont = 0;
    while (str[cont]) {
        if (str[cont] >= 'A' && str[cont] <= 'Z')
        {
            str[cont] = str[cont] + 32;
        }
        cont++;
    }
    return (str);
}
/*int main()
{
    char str[]= "JHGHJGYNMHG";
    ft_strlowcase(str);
    return (0);
}*/
