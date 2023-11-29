#include <iostream>

float obliczanieWynagrodzenia(float wartoscSprzedazy, float wartoscZaliczki)
{
    float wysokoscPremii = obliczaniePremii(wartoscSprzedazy);
    float wynagrodzenie = wartoscSprzedazy * wysokoscPremii - wartoscZaliczki;
    if (wynagrodzenie < 0)
    {
        std::cout << "Pracownik musi zwrócić pieniądze firmie." << std::endl;
    }

    return wynagrodzenie;
}
