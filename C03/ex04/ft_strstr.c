#include <stdio.h>
char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        j = 0;
        while (str[i + j] != '\0' && str[i + j] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
                return (&str[i]);
            ++j;
        }
        ++i;
    }
    return (0);
}
int main() {
    char str[] = "Hola, mi nombre es Pedro.";
    char to_find1[] = "nombre";
    char to_find2[] = "Pedro";
    char to_find3[] = "Hola";
    char to_find4[] = "no existe";
    char to_find5[] = "";

    char *result1 = ft_strstr(str, to_find1);
    char *result2 = ft_strstr(str, to_find2);
    char *result3 = ft_strstr(str, to_find3);
    char *result4 = ft_strstr(str, to_find4);
    char *result5 = ft_strstr(str, to_find5);

    printf("Resultado 1: %s\n", result1 ? result1 : "No encontrado");
    printf("Resultado 2: %s\n", result2 ? result2 : "No encontrado");
    printf("Resultado 3: %s\n", result3 ? result3 : "No encontrado");
    printf("Resultado 4: %s\n", result4 ? result4 : "No encontrado");
    printf("Resultado 5: %s\n", result5 ? result5 : "No encontrado");

    return 0;
}
