#include <stdio.h>
#include "Faults.h"
#include <stdbool.h>

bool OverCurrent(float Current, int time) /* Brings in values from bolean OverCurrent of current and time. */
{

 if(Current>K_OC_MAX && time==20) /* checks is current value is greater than the max allowable current and if time is set to 20. If current greater than max returns a true and reports the fault */
 {
   return 1; 
 }
 else
 {
   return 0;
 }
}
