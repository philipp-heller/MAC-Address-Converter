//
// Created by pholo on 4/7/2023.
//

#ifndef MAC_ADDRESS_CONVERTER_GUI_MAINWINDOW_H
#define MAC_ADDRESS_CONVERTER_GUI_MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class mainWindow;
}
QT_END_NAMESPACE

class mainWindow : public QMainWindow

{
Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private slots:
    void on_exitButton_clicked();

    void on_convertButton_clicked();

    void on_copyButton_clicked();

    void on_case1Button_clicked();

    void on_case2Button_clicked();

    void on_case3Button_clicked();

    void on_clearHistoryButton_clicked();

    void on_copyHistoryButton_clicked();

private:
    Ui::mainWindow *ui;
};

#endif //MAC_ADDRESS_CONVERTER_GUI_MAINWINDOW_H
