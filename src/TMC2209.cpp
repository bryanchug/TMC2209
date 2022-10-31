/* TMC2209 library by Peter Polidoro
 */

#include "TMC2209.h"

/**
 * Constructor.
 */
TMC2209::TMC2209()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void TMC2209::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void TMC2209::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void TMC2209::doit()
{
    Serial.println("called doit");
}
