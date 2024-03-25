#include <stdio.h>

int pc[100][100];
int v[100];
int virus;

void check(int n, int k) {
    for (int i = 0; i < n; i++) {
        if (v[i] == 0 && pc[k][i] == 1) {
            v[i] = 1;
            check(n, i);
            virus++;
        }
    }
}

int main(void) {
    int n, count, x, y;

    scanf("%d", &n);
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d %d", &x, &y);
        pc[x - 1][y - 1] = 1;
        pc[y - 1][x - 1] = 1;
    }
    v[0] = 1;
   
    for (int i = 0; i < n; i++) {
        if (v[i] == 0 && pc[0][i] == 1) {
            v[i] = 1;
            check(n, i);
            virus++;
        }
    }
    printf("%d\n", virus);
    return 0;
}
