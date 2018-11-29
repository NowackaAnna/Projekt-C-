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
    grupa_krwi();
    rodzaj_wlosow();

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
            kolor_wynik = "Kolor oczu: \nNiebieski - 99% \nZielony - 1%";

        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 50%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Kolor oczu: \nZielony - 50% \nNiebiski - 50%";
        }

    }
    else if (kolor_1 == 1)
    {
        if (kolor_2 == 0)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 50%";
        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 75% \nZielony - 18% \nNiebieski - 7%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }

    }
    else if (kolor_1 == 2)
    {
        if (kolor_2 == 0)
        {
            kolor_wynik = "Kolor oczu: \nZielony - 50% \nNiebieski - 50%";
        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 12% \nNiebieski - 38%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Kolor oczu: \nZielony - 25% \nNiebieski - 75%";
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

void MainWindow::grupa_krwi()
{
    int grupaw_1 = ui->cechy13->currentIndex();
    int grupaw_2 = ui->cechy23->currentIndex();
    QString grupa_wynik = " ";
    if (grupaw_1 == 0)
    {
        if (grupaw_2 == 0)
        {
            grupa_wynik = "Grupa krwi: \n0 - 100%";

        }
        if (grupaw_2 == 1)
        {
            grupa_wynik = "Grupa krwi: \n0 - 25% \nA - 75%";
        }
        if (grupaw_2 == 2)
        {
            grupa_wynik = "Grupa krwi: \n0 - 25% \nB - 75%";
        }
        if (grupaw_2 == 3)
        {
            grupa_wynik = "Grupa krwi: \nA - 50% \nB - 50%";
        }

    }
    else if (grupaw_1 == 1)
    {
        if (grupaw_2 == 0)
        {
            grupa_wynik = "Grupa krwi: \n0 - 25% \nA - 75%";
        }
        if (grupaw_2 == 1)
        {
            grupa_wynik = "Grupa krwi: \n0 - 6,25% \nA - 93,75%";
        }
        if (grupaw_2 == 2)
        {
            grupa_wynik = "Grupa krwi: \n0 - 6,25% \nA - 18,75% \nB - 18,75% \nAB - 56,25%";
        }
        if (grupaw_2 == 3)
        {
            grupa_wynik = "Grupa krwi: \nA - 50% \nB - 12,5% \nAB - 37,5%";
        }

    }
    else if (grupaw_1 == 2)
    {
        if (grupaw_2 == 0)
        {
            grupa_wynik = "Grupa krwi: \n0 - 25% \nB - 75%";
        }
        if (grupaw_2 == 1)
        {
            grupa_wynik = "Grupa krwi: \n0 - 6,25% \nA - 18,75% \nB - 18,75% \nAB - 56,25%";
        }
        if (grupaw_2 == 2)
        {
            grupa_wynik = "Grupa krwi: \n0 - 6,25% \nB - 93,75%";
        }
        if (grupaw_2 == 3)
        {
            grupa_wynik = "Grupa krwi: \nA - 12,5% \nB - 50% \nAB - 37,5%";
        }

    }
    else if (grupaw_1 == 3)
    {
        if (grupaw_2 == 0)
        {
            grupa_wynik = "Grupa krwi: \nA - 50% \nB - 50%";
        }
        if (grupaw_2 == 1)
        {
            grupa_wynik = "Grupa krwi: \nA - 50% \nB - 12,5% \nAB - 37,5%";
        }
        if (grupaw_2 == 2)
        {
            grupa_wynik = "Grupa krwi: \nA - 12,5% \nB - 50% \nAB - 37,5%";
        }
        if (grupaw_2 == 3)
        {
            grupa_wynik = "Grupa krwi: \nA - 25% \nB - 25% \nAB - 50%";
        }

    }
    else
    {
        grupa_wynik = "Za mało danych";
    };

    wyswietl += "\n " + grupa_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);
}


void MainWindow::rodzaj_wlosow()
{

    int rodzaj_1 = ui->cechy14->currentIndex();
    int rodzaj_2 = ui->cechy24->currentIndex();
    QString wlosy_wynik = " ";
    if (rodzaj_1 == 0)
    {
        if (rodzaj_2 == 0)
        {
            wlosy_wynik = "Rodzaj włosów: \nProste - 100%";

        }
        if (rodzaj_2 == 1)
        {
            wlosy_wynik = "Rodzaj włosów: \nProste - 25% \nKręcone - 75%";
        }


    }
    else if (rodzaj_1 == 1)
    {
        if (rodzaj_2 == 0)
        {
            wlosy_wynik = "Rodzaj włosów: \nProste - 25% \nKręcone - 75%";
        }
        if (rodzaj_2 == 1)
        {
            wlosy_wynik = "Rodzaj włosów: \nProste - 6,25% \nKręcone - 93,75%";
        }

    }


    else
    {
        wlosy_wynik = "Za mało danych";
    };


    wyswietl += "\n " + wlosy_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
