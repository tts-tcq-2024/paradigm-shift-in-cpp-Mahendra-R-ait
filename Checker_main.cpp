#include <assert.h>
#include <iostream>

bool batteryIsOk(float temperature, float soc, float chargeRate) {
return isTempOK(temperature) && issocOK(soc) && ischargerateOK(chargeRate);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
  assert(batteryIsOk(25, 78, 0.7) == true);
  assert(batteryIsOk(22, 70, 0.7) == true);
  assert(batteryIsOk(25, 70, 0.76) == true);
}
