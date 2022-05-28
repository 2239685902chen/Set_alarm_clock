#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0;
	scanf("%d:%d %d", &q, &w, &e);
	w += e;
	while (w > 60)
	{
		w -= 60;
		q += 1;
		if (q > 23)
		{
			q = 0;
		}
	}
	printf("%02d:%02d\n", q, w);
	return 0;
}