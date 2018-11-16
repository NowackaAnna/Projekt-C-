#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Sprawdz_clicked();

private:
    void kolor_oczu();
private:
   void kolor_wlosow();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
