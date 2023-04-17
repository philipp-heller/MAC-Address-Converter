//
// Created by pholo on 4/7/2023.
//

#include <iostream>
#include <string>
#include <QApplication>
#include <QPushButton>

#include "clipboardxx.hpp"
#include "mainWindow.h"
#include "macConverter.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    mainWindow w;
    w.show();
    return a.exec();
}

