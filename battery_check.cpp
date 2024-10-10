#include <iostream>

#define CR_MAX 0.8
#define TOLERANCE_PERCENTAGE 0.05 // As per requirement Tolerance Thershold is 5% it is equal to 0.05

using namespace std;

float chrage_warning_tolerance = (TOLERANCE_PERCENTAGE * CR_MAX);
bool ischargerateOK(float chargeRate) {
    if (chargeRate > (0.8 - chrage_warning_tolerance)) {
        cout << "Waring: Charge Rate is reaching limit!\n";
    }
    return true;
}
