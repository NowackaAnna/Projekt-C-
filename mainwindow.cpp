#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QComboBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
QString wyswietl = "";
MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_Sprawdz_clicked()
{
    //QMessageBox::information(this,"","Dziala");

    QString cecha11 = ui->cechy11->currentText();
    QString cecha12 = ui->cechy12->currentText();
    QString cecha13 = ui->cechy13->currentText();
    QString cecha14 = ui->cechy14->currentText();
    QString cecha21 = ui->cechy21->currentText();
    QString cecha22 = ui->cechy22->currentText();
    QString cecha23 = ui->cechy23->currentText();
    QString cecha24 = ui->cechy24->currentText();



    wyswietl = "";
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);
    kolor_oczu();
    kolor_wlosow();

}

void MainWindow::kolor_oczu()
{

    int kolor_1 = ui->cechy11->currentIndex();
    int kolor_2 = ui->cechy21->currentIndex();
    QString kolor_wynik = " ";
    if (kolor_1 == 0)
    {
        if (kolor_2 == 0)
        {
            kolor_wynik = "Niebieski - 99% \nZielony - 1%";

        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Brązowy - 50% \nZielony - 50%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Zielony - 50% \nNiebiski - 50%";
        }

    }
    else if (kolor_1 == 1)
    {
        if (kolor_2 == 0)
        {
            kolor_wynik = "Brązowy - 50% \nZielony - 50%";
        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Brązowy - 75% \nZielony - 18% \nNiebieski - 7%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Brązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }

    }
    else if (kolor_1 == 2)
    {
        if (kolor_2 == 0)
        {
            kolor_wynik = "Zielony - 50% \nNiebieski - 50%";
        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Brązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Zielony - 25% \nNiebieski - 75%";
        }

    }
    else
    {
        kolor_wynik = "Za mało danych";
    };


    wyswietl += kolor_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}


void MainWindow::kolor_wlosow()
{

    int kolorw_1 = ui->cechy12->currentIndex();
    int kolorw_2 = ui->cechy22->currentIndex();
    QString kolorw_wynik = " ";
    if (kolorw_1 == 0)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Niebieski - 99% \nZielony - 1%";

        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brązowy - 50% \nZielony - 50%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Zielony - 50% \nNiebiski - 50%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Zielony - 50% \nNiebiski - 50%";
        }

    }
    else if (kolorw_1 == 1)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Brązowy - 50% \nZielony - 50%";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brązowy - 75% \nZielony - 18% \nNiebieski - 7%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Brązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Zielony - 50% \nNiebiski - 50%";
        }

    }
    else if (kolorw_1 == 2)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Zielony - 50% \nNiebieski - 50%";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Zielony - 25% \nNiebieski - 75%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Zielony - 50% \nNiebiski - 50%";
        }

    }
    else if (kolorw_1 == 3)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Zielony - 50% \nNiebieski - 50%";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Zielony - 25% \nNiebieski - 75%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Zielony - 50% \nNiebiski - 50%";
        }

    }
    else
    {
        kolorw_wynik = "Za mało danych";
    };

    wyswietl += "\n " + kolorw_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
