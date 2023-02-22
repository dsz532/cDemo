#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *compress(char *src) {
    int count = 1, ebp = 0;
    static char result[100] = {0};
    for (int j = 0; j < 100; j++) {
        if (src[j] == src[j + 1] && 65 <= src[j + 1] && src[j + 1] <= 122) {
            count++;
        } else if (count < 10 && count > 2) {
            result[ebp] = src[j];
            result[ebp + 1] = count + 48;
            count = 1;
            ebp += 2;
            continue;
        } else if (count >= 10) {
            result[ebp] = src[j];
            result[ebp + 1] = count / 10 + 48;
            result[ebp + 2] = count % 10 + 48;
            count = 1;
            ebp += 3;
            continue;
        } else if (65 <= src[j] && src[j] <= 122) {
            for (int i = 0; i < count; ++i) {
                result[ebp] = src[j];
                ebp += 1;
            }
            count = 1;
            continue;
        } else {
            break;
        }
    }
    return result;
}

int main() {
    char src[100];
    scanf("%s", src);

    char *ps = compress(src);

    puts(ps);
    return 0;
}
