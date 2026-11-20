#include <stdio.h>
int main(void)
{
    FILE  *fp;
    char text[200];
    char ch;
    printf("enter a line of text:");
    scanf("%199[^\n]", text);
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("unable to open file for writing.\n");
        return 1;
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("unable to open file for deading.\n");
        return 1;
    }
    printf("data read from file:\n");
    while ((ch = fgetc(fp) != EOF))
        putchar (ch);
    fclose(fp);
    return 0;    
}