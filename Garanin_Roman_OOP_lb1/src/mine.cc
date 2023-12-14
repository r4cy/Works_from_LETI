#include "headers/controller.h"
#include "headers/mine.h"

void Mine::start(Controller& control) {
    control.change_health(-100);
}

Event* Mine::create() const {
    return new Mine;
}