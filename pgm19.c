#include <stdio.h>
struct student
{
    char regno[20];
    char name[50];
    float marks;
};
int main(void)
{
    struct student s[50];
    int n, i;
    printf("enternumber of students(1-50):");
    scanf("%d", &n);
    if (n < 1 || n >50) {
        printf("invalid number of students.\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        printf("\nstudent %d\n", i + 1);
        printf("register number:");
        scanf("%19s", s[i].regno);
        printf("name:");
        scanf("%49[^\n]", s[i].name);
        printf("marks:");
        scanf("%f", &s[i].marks);
    }
    printf("\n%-20s %-25s %s\n", "register no", "marks");
    for(i = 0; i < n; i++)
        printf("%-20s %-25 %.2f\n", s[i].regno, s[i].name, s[i].marks);
    return 0;    
}