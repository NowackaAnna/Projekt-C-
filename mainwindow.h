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
   void grupa_krwi();
private:
   void rodzaj_wlosow();
private:
   void kolor_skory();
private:
   void policzki();
private:
   void jezyk();
private:
   void nos();
private:
   void uszy();
private:
   void plasawica();
private:
   void plec();
private:
   void hemofilia();
private:
   void daltonizm();
private:
   void rh();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
