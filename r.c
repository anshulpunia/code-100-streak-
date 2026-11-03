#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    char name[100];
    int age;

    printf("Enter name: ");
    if (fgets(name, sizeof(name), stdin)) {
        name[strcspn(name, "\n")] = '\0';
    }

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open info.txt. Make sure the file exists.\n");
        return 1;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    fclose(fp);
    return 0;
}
