#include <stdio.h>
int main()
{
    FILE *fp;
    char text[80];
    int i, c;
    fp = fopen("abc.txt", "w");
    printf("\n Enter the text :");
    scanf("%[^\n]", text);
    for (c = 1; c <= 10; c++)
    {
        for (i = 0; text[i]; i++)
        {
            putc(text[i], fp);
        }
        putc('\n', fp);
    }
    fclose(fp);
}