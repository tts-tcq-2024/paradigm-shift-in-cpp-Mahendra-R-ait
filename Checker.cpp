#include <assert.h>
#include <iostream>

#define SOC_MIN 20.0
#define SOC_MAX 80.0
#define TOLERANCE_PERCENTAGE 0.05

using namespace std;

bool isTempOK(float temperature){
if (temperature < 0 || temperature > 45){
  cout <<"Temperature out of range!\n";
  return false;
}
return true;
}

float value_max = 5% of SOC_MAX
bool issocOK(float soc){
if(soc < 20 + value_max){
  cout<<"Warning: Approaching discharge\n";
}
else if (soc > 80 - value_max) {
    cout << "Warning: Approaching charge-peak\n";
}
else{
    //Do nothing
}
    return false;
}
return true;
}

bool ischargerateOK(float chargeRate) {
    if (chargeRate > 0.8) {
        cout << "Charge Rate out of range!\n";
        return false;
    }
    return true;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
return isTempOK(temperature) && issocOK(soc) && ischargerateOK(chargeRate);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
