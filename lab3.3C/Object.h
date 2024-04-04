/// Object.h
#pragma once
#include <iostream>
#include <sstream>

class Object {
private:
    static int objectCount;

public:
    Object();
    virtual ~Object();

    static int getObjectCount();
};

