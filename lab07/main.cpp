// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze zaimplementowac klasy ComplexNumber i Vector. 
// ComplexNumber jest to para liczb, wypisywana w nawiasie
// okraglym. Vector natomiast jest to uporządkowany zbior trzech
// ComplexNumber. Klasy te obłsugują odpowiednie kowersje między typami.

// Pliku Main.cpp, nie wolno modyfikowac.

#include"Vector.h"
#include"ComplexNumber.h"
#include <iostream>

int main ()
{
  ComplexNumber liczba (1.2, 2.2);
  liczba.Print();
  std::cout<<"\n";
  
  Vector pierwszy;
  pierwszy.SetX(1.1, 2.1).SetY(1.2, 2.2).SetZ(1.3, 2.3);
  pierwszy.Print();
  // zmiana pierwszej wspolrzednej
  pierwszy.X() = ComplexNumber(5.5, 6.6);
  pierwszy.Print();

  double modul_1 = pierwszy.X(); // error: cannot convert ‘ComplexNumber’ to ‘double’ in initialization
  double modul_3 = static_cast<double>(pierwszy.X());



  std::cout << "Modul 1: "<< modul_1 << "\n";
  double modul_2 = ComplexNumber::Abs(pierwszy.X());
  std::cout << "Modul 2: "<< modul_2 << "\n";

  Vector drugi = 1; // konwersja niejawna
  drugi.Print();
}
/* wynik dzialania programu:
(1.2, 2.2)
[(1.1, 2.1), (1.2, 2.2), (1.3, 2.3)]
[(5.5, 6.6), (1.2, 2.2), (1.3, 2.3)]
Moduł 1: 8.59127
Moduł 2: 8.59127
[(1, 1), (1, 1), (1, 1)]
*/
