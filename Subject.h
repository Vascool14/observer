#ifndef SUBJECT_H
#define SUBJECT_H

#include "observer.h"
#include <vector>
#include <memory>

using namespace std;

// Observable wrapper
class Subject {
    private:
        vector <unique_ptr<Observer> > observers;
    public:
        void registerObserver(Observer *observer) { 
            this->observers.emplace_back(observer);
        }

        void update(){
            for (auto &obs : observers)
                obs->update();
        }
};

#endif // SUBJECT_H