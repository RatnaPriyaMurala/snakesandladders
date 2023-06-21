#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char* extension;

    printf("Enter the filename: ");
    scanf("%s", filename);

    extension = strrchr(filename, '.');
    if (extension != NULL) {
        printf("The extension of the file is: %s\n", extension + 1);
    } else {
        printf("No extension found.\n");
    }

    return 0;
}
