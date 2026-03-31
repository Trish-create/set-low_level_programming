#include "main.h"

int _atoi(char *s)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
        i++;
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }
    return (sign * result);
}
