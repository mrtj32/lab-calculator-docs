#include <stdio.h>
#include <string.h>

int main() {
    int key, i;
    char data[100];

    printf("Enter the plain text: ");
    fgets(data, sizeof(data), stdin);

    printf("Enter the key value: ");
    scanf("%d", &key);

    for (i = 0; i < strlen(data); i++) {
        if (data[i] >= 'A' && data[i] <= 'Z') {
            data[i] = ((data[i] - 'A' + key) % 26) + 'A';
        } else if (data[i] >= 'a' && data[i] <= 'z') {
            data[i] = ((data[i] - 'a' + key) % 26) + 'a';
        }
    }

    printf("Your cipher text is: %s\n", data);
    return 0;
}
