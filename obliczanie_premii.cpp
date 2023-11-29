float obliczaniePremii(float wartoscSprzedazy) {
    float wysokoscPremii;

    if (wartoscSprzedazy < 10000) {
        wysokoscPremii = 0.10; // 10%
    } else if (wartoscSprzedazy >= 10000 && wartoscSprzedazy <= 14999) {
        wysokoscPremii = 0.12; // 12%
    } else if (wartoscSprzedazy >= 15000 && wartoscSprzedazy <= 17999) {
        wysokoscPremii = 0.14; // 14%
    } else if (wartoscSprzedazy >= 18000 && wartoscSprzedazy <= 21999) {
        wysokoscPremii = 0.16; // 16%
    } else {
        wysokoscPremii = 0.18; // 18%
    }

    return wysokoscPremii;
}
