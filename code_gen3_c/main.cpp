#include "Koszyk.h"
//
// Created by kajet on 30.03.2026.
//
int main() {
    Koszyk* koszyk = new Koszyk(1);
    PrzelicznikCeny* przelicznik = new PrzelicznikCeny(3.74);
    koszyk->dodajPrzedmiot(new Pozycja("Chleb", 0.5, 1, przelicznik));
    koszyk->dodajPrzedmiot(new Pozycja("Maslo", 0.75, 2, przelicznik));
    koszyk->dodajPrzedmiot(new Pozycja("Ser", 1.2, 1, przelicznik));

    koszyk->wyswietlPodsumowanie();
    delete koszyk;
}