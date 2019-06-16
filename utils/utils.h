//
// Created by idz on 2019/4/9.
//

#ifndef MARSSIMULATOR_UTILS_H
#define MARSSIMULATOR_UTILS_H

#include <zconf.h>
#include "../constants.h"

float get_scale(u_char image_mode);

void get_height_width(u_char image_mode, int &height, int &width);

void get_time(short &y, short &m, short &d, short &hh, short &mm, short &ss);

#endif //MARSSIMULATOR_UTILS_H
