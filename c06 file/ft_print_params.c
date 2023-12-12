#include <unistd.h>
int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 1;

    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        if (argv[i + 1] != '\0')
        {
            char c;
            c = '\n';
            write(1, &c, 1);
        }
        i++;
    }
    return 0;
}
