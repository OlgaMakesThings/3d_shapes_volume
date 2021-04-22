#include <iostream>
#include "ShapesVolume.h"
int main()
{
	double radius = 2.13;
	double side = 4.025;

	ShapesVolume sphere(radius);
	ShapesVolume cube(side);
	ShapesVolume cylinder(side, radius);

	double sphere_volume = sphere.SphereVolume();
	double cube_volume = cube.CubeVolume();

	double true_sphere_volume = 19.00412225838;
	double true_cube_volume = 65.207515625;

	std::cout << "sphere vol = " << sphere_volume << std::endl;
	std::cout << "cube vol = " << cube_volume << std::endl;

	system("pause");
	return 0;
}
