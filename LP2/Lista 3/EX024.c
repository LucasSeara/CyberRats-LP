#include <stdio.h>
int verificar_substring(char *str1, char *str2)
{
    char *p1 = str1;
    char *p2 = str2;
    while (*p1 != '\0')
    {
        char *x = p1;
        char *y = p2;
        while (*x == *y && *y != '\0')
        {
            *x++;
            *y++;
        }
        if (*y == '\0')
        {
            return 1;
        }
        *p1++;
    }
    return 0;
}
int main()
{
    char str1[20];
    char str2[20];
    printf("Digite a primeira string:\n");
    scanf("%s", str1);
    printf("Digite a segunda string:\n");
    scanf("%s", str2);
    if (verificar_substring(str1,str2))
    {
        printf("A segunda string ocorre na primeira:\n");
    }else
    {
        printf("A segunda string nao ocorre na primeira:\n");
    }
    
    
    return 0;
}