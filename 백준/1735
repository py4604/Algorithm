#include <stdio.h>

int main() {
	int x1, y1, x2, y2;
	int count = 2;
	scanf("%d %d",&x1,&y1);
	scanf("%d %d",&x2,&y2);

	int x = (x1 * y2) + (x2 * y1);
	int y = (y1 * y2);

	while (count <= x && count <= y) 
		if ((x % count != 0) || (y % count != 0)) 
			count++;
		else {
			x /= count;
			y /= count;
		}
	
	printf("%d %d", x, y);

	return 0;
}
