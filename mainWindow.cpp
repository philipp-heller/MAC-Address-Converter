//
// Created by pholo on 4/7/2023.
//

#include "mainWindow.h"
#include "./ui_mainWindow.h"
#include "macConverter.h"
#include "clipboardxx.hpp"

bool gate;
int format = 0;
std::vector<std::string> values;
int a = 0;

mainWindow::mainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::mainWindow)
{
    ui->setupUi(this);
}

mainWindow::~mainWindow()
{
    delete ui;
}

void mainWindow::on_exitButton_clicked()
{
    this->close();
}

void mainWindow::on_convertButton_clicked()
{
    if (format != 0)
    {
        QString qs = ui->inputMAC->text();
        std::string mac = macConverter::ConvertMacAddress(macConverter::SimplifyMacAddress(qs.toStdString()), format);
        values.push_back(mac);
        ui->convertedMAC->setText(QString::fromStdString(mac));
        ui->previousMAC->addItem(QString::fromStdString(values[a]));
        a++;
        ui->confirmedCopy->setText(QString::fromStdString(""));
    }
    else
    {
        ui->confirmedCopy->setText(QString::fromStdString("Please select a format first!"));
    }
}

void mainWindow::on_copyButton_clicked()
{
    clipboardxx::clipboard clipboard;
    if (ui->previousMAC->count() != 0)
    {
        QString qs = ui->convertedMAC->toPlainText();
        clipboard << qs.toStdString();
        ui->confirmedCopy->setText(QString::fromStdString("Successfully copied"));
    }
}

void mainWindow::on_case1Button_clicked()
{
    format = 1;
    ui->previewMAC->setText("XX:XX:XX:XX:XX:XX");
}

void mainWindow::on_case2Button_clicked()
{
    format = 2;
    ui->previewMAC->setText("XX-XX-XX-XX-XX-XX");
}

void mainWindow::on_case3Button_clicked()
{
    format = 3;
    ui->previewMAC->setText("XXXX.XXXX.XXXX");
}


void mainWindow::on_clearHistoryButton_clicked()
{
    ui->previousMAC->clear();
}


void mainWindow::on_copyHistoryButton_clicked()
{
    clipboardxx::clipboard clipboard;
    if (ui->previousMAC->count() != 0) {
        QString qs = ui->previousMAC->currentItem()->text();
        clipboard << qs.toStdString();
    }
}

