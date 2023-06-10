// Git_Training.cpp

#include <iostream>
#include <cmath>
#include "Val_rad.h"
#include "Val_sin.h"
#include "Val_cos.h"

int main(void)
{
	std::cout << "Hello World!\n\n";

	float val_rad, val_deg, val_sin, val_cos;


	for (int i = 0; i <= 360; i += 10)
	{
		val_deg = i;
		val_rad = Val_rad(i);
		val_sin = Val_sin(val_rad);
		val_cos = Val_cos(val_rad);

		std::cout << val_deg << "度  " << val_rad << "[rad]  "
			<< "sin : " << val_sin << "  "
			<< "cos : " << val_cos
			<< std::endl;
	}

	int Wait = getchar();

	return 0;
}

// End
