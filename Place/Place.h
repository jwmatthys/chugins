#include "common.h"

extern double SINARRAY[1025], COSARRAY[1025], ATANARRAY[1025];

static const double radpt = 162.99746617261;   /* converts rads to 1024-element array ptr */
static const double radpt2 = 325.9493234522;

inline double SIN(double x) { return SINARRAY[(int)(wrap(x) * radpt + 0.5)]; }
inline double COS(double x) { return COSARRAY[(int)(wrap(x) * radpt + 0.5)]; }
inline double ATAN(double x) { return ATANARRAY[(int)((x) * radpt2) + 512]; }

static const double LocationUnset = -999999.999999;
