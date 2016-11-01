
#include <stdio.h>

int main(void) {
    char name[32] = {0};
    fgets(name, sizeof(name), stdin);
    printf("%s\n", name);
    return 0;
}
