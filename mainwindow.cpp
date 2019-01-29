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
    QString cecha15 = ui->cechy15->currentText();
    QString cecha21 = ui->cechy21->currentText();
    QString cecha22 = ui->cechy22->currentText();
    QString cecha23 = ui->cechy23->currentText();
    QString cecha24 = ui->cechy24->currentText();
    QString cecha25 = ui->cechy25->currentText();
    QString cecha16 = ui->cechy16->currentText();
    QString cecha26 = ui->cechy26->currentText();
    QString cecha17 = ui->cechy17->currentText();
    QString cecha27 = ui->cechy27->currentText();
    QString cecha18 = ui->cechy18->currentText();
    QString cecha28 = ui->cechy28->currentText();
    QString cecha19 = ui->cechy19->currentText();
    QString cecha29 = ui->cechy29->currentText();
    QString cecha120 = ui->cechy120->currentText();
    QString cecha210 = ui->cechy210->currentText();
    QString cecha121 = ui->cechy121->currentText();
    QString cecha211 = ui->cechy211->currentText();
    QString cecha122 = ui->cechy122->currentText();
    QString cecha212 = ui->cechy212->currentText();
    QString cecha123 = ui->cechy123->currentText();
    QString cecha213 = ui->cechy213->currentText();
    QString cecha124 = ui->cechy124->currentText();
    QString cecha214 = ui->cechy214->currentText();



    wyswietl = "";
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);
    kolor_oczu();
    kolor_wlosow();
    grupa_krwi();
    rodzaj_wlosow();
    kolor_skory();
    policzki();
    jezyk();
    nos();
    uszy();
    plasawica();
    plec();
    hemofilia();
    daltonizm();
    rh();

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
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nNiebieski - 50%";
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
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nNiebieski - 50%";
        }
        if (kolor_2 == 1)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 75% \nZielony - 18,75% \nNiebieski - 6,25%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 37,5% \nNiebieski - 12,5%";
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
            kolor_wynik = "Kolor oczu: \nBrązowy - 50% \nZielony - 37,5% \nNiebieski - 12,5%";
        }
        if (kolor_2 == 2)
        {
            kolor_wynik = "Kolor oczu: \nZielony - 75% \nNiebieski - 25%";
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
            kolorw_wynik = "Blond - 93,75% \nBrąz - 6,25%";

        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Blond - 50% \nBrąz - 50%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Blond - 93,75% \nRudy - 6,25%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Brąz - 87,50% \nBlond - 6,25% \nCzarny - 6,25";
        }

    }
    else if (kolorw_1 == 1)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Blond - 50% \nBrąz - 50%";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brąz - 97,5% \nBlond - 1,25% \nCzarny - 1,25%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Brąz - 50% \nRudy - 50%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Brąz - 50% \nCzarny - 50%";
        }

    }
    else if (kolorw_1 == 2)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Blond - 93,75% \nRudy - 6,25%";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brąz - 50% \nRudy - 50%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Rudy - 100%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Brąz - 87,5% \nRudy - 6,25% \nCzarny - 6,25%";
        }

    }
    else if (kolorw_1 == 3)
    {
        if (kolorw_2 == 0)
        {
            kolorw_wynik = "Brąz - 87,50% \nBlond - 6,25% \nCzarny - 6,25";
        }
        if (kolorw_2 == 1)
        {
            kolorw_wynik = "Brąz - 50% \nCzarny - 50%";
        }
        if (kolorw_2 == 2)
        {
            kolorw_wynik = "Brąz - 87,50% \nRudy - 6,25% \nCzarny - 6,25%";
        }
        if (kolorw_2 == 3)
        {
            kolorw_wynik = "Czarny - 93,75% \nBrąz - 6,25%";
        }

    }
    else
    {
        kolorw_wynik = "Za mało danych";
    };

    wyswietl += "\nKolor włosów: \n" + kolorw_wynik;
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


};


void MainWindow::kolor_skory()
{

    int kolors_1 = ui->cechy15->currentIndex();
    int kolors_2 = ui->cechy25->currentIndex();
    QString kolors_wynik = " ";
    if (kolors_1 == 0)
    {
        if (kolors_2 == 0)
        {
            kolors_wynik = "Biały - 100%";

        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Biały - 12,5% \nCzarny - 12,5% \nMulat - 75%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Biały - 12,5% \nŻółty - 12,5% \nMetys - 75%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Biały - 87,50% \nŻółty - 4,25% \nMetys - 7,25%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Biały - 87,50% \nCzarny - 4,25% \nMulat - 7,25%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Biały - 87,50% \nCzarny - 2,87% \nŻółty - 2,87% \nZambos - 6,75%";
        }

    }
    else if (kolors_1 == 1)
    {
        if (kolors_2 == 0)
        {
            kolors_wynik = "Biały - 12,5% \nCzarny - 12,5% \nMulat - 75%";
        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Czarny - 100%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Czarny - 12,5% \nŻółty - 12,5% \nZambos - 75%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Czarny - 87,50% \nBiały - 2,87% \nŻółty - 2,87% \nMetys - 6,75%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Czarny - 87,50% \nBiały - 4,25% \nMulat - 7,25%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Czarny - 87,50% \nŻółty - 4,25% \nZambos - 7,25%";
        }

    }
    else if (kolors_1 == 2)
    {
        if (kolors_2 == 0)
        {
            kolors_wynik = "Biały - 12,5% \nŻółty - 12,5% \nMetys - 75%";
        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Czarny - 12,5% \nŻółty - 12,5% \nZambos - 75%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Żółty - 100%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Żółty - 87,50% \nBiały - 4,25% \nMetys - 7,25%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Żółty - 87,50% \nBiały - 2,87% \nCzarny - 2,87% \nMulat - 6,75%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Żółty - 87,50% \nCzarny - 4,25% \nZambos - 7,25%";
        }

    }
    else if (kolors_1 == 3)
    {
        if (kolors_2 == 0)
        {
            kolors_wynik = "Biały - 87,50% \nŻółty - 4,25% \nMetys - 7,25%";
        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Czarny - 87,50% \nBiały - 2,87% \nŻółty - 2,87% \nMetys - 6,75%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Żółty - 87,50% \nBiały - 4,25% \nMetys - 7,25%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Metys - 50% \nBiały - 25% \nŻółty - 25%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Biały - 50% \nCzarny - 17,5% \nŻółty - 17,5% \nMetys - 7,50% \nMulat - 7,50%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Żółty - 50% \nBiały - 17,5% \nCzarny - 17,5% \nMetys - 7,50% \nZambos - 7,50%";
        }

    }
    else if (kolors_1 == 4)
    {
        if (kolors_2 == 0)
        {
           kolors_wynik = "Biały - 87,50% \nCzarny - 4,25% \nMulat - 7,25%";
        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Czarny - 87,50% \nŻółty - 4,25% \nZambos - 7,25%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Żółty - 87,50% \nBiały - 2,87% \nCzarny - 2,87% \nMulat - 6,75%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Biały - 50% \nCzarny - 17,5% \nŻółty - 17,5% \nMetys - 7,50% \nMulat - 7,50%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Mulat - 50% \nBiały - 25% \nCzarny - 25%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Czarny - 50% \nBiały - 17,5% \nŻółty - 17,5% \nMulat - 7,50% \nZambos - 7,50%";
        }

    }
    else if (kolors_1 == 4)
    {
        if (kolors_2 == 0)
        {
           kolors_wynik = "Biały - 87,50% \nCzarny - 2,87% \nŻółty - 2,87% \nZambos - 6,75%";
        }
        if (kolors_2 == 1)
        {
            kolors_wynik = "Czarny - 87,50% \nBiały - 4,25% \nMulat - 7,25%";
        }
        if (kolors_2 == 2)
        {
            kolors_wynik = "Żółty - 87,50% \nCzarny - 4,25% \nZambos - 7,25%";
        }
        if (kolors_2 == 3)
        {
            kolors_wynik = "Żółty - 50% \nBiały - 17,5% \nCzarny - 17,5% \nMetys - 7,50% \nZambos - 7,50%";
        }
        if (kolors_2 ==4)
        {
            kolors_wynik = "Czarny - 50% \nBiały - 17,5% \nŻółty - 17,5% \nMulat - 7,50% \nZambos - 7,50%";
        }
        if (kolors_2 == 5)
        {
            kolors_wynik = "Zambos - 50% \nCzarny - 25% \nŻółty - 25%";
        }

    }
    else
    {
        kolors_wynik = "Za mało danych";
    };

    wyswietl += "\nKolor skóry \n" + kolors_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


};


void MainWindow::policzki()
{

    int policzki_1 = ui->cechy16->currentIndex();
    int policzki_2 = ui->cechy26->currentIndex();
    QString policzki_wynik = " ";
    if (policzki_1 == 0)
    {
        if (policzki_2 == 0)
        {
            policzki_wynik = "Występowanie dołeczków - 93,75%";

        }
        if (policzki_2 == 1)
        {
            policzki_wynik = "Występowanie dołeczków - 75%";
        }


    }
    else if (policzki_1 == 1)
    {
        if (policzki_2 == 0)
        {
            policzki_wynik = "Występowanie dołeczków - 75%";
        }
        if (policzki_2 == 1)
        {
            policzki_wynik = "Występowanie dołeczków - 0%";
        }

    }

    else
    {
        policzki_wynik = "Za mało danych";
    };


    wyswietl += "\n" + policzki_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
void MainWindow::jezyk()
{

    int jezyk_1 = ui->cechy17->currentIndex();
    int jezyk_2 = ui->cechy27->currentIndex();
    QString jezyk_wynik = " ";
    if (jezyk_1 == 0)
    {
        if (jezyk_2 == 0)
        {
             jezyk_wynik = "Skłonność do pracy \nmięśniowej językiem - 93,75%";

        }
        if (jezyk_2 == 1)
        {
            jezyk_wynik = "Skłonność do pracy \nmięśniowej językiem - 75%";
        }


    }
    else if (jezyk_1 == 1)
    {
        if (jezyk_2 == 0)
        {
            jezyk_wynik = "Skłonność do pracy \nmięśniowej językiem - 75%";
        }
        if (jezyk_2 == 1)
        {
            jezyk_wynik = "Skłonność do pracy \nmięśniowej językiem - 0%";
        }

    }

    else
    {
        jezyk_wynik = "Za mało danych";
    };


    wyswietl += "\n" + jezyk_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
void MainWindow::nos()
{

    int nos_1 = ui->cechy18->currentIndex();
    int nos_2 = ui->cechy28->currentIndex();
    QString nos_wynik = " ";
    if (nos_1 == 0)
    {
        if (nos_2 == 0)
        {
             nos_wynik = "Wielkość nosa: \nDuży - 93,75% \nMały - 6,25%";

        }
        if (nos_2 == 1)
        {
            nos_wynik = "Wielkość nosa: \nDuży - 75% \nMały - 25%";
        }


    }
    else if (nos_1 == 1)
    {
        if (nos_2 == 0)
        {
            nos_wynik = "Wielkość nosa: \nDuży - 75% \nMały - 25%";
        }
        if (nos_2 == 1)
        {
            nos_wynik = "Wielkość nosa: \nMały - 100%";
        }

    }

    else
    {
        nos_wynik = "Za mało danych";
    };


    wyswietl += "\n" + nos_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
void MainWindow::uszy()
{

    int uszy_1 = ui->cechy19->currentIndex();
    int uszy_2 = ui->cechy29->currentIndex();
    QString uszy_wynik = " ";
    if (uszy_1 == 0)
    {
        if (uszy_2 == 0)
        {
             uszy_wynik = "Uszy odstające - 93,75%";

        }
        if (uszy_2 == 1)
        {
            uszy_wynik = "Uszy odstające - 75%";
        }


    }
    else if (uszy_1 == 1)
    {
        if (uszy_2 == 0)
        {
            uszy_wynik = "Uszy odstające - 75%";
        }
        if (uszy_2 == 1)
        {
            uszy_wynik = "Uszy odstające - 0%";
        }

    }

    else
    {
        uszy_wynik = "Za mało danych";
    };


    wyswietl += "\n" + uszy_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}


void MainWindow::plasawica()
{

    int p_1 = ui->cechy120->currentIndex();
    int p_2 = ui->cechy210->currentIndex();
    QString p_wynik = " ";
    if (p_1 == 0)
    {
        if (p_2 == 0)
        {
             p_wynik = "Wstąpienie chorby - 100%";

        }
        if (p_2 == 1)
        {
            p_wynik = "Osoba chora - 50% \nNosiciel \n(50%szans na zachorowanie) - 50%";
        }
        if (p_2 == 2)
        {
            p_wynik = "Nosiciel \n(50% szans na zachorowanie) - 100%";
        }


    }
    else if (p_1 == 1)
    {
        if (p_2 == 0)
        {
            p_wynik = "Osoba chora - 50% \nNosiciel \n(50%szans na zachorowanie) - 50%";
        }
        if (p_2 == 1)
        {
            p_wynik = "Osoba chora - 25% \nNosiciel \n(50%szans na zachorowanie) - 50% \nOsoba zdrowa - 25%";
        }
        if (p_2 == 2)
        {
            p_wynik = "Nosiciel \n(50% szans na zachorowanie) - 50% \nOsoba zdrowa - 50%";
        }

    }
    else if (p_1 == 2)
    {
        if (p_2 == 0)
        {
             p_wynik = "Nosiciel \n(50% szans na zachorowanie) - 100%";
        }
        if (p_2 == 1)
        {
            p_wynik = "Nosiciel \n(50% szans na zachorowanie) - 50% \nOsoba zdrowa - 50%";
        }
        if (p_2 == 2)
        {
            p_wynik = "Osoba zdrowa - 100%";
        }

    }

    else
    {
        p_wynik = "Za mało danych";
    };


    wyswietl += "\nPlsąwica: " + p_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}


void MainWindow::plec()
{

    int plec_1 = ui->cechy121->currentIndex();
    int plec_2 = ui->cechy211->currentIndex();
    QString plec_wynik = " ";
    if (plec_1 == 0)
    {
        if (plec_2 == 0)
        {
             plec_wynik = "Córka - 0% \nSyn - 0%";

        }
        if (plec_2 == 1)
        {
            plec_wynik = "Córka - 50% \nSyn - 50%";
        }


    }
    else if (plec_1 == 1)
    {
        if (plec_2 == 0)
        {
            plec_wynik = "Córka - 50% \nSyn - 50%";
        }
        if (plec_2 == 1)
        {
            plec_wynik = "Córka - 0% \nSyn - 0%";
        }

    }

    else
    {
        plec_wynik = "Za mało danych";
    };


    wyswietl += "\n" + plec_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}

void MainWindow::hemofilia()
{

    int plec_1 = ui->cechy121->currentIndex();
    int plec_2 = ui->cechy211->currentIndex();
    int hem_1 = ui->cechy122->currentIndex();
    int hem_2 = ui->cechy212->currentIndex();
    QString hem_wynik = " ";
    if (plec_1 == 0)
    {
        if (plec_2 == 0)
        {
             hem_wynik = "Nie ma możliwości dziedziczenia.";

        }
        if (plec_2 == 1)
        {
            if (hem_1 == 0)
            {
                if (hem_2 == 0)
                {
                    hem_wynik = "Córka zdrowa - 100% \nSyn zdrowy - 100%";
                }
                if (hem_2 == 1)
                {
                    hem_wynik = "Mężczyzna nie może być nosicielem.";
                }
                if (hem_2 == 2)
                {
                    hem_wynik = "Córka nosicielka - 100% \nSyn zdrowy - 100%";
                }
            }
            if (hem_1 == 1)
            {
                if (hem_2 == 0)
                {
                    hem_wynik = "Córka zdrowa - 50% \nCórka nosicielka - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if (hem_2 == 1)
                {
                    hem_wynik = "Mężczyzna nie może być nosicielem.";
                }
                if (hem_2 == 2)
                {
                    hem_wynik = "Córka nosicielka - 50% \nCórka chora - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
            }
            if (hem_1 == 2)
            {
                if(hem_2 == 0)
                {
                    hem_wynik = "Córka nosicielka - 100% \nSyn chory - 100%";
                }
                if (hem_2 == 1)
                {
                    hem_wynik = "Mężczyzna nie może być nosiecielm.";
                }
                if (hem_2 == 2)
                {
                    hem_wynik = "Córka chora - 100% \nSyn chory - 100%";
                }
            }
        }


    }
    else if (plec_1 == 1)
    {
        if (plec_2 == 0)
        {
            if (hem_1 ==0)
            {
                if(hem_2 == 0)
                {
                   hem_wynik = "Córka zdrowa - 100% \nSyn zdrowy - 100%";
                }
                if (hem_2 == 1)
                {
                    hem_wynik = "Córka zdrowa - 50% \nCórka nosicielka - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if (hem_2 == 2)
                {
                    hem_wynik = "Córka nosicielka - 100% \nSyn chory - 100%";
                }
            }
            if (hem_1 == 1)
            {
                hem_wynik = "Mężczyzna nie może być nosicielem.";
            }
            if (hem_1 == 2)
            {
                if(hem_2 == 0)
                {
                    hem_wynik = "Córka nosicielka - 100% \nSyn zdrowy - 100%";
                }
                if (hem_2 == 1)
                {
                   hem_wynik = "Córka nosicielka - 50% \nCórka chora - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if(hem_2 == 2)
                {
                    hem_wynik = "Córka chora - 100% \nSyn chory - 100%";
                }
            }
        }
        if (plec_2 == 1)
        {
            hem_wynik = "Nie ma możliwości dziedziczenia.";
        }

    }

    else
    {
        hem_wynik = "Za mało danych";
    };


    wyswietl += "\nHemofilia: \n" + hem_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}

void MainWindow::daltonizm()
{

    int plec_1 = ui->cechy121->currentIndex();
    int plec_2 = ui->cechy211->currentIndex();
    int dal_1 = ui->cechy123->currentIndex();
    int dal_2 = ui->cechy213->currentIndex();
    QString dal_wynik = " ";
    if (plec_1 == 0)
    {
        if (plec_2 == 0)
        {
             dal_wynik = "Nie ma możliwości dziedziczenia.";

        }
        if (plec_2 == 1)
        {
            if (dal_1 == 0)
            {
                if (dal_2 == 0)
                {
                    dal_wynik = "Córka zdrowa - 100% \nSyn zdrowy - 100%";
                }
                if (dal_2 == 1)
                {
                    dal_wynik = "Mężczyzna nie może być nosicielem.";
                }
                if (dal_2 == 2)
                {
                    dal_wynik = "Córka nosicielka - 100% \nSyn zdrowy - 100%";
                }
            }
            if (dal_1 == 1)
            {
                if (dal_2 == 0)
                {
                    dal_wynik = "Córka zdrowa - 50% \nCórka nosicielka - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if (dal_2 == 1)
                {
                    dal_wynik = "Mężczyzna nie może być nosicielem.";
                }
                if (dal_2 == 2)
                {
                    dal_wynik = "Córka nosicielka - 50% \nCórka chora - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
            }
            if (dal_1 == 2)
            {
                if(dal_2 == 0)
                {
                    dal_wynik = "Córka nosicielka - 100% \nSyn chory - 100%";
                }
                if (dal_2 == 1)
                {
                    dal_wynik = "Mężczyzna nie może być nosiecielm.";
                }
                if (dal_2 == 2)
                {
                    dal_wynik = "Córka chora - 100% \nSyn chory - 100%";
                }
            }
        }


    }
    else if (plec_1 == 1)
    {
        if (plec_2 == 0)
        {
            if (dal_1 ==0)
            {
                if(dal_2 == 0)
                {
                   dal_wynik = "Córka zdrowa - 100% \nSyn zdrowy - 100%";
                }
                if (dal_2 == 1)
                {
                    dal_wynik = "Córka zdrowa - 50% \nCórka nosicielka - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if (dal_2 == 2)
                {
                    dal_wynik = "Córka nosicielka - 100% \nSyn chory - 100%";
                }
            }
            if (dal_1 == 1)
            {
                dal_wynik = "Mężczyzna nie może być nosicielem.";
            }
            if (dal_1 == 2)
            {
                if(dal_2 == 0)
                {
                    dal_wynik = "Córka nosicielka - 100% \nSyn zdrowy - 100%";
                }
                if (dal_2 == 1)
                {
                   dal_wynik = "Córka nosicielka - 50% \nCórka chora - 50% \nSyn zdrowy - 50% \nSyn chory - 50%";
                }
                if(dal_2 == 2)
                {
                    dal_wynik = "Córka chora - 100% \nSyn chory - 100%";
                }
            }
        }
        if (plec_2 == 1)
        {
            dal_wynik = "Nie ma możliwości dziedziczenia.";
        }

    }

    else
    {
        dal_wynik = "Za mało danych";
    };


    wyswietl += "\nDaltonizm: \n" + dal_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}


void MainWindow::rh()
{

    int rh_1 = ui->cechy124->currentIndex();
    int rh_2 = ui->cechy214->currentIndex();
    QString rh_wynik = " ";
    if (rh_1 == 0)
    {
        if (rh_2 == 0)
        {
             rh_wynik = "Czynnik Rh: \nDodatni - 93,75% \nUjemny - 6,25%";

        }
        if (rh_2 == 1)
        {
            rh_wynik = "Czynnik Rh: \nDodatni - 75% \nUjemny - 25%";
        }


    }
    else if (rh_1 == 1)
    {
        if (rh_2 == 0)
        {
            rh_wynik = "Czynnik Rh: \nDodatni - 75% \nUjemny - 25%";
        }
        if (rh_2 == 1)
        {
            rh_wynik = "Czynnik Rh: \nUjemny - 100%";
        }

    }

    else
    {
        rh_wynik = "Za mało danych";
    };


    wyswietl += "\n" + rh_wynik;
    ui->Jeszcze_nie_wiem_co->setText(wyswietl);


}
