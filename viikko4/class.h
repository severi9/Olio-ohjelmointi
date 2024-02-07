class Asunto {
public:
    Asunto() {
        std::cout << "Asunto luotu" << std::endl;
    }

    ~Asunto() {
        
    }

    int asukasMaara;
    int nelio;

    void maarita(int a, int n) {
        asukasMaara = a;
        nelio = n;
        std::cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << nelio << std::endl;
    }

    double laskeKulutus(double hinta) {
        std::cout << "asunnon kulutus, kun hinta = " << hinta << std::endl;
        return 0.0;
    }
};

class Kerros {
public:
    Kerros() {
        std::cout << "Kerros luotu" << std::endl;
    }

    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

    void maaritaAsunnot() {
        std::cout << "Maaritetaan 4kpl kerroksen asuntoja" << std::endl;
        as1.maarita(2, 100);
        as2.maarita(2, 100);
        as3.maarita(2, 100);
        as4.maarita(2, 100);
    }

    double laskeKulutus(double hinta) {
        std::cout << "Katutason ja perityn kerroksen kulutus  = " << hinta << std::endl;
    };
    int getAsukasMaara() const {
        return as1.asukasMaara + as2.asukasMaara + as3.asukasMaara + as4.asukasMaara;
    }

    int getNelio() const {
        return as1.nelio + as2.nelio + as3.nelio + as4.nelio;
    }
};

class Katutaso : public Kerros {
public:
    Katutaso() {
        std::cout << "Katutaso luotu" << std::endl;
    }

    Asunto as1;
    Asunto as2;

    void maaritaAsunnot() {
        std::cout << "Maaritetaan 2kpl katutason asuntoja" << std::endl;
        as1.maarita(2, 100);
        as2.maarita(2, 100);
    }

    double laskeKulutus(double);
};

class Kerrostalo {
public:
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};
