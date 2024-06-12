#ifndef SERVICE_H
#define SERVICE_H

#include "Subject.h"
#include "repo.h"
#include <map>

class Service : public Subject{
    private:
        Repository &repository;

    public:
        Service(Repository &repository) : repository{repository} {};
        vector<string> getVolunteersFromDepartment(string department);
        vector<string> getUnassigned();
        vector <pair <int, string>> getStatistics();
        vector <string> getMostSuitable(string description);
        void addVolunteer(string name, string email, string interests, string department);
        void assignVolunteer(string key, string department);
};

#endif // SERVICE_H