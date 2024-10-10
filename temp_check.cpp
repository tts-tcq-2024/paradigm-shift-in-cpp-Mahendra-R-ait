#include <iostream>
#define TEMP_MIN 0.0
#define TEMP_MAX 45.0

#define TOLERANCE_PERCENTAGE 0.05 // As per requirement Tolerance Thershold is 5% it is equal to 0.05

using namespace std;

float Temp_warning_tolerange = (TOLERANCE_PERCENTAGE * TEMP_MAX);
bool isTempOK(float temperature){
if (temperature < (0 + Temp_warning_tolerange)){
  cout<<"Warning: Approaching Low Temperature\n";
}
else if ( temperature > (45 - Temp_warning_tolerange){
  cout<<"Warning: Approaching High Temperature\n";
}
else{
    //do nothing
}  
return true;
}
