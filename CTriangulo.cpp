//
// Created by MARIA HILDA BERMEJO RIOS on 10/29/20.
//

#include "CTriangulo.h"


tnumero CTriangulo::semiPerimetro()
{//---------------------------------
 return (l1 + l2 + l3)/2;
}

tnumero CTriangulo::area()
{//-----------------------
  tnumero sp = semiPerimetro();
  return sqrt( sp*(sp-l1)*(sp-l2)*(sp-l3) );
}

tnumero CTriangulo::perimetro()
{//----------------------------
  return (l1+l2+l3);
}