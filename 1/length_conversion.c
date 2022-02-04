#include <stdio.h>

int main()
{
	int foot;
	float mmeter = 0.0;
	int lower = 1;
	int upper = 30;
	int step = 1;
	foot = lower;
	
	while (foot <= upper)
	{
		mmeter = foot * 304.8;
		printf("%d ft %f mm\n", foot, mmeter);
		foot = foot + step;
	};

	// 1 = 304 mm
	// 2 = 609 mm

}
