/* tmc2209 library by Peter Polidoro
 */

#include "tmc2209.h"

/**
 * Constructor.
 */
Tmc2209::Tmc2209()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void Tmc2209::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void Tmc2209::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void Tmc2209::doit()
{
    Serial.println("called doit");
}
