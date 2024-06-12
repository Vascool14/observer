#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

using namespace std;

class Observer{
public:
    virtual void update() = 0;

    // Destructor
    virtual ~Observer() = default;
};

#endif //OBSERVER_H