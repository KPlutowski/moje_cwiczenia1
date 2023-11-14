// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac klasy Point oraz PointSmartPtr
// Klasa przechowuje współrzędne x i y, oraz posiada operator postinkrementracji,
// dodatkowo, isteniej również przeciążenie operatora << na standardowe wyjście.
// Klasa PointSmartPtr reprezentuje tzw. zwinny wskaźnik dla klasy Point.
// Jej konstrukcja opiera się na przechowywaniu zasobów:
// Point*, oraz int*. Zmienna int jest inkrementowana jeśli powstają kolejne kopie 
// obiektu PointSmartPtr, oraz deikrementowana jeśli kolejna instancja tej klasy jest
// niszczona. Jeśli ten licznik wynosi 0, tymsamym ginie ostatni obiekt tej klasy,
// zasotby Point*, oraz int* są również niszczone.

// Prosze zadbac o dobre zarzadzanie pamiecia.
// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod), oraz powinna być spełniona zasada
// D.R.Y. - Don't Repeat Yourself.

#include <iostream>
#include "PointSmartPtr.h"

int main() {
  Point p;
  std::cout << "main scope..." << p << std::endl;
  PointSmartPtr p_sptr1;
  {
    PointSmartPtr p_sptr2(new Point);
    std::cout << "internal scope... " << (*p_sptr2)++ << std::endl;
    p_sptr1 = p_sptr2;
    std::cout << "end of the internal scope..." << (*p_sptr1) << std::endl;
  }
  std::cout << "back again in the main scope..." << std::endl;
}
/* wynik:
main scope...[0,0]
internal scope... [0,0]
end of the internal scope...[1,1]
back again in the main scope...
*/
