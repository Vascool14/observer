#include "repo.h"

void Repository::loadRepo(){
    ifstream input(this->departmentsFilePath);
    string row, name, description;

    while (getline(input, row)){
        istringstream iss(row);
        getline(iss, name, '|');
        getline(iss, description, '|');
        this->departments.emplace_back(name, description);
    }

    input.close();
    input = ifstream (this->volunteersFilePath);
    string email, interests, interest, department; // department name, not object

    while(getline(input, row)){
        istringstream iss1(row);
        getline(iss1, name, '|');
        getline(iss1, email, '|');
        getline(iss1, interests, '|');
        getline(iss1, department, '|');
        this->volunteers.emplace_back(name, email, interests, department);
    }
}

void Repository::addVolunteer(std::string name, std::string email, std::string interests, std::string department) {
    if (name == "") throw std::runtime_error("Empty \"Name\"");
    if (email == "") throw std::runtime_error("Empty \"Email\"");

    this->volunteers.emplace_back(name, email, interests, department);
}

void Repository::assignVolunteer(int index, std::string department) {
    this->volunteers[index].setDepartment(department);
}

// save to file before destroying the object
Repository::~Repository(){
    ofstream output(this->volunteersFilePath);
    for (auto vol : this->volunteers){
        output << vol.getName() << "|" 
        << vol.getEmail() << "|" 
        << vol.getInterests() << "|" 
        << vol.getDepartment() << "\n";
    }
}