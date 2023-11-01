#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, x;
        char s[100001];

        scanf("%d %d", &n, &x);
        scanf("%s",s);
        int count = 1;
        int min = x;
        int max = x;

        for (int i = 0; s[i]; i++)
        {
            if (s[i] == 'R')
            {
                x++;
            }
            else if (s[i] == 'L')
            {
                x--;
            }

            if (x < min)
            {
                count++;
                min = x;
            }
            else if (x > max)
            {
                count++;
                max = x;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}