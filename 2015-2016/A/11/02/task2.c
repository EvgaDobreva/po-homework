#include <stdio.h>

int main()
{
    char s[150];
    scanf("%s",s);
    while(!(s[0] == 'S' && s[1] == 'T' && s[2] == 'O' && s[3] == 'P' && s[4] == '\0'))
    {
        int i = 0;
        while(s[i]!='\0')
        {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
            i++;
        }
        printf("%s\n", s);
        scanf("%s",s);
    }
    return 0;
}
