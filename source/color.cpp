#include "color.hpp"

color::color():
x_{0.0f},
y_{0.0f},
z_{0.0f}{}

color::color(float a):
x_{a},
y_{a},
z_{a}{}

color::color(float a, float b, float c):
x_{a},
y_{b},
z_{c}{}