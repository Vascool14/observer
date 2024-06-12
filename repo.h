#pragma once
#include "domain.h"
#include <fstream>
#include <sstream>

class Repository{
    private:
        string departmentsFilePath, volunteersFilePath;
        vector <Department> departments;
        vector <Volunteer> volunteers;
        
    public:
        Repository(){
            this->departmentsFilePath = "departments.txt";
            this->volunteersFilePath = "volunteers.txt";
            this->loadRepo();
        }

        void loadRepo();
        void addVolunteer(string name, string email, string interests, string department);
        void assignVolunteer(int position, string department);

        vector <Department> &getDepartments() { return this->departments; }
        vector <Volunteer> &getVolunteers() { return this->volunteers; }

        ~Repository();
};