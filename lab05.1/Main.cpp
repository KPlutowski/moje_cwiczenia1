// Ostateczny program powinien byc przyjazny dla programisty (miec czytelny 
// i dobrze napisany kod, bez powielania kodu - D.R.Y)
//
// Prosze napisac klasę MapPoint, ktora reprezentuje punkt na
// mapie skladajacy sie z nazwy, dlugosci (longitude) i szerokosci
// (latitude) geograficznej bez oznaczania polkol.

// Metoda mp.distanceVal(dest) zwraca moduł z punktu tworzonego 
// przez różnicę położeń z podanych punktów czyli x_new = dest.x - mp.x, itd.

#include "MapPoint.h"

int main() {
  using std::cout;


  fore
  cout<<"========== KRK & NYC\n";
  MapPoint krk(19.9383,50.0613);
  MapPoint nyc;
  krk.print();
  nyc.print();
  nyc.set_coordinates(40.7127,-74.0059);
  nyc.print();

  cout<<"========== PORTO & Null Island \n";
  MapPoint porto(41.1621, -8.6219);
  const MapPoint nullIsland;
  porto.print();
  nullIsland.print();
  
  cout<<"========== DISTANCE VALUE \n";
  cout<<"PRT-Null: "<<nullIsland.distanceVal(porto) << std::endl;
  cout<<"PRT-KRK: "<<krk.distanceVal(&porto) << std::endl;
  return 0;

  
}
/** Wynik dzialania programu:
========== KRK & NYC
Point: (19.9383, 50.0613)
Point: (0, 0)
Point: (40.7127, -74.0059)
========== PORTO & Null Island 
Point: (41.1621, -8.6219)
Point: (0, 0)
========== DISTANCE VALUE 
PRT-Null: 42.0554
PRT-KRK: 62.403
*/