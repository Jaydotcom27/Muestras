// Muestras.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <algorithm>
#include <string>

using namespace std;
int main()
{


	char arreglo[1000];
	cin >> arreglo;
	char *p = new char[strlen(arreglo)];
	cout << *p;
	cout << p; 
	exit(0);
    return 0;

}

