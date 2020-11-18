#include "vec3.h"


vec3 vec3::random()
{
    return vec3(random_double(), random_double(), random_double());
}
vec3 vec3::random(double min, double max)
{
    return vec3(random_double(min, max), random_double(min, max), random_double(min, max));
}


vec3 random_in_unit_sphere()
{
    while (true) {
        auto p = vec3::random(-1, 1);
        if (p.length_squared() >= 1) continue;
        return p;
    }
}


vec3 random_unit_vector()
{
    return unit_vector(random_in_unit_sphere());
}

