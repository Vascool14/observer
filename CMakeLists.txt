cmake_minimum_required(VERSION 3.23)
project(test_practic)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
)

set_property(SOURCE window.h PROPERTY SKIP_AUTOMOC ON)

add_executable(test_practic
        main.cpp  
        observer.h
        repo.h
        repo.cpp
        service.h
        service.cpp
        Subject.h
        domain.h
        window.h
        window.cpp
)

target_link_libraries(test_practic
        Qt::Core
        Qt::Gui
        Qt::Widgets
)