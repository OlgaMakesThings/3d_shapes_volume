#include "ShapesVolume.h"
#include <cmath>

ShapesVolume::ShapesVolume(const double tmp) {
	param = tmp;
}
ShapesVolume::ShapesVolume(const double tmp1, const double tmp2) {
	param1 = tmp1;
	param2 = tmp2;
}
double ShapesVolume::SphereVolume() {
	return (4 * pi * pow(param, 2) / 3);
}
/*ShapesVolume::~ShapesVolume() {
	param = 0;
}*/
double ShapesVolume::CubeVolume() {
	return (pow(param, 3));
}
double ShapesVolume::CylinderVolume() {

}
