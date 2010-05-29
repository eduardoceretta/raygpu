/**********************************************************\
            Nome:Eduardo Ceretta Dalla Favera
                  Matricula:2610166
\**********************************************************/
/**********************************************************\
                  Arquivo DirectionalLight
   Contem a implementa�ao dos metodos da classe DirectionalLight.cpp
\**********************************************************/

#include <iostream>
#include <GL/glut.h>

#include "Light/DirectionalLight.h"


using namespace std;

///////////////////
//~ DirectionalLight
//////////////////
DirectionalLight :: DirectionalLight():Light()
{
   pos[3] = 0.0;
}

DirectionalLight :: ~DirectionalLight()
{
//      cout << "DESTRUCTOR "<<_class << " " << _name<< endl;
//   cout << "END DESTRUCTOR "<<_class << " " << _name<< endl;
}


void DirectionalLight :: render()
{
   if(turnedOn)
   {
      glEnable(GL_LIGHTING);
      glEnable(myLightNum);
   }
   else glDisable(myLightNum);
}

void DirectionalLight :: configure()
{
   Light :: configure();
}
