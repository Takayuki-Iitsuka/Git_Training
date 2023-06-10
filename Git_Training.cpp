// Git_Training.cpp

#include <iostream>
#include <cmath>
#include "Val_rad.h"

const float MY_PI = 3.14159265;

int main(void)
{
	std::cout << "Hello World!\n\n";

	float val_rad, val_deg, val_sin, val_cos;


	for (int i = 0; i <= 360; i += 10)
	{
		val_deg = i;
		val_rad = Val_rad(i);
		val_sin = std::sin(val_rad);
		val_cos = std::cos(val_rad);

		std::cout << val_deg << "度  " << val_rad << "[rad]  "
			<< "sin : " << val_sin << "  "
			<< "cos : " << val_cos
			<< std::endl;
	}

	int Wait = getchar();

	return 0;
}

// End
