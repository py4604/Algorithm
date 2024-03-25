#include <stdio.h>
#define MAX(a,b) a > b ? a : b 

int value[301];
int stair[301];

int main() {
    int count;
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) 
        scanf("%d", &stair[i]);

    value[0] = 0;
    value[1] = stair[1];
    value[2] = stair[1] + stair[2];

    for (int i = 3; i <= count; i++) 
        value[i] = stair[i] + (MAX(value[i - 2], stair[i - 1] + value[i - 3]));

    printf("%d\n", value[count]);
    return 0;
}
