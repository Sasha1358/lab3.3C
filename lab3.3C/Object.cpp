/// Object.cpp
#include "Object.h"

int Object::objectCount = 0;

Object::Object() {
    objectCount++;
}

Object::~Object() {
    objectCount--;
}

int Object::getObjectCount() {
    return objectCount;
}
