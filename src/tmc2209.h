#pragma once

/* tmc2209 library by Peter Polidoro
 */

// This will load the definition for common Particle variable types
#include "Particle.h"

// This is your main class that users will import into their application
class Tmc2209
{
public:
  /**
   * Constructor
   */
  Tmc2209();

  /**
   * Example method
   */
  void begin();

  /**
   * Example method
   */
  void process();

private:
  /**
   * Example private method
   */
  void doit();
};
