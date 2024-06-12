#ifndef DOMAIN_H
#define DOMAIN_H

#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <assert.h>
using namespace std;

class Department{
    private:
        string name, description;
    
    public:
        Department(string name,string description):name{name},description{description}{}

        // getters
        string getName() const{ return name; }
        string getDescription() const{ return description; }

        // setters
        void setName(string newName){ name = newName; }
        void setDescription(string newDescription){ description = newDescription; }

        // compare by name
        bool operator==(const Department& d){
            return name == d.name;
        }

        // toStr() - "name description"
        friend ostream& operator<<(ostream& os, const Department& d){
            os << d.name << " " << d.description;
            return os;
        }

        // read from file
        friend istream& operator>>(istream& is, Department& d){
            string name,description;
            is >> name >> description;
            d.name = name;
            d.description = description;
            return is;
        }

        // destructor
        ~Department(){}
};

class Volunteer{
    private:
        string name, email, interests, department;

    public:
        Volunteer(string name,string email,string interests,string department):name{name},email{email},interests{interests},department{department}{}

        // getters
        string getName() const{ return name; }
        string getEmail() const{ return email; }
        string getInterests() const{ return interests; }
        string getDepartment() const{ return department; }
        // get to_str()
        string getVolunteer(){
            return this->name+"|"+this->email+"|"+this->interests;
        }

        // setters
        void setName(string newName){ name = newName; }
        void setEmail(string newEmail){ email = newEmail; }
        void setInterests(string newInterests){ interests = newInterests; }
        void setDepartment(string newDepartment){ department = newDepartment; }

        // destructor
        ~Volunteer(){}
};

#endif // DOMAIN_H