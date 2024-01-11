// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Ostateczny program powinien byc przyjazny dla programisty
// (miec czytelny i dobrze napisany kod, bez powielania kodu - D.R.Y)
//
// Celem zadania jest napisanie klas Point3D oraz APointCloud, VPointCloud które odpowiednio:
// Point3D przechowuje informacje o współrzędnych x,y,z za pomocą std::array
// APointCloud oraz VPointCloud jest agregatami na obiekty Point3D, z tą różnicą że:
// APointCloud wykorzystuje dynamicznie alokowaną tablicę na obiekty Point3D
// VPointCloud wykorzystuje std::vector na obiekty Point3D
// 
// Pozostałe funkcjonalności zostały opisane w ramach funkcji main()
// UWAGA: W zadaniu należy również wykorzystać przyjaźń klas!

#include "PointCloud.h" // tutaj są def zarówno APointCloud jak i VPointCloud

int main() {

  // Point3D myPoint3D(1.2, 3.4, 5.6); // tak się nie powinno kompilować
  const Point3D myPoint3D({1.2, 3.4, 5.6});  // ale tak, już OK!
  myPoint3D.displayCoordinates();
  std::cout << std::endl;

  APointCloud myAPointCloud; // wersja z tablicą dynamicznie alokowaną
  // Dodaj kilka punktów do chmury punktów
  myAPointCloud.addPoint(Point3D({1.0, 2.0, 3.0}));
  myAPointCloud.addPoint(Point3D({3.0, 2.0, 1.0}));
  myAPointCloud.displayPoints();

  // Oblicz i zwróć Point3D będący środkiem geometrycznym chmury punktów
  // następnie wyświetl jego współrzędne
  std::cout << "srodek geometryczny [APC]: ";
  myAPointCloud.geoCentre().displayCoordinates();

  VPointCloud myVPointCloud; // wersja z std::vector
  myVPointCloud.addPoint(Point3D({2.0, 3.0, 4.0}));
  myVPointCloud.addPoint(Point3D({2.0, 1.0, 8.0}));
  myVPointCloud.addPoint(Point3D({7.0, 7.0, -1.0}));
  myVPointCloud.add(myVPointCloud);
  //myAPointCloud.add(myAPointCloud); //THIS IS EXTRA 
  myVPointCloud.add(myAPointCloud);
  std::cout << "\nLiczba punktow [VPC]: " << myVPointCloud.count();

  std::cout << "\nsrodek geometryczny [VPC]: ";
  myVPointCloud.geoCentre().displayCoordinates();
  std::cout << std::endl;
  return 0;
}

/* wynik dzialania
(1.2, 3.4, 5.6)
Chmura punktów [APC]:
(1, 2, 3)
(3, 2, 1)
Środek geometryczny [APC]: (2, 2, 2)
Liczba punktow [VPC]: 8
Środek geometryczny [VPC]: (3.25, 3.25, 3.25)
 */
