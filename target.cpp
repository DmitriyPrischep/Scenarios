#include <cmath>
#include <ctime>
#include <cstdlib>
#include "target.h"

target::target()
{
    this->distance = 0;
    this->azimuth = 0;
    this->x = 0.;
    this->y = 0.;
    this->course = 0;
    this->velocity = 0;
//    srand(time(NULL));
//    this->distance = rand() % 400;
//    this->azimuth = rand() % 360;
//    this->x = this->distance * sin(this->azimuth);
//    this->y = this->distance * cos(this->azimuth);
//    this->course = rand() % 360;
//    this->velocity = 200 + rand() % 400;
}

void target::initTarget(){
    srand(time(0));
    this->distance = rand() % 400;
    this->azimuth = rand() % 360;
    this->x = this->distance * sin(this->azimuth);
    this->y = this->distance * cos(this->azimuth);
    this->course = rand() % 360;
    this->velocity = 200 + rand() % 400;
}
