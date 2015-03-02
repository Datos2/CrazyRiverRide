
#include "ObjetoMovil.h"
#include "Constantes.h"
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace Constantes;


/*
 * 
 */
int main() {
    int h=Constantes::vidaInic;
    ObjetoMovil a (h,3);
    a.Mover(0);
    printf("%d",a.getX());
    return 0;
}

