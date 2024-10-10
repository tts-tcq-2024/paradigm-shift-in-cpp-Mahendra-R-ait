#include <iostream>

#define SOC_MIN 20.0
#define SOC_MAX 80.0

#define TOLERANCE_PERCENTAGE 0.05 // As per requirement Tolerance Thershold is 5% it is equal to 0.05

using namespace std;

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
