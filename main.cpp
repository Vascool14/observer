#include <QApplication>
#include "window.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Repository repo;
    Service service(repo);

    for (auto department : repo.getDepartments()){
        auto *window = new Window(service, department);
        window->show();
    }

    return QApplication::exec();
}