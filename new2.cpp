#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maxEbony = c / a;  
    int maxIvory = c / b;  

    for (int i = 0; i <= maxEbony; i++) {
        for (int j = 0; j <= maxIvory; j++) {
            if (i * a + j * b == c) {
                printf("Yes\n");
                return 0;
            }
        }
    }

    printf("No\n");
    return 0;
}
