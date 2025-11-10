#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    destFile = fopen("target.txt", "w");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }
    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Contents copied successfully from source.txt to target.txt\n");
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
