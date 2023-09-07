#include "Ejercicio03.h"
#include<math.h>
#include<cstdlib>
#include<cmath>

using namespace std;

bool Ejercicio03::isPowerOfTwo(int n)
{   
    int nabs = abs(n);
    double log = log2(nabs);

    if (n == 0) {
        return false;
    }
    if (log == floor(log)) {
        return true;
    }
    else {
        return false;
    }
}
