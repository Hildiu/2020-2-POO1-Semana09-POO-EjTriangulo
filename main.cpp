//-- Dato de Entrada: l1,l2,l3 (double)
//-- Dato de Salida : area, perimetro
//-------------------------------------

#include "CTriangulo.h"

int main()
{
  tnumero lado1, lado2, lado3;

  do{
    cout << "Lado 1 : "; cin >> lado1;
    cout << "Lado 2 : "; cin >> lado2;
    cout << "Lado 3 : "; cin >> lado3;
  }while( ! ((lado1 + lado2 > lado3) and ( lado2 + lado3 > lado1) and (lado3 + lado1 >lado2)) );

  CTriangulo T1(lado1,lado2,lado3);
  cout << "El Perimetro es : " << T1.perimetro() << "\n";
  cout << "El Area      es : " << T1.area() << "\n";

  cout << "\nAhora trabajamos con un objeto dinamico\n";
  //--- Ahora vamos a crear un objeto de manera dinamica
  CTriangulo *pT= nullptr;

  pT = new CTriangulo(30,40,50);
  cout << "Area = " << pT->area() << "\n";
  cout << "Perimetro = " << (*pT).perimetro() << "\n";
  delete pT;
  pT = nullptr;
  return 0;
}
