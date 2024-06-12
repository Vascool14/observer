#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include "service.h"
#include "domain.h"

class Window : public QWidget, public Observer {
    Q_OBJECT
    
    private:
        Service& service;
        Department department;
        QLabel* description;
        QListWidget* volunteersList;
        QListWidget* unassignedVolunteers;
        QLabel* volunteerNameLabel;
        QLineEdit* volunteerName;
        QLabel* volunteerEmailLabel;
        QLineEdit* volunteerEmail;
        QLabel* volunteerInterestsLabel;
        QLineEdit* volunteerInterests;
        QPushButton* addVolunteer;
        QPushButton* assignVolunteer;
        QPushButton* mostSuitable;

    public:
        explicit Window(Service &service, Department department, QWidget *parent = nullptr);
        void update();

    private slots:
        void addVol();
        void assignVol();
        void displayMostSuitable();
};

#endif // WINDOW_H