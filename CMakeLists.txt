cmake_minimum_required(VERSION 3.24)
project(MAC_Address_Converter_GUI)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_PREFIX_PATH "C:\\Qt\\6.5.0\\mingw_64\\")


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
    )

add_executable(MAC_Address_Converter_GUI
        main.cpp
        mainWindow.h
        mainWindow.cpp
        mainWindow.ui
        macConverter.h
        macConverter.cpp
    )

set_target_properties(MAC_Address_Converter_GUI PROPERTIES
        WIN32_EXECUTABLE TRUE
        MACOSX_BUNDLE TRUE
    )

target_link_libraries(MAC_Address_Converter_GUI
        Qt::Core
        Qt::Gui
        Qt::Widgets
    )
