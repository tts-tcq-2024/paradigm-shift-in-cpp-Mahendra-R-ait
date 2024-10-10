#include <assert.h>
#include <iostream>

#define TEMP_MIN 0.0
#define TEMP_MAX 45.0
#define SOC_MIN 20.0
#define SOC_MAX 80.0
#define CR_MAX 0.8
#define TOLERANCE_PERCENTAGE 0.05 // As per requirement Tolerance Thershold is 5% it is equal to 0.05

using namespace std;

float Temp_warning_tolerange = (TOLERANCE_PERCENTAGE * TEMP_MAX);
bool isTempOK(float temperature){
if (temperature < (0 + Temp_warning_tolerange)){
  cout<<"Warning: Approaching Low Temperature\n;
}
else if ( temperature > (45 - Temp_warning_tolerange){
  cout<<""Warning: Approaching High Temperature\n;
}
else{
    //do nothing
}  
return true;
}

float soc_warning_tolerance = (TOLERANCE_PERCENTAGE * SOC_MAX);
bool issocOK(float soc){
if(soc < (20 + soc_warning_tolerance)){
  cout<<"Warning: Approaching discharge\n";
}
else if (soc > (80 - soc_warning_tolerance)) {
    cout << "Warning: Approaching charge-peak\n";
}
else{
    //Do nothing
}
return true;
}

float chrage_warning_tolerance = (TOLERANCE_PERCENTAGE * CR_MAX);
bool ischargerateOK(float chargeRate) {
    if (chargeRate > (0.8 - chrage_warning_tolerance)) {
        cout << "Waring: Charge Rate is reaching limit!\n";
    }
    return true;
}

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
