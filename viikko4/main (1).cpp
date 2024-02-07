#include <iostream>
#include "class.h"

int main() {
    Katutaso kt;
    Kerros kr;
    kt.maaritaAsunnot();
    kr.maaritaAsunnot();
    kr.maaritaAsunnot();
    kr.maaritaAsunnot();
    kr.laskeKulutus(kr.getAsukasMaara() * kr.getNelio());
    return 0;
}