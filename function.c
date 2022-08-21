#include <stdio.h>

int sum(int begin, int end) {
    int ret = 0;
    for (int i = begin; i <= end; i++) {
        ret += i;
    }
    return ret;
}

int main() {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));
    return 0;
}