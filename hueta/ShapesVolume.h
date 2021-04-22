#pragma once
class ShapesVolume {
private:
	double pi = 3.1415926535;
	double param = 0, param1 = 0, param2 = 0;
	double base_area = 0;
public:
	ShapesVolume(const double param = 0);
	ShapesVolume(const double param1 = 0, const double param2 = 0);
	~ShapesVolume() {};
	double SphereVolume();
	double CubeVolume();
	double CylinderVolume();
};

