#include <lol.hpp>

Lol myLol;                // Creacion del objeto myLol que controlará la shield                          

void setup() {
}

void loop() {
  for(int j=0 ; j<9 ; j++)                // Recorriendo filas
  {
    for(int i=0 ; i<14 ; i++)             // Recorriendo columnas
    {
       myLol.clear();                     // Borrar pantalla
       myLol.ledOn(i,j);                  // Prender led en posicion (i,j)
       delay(50);                         // pausa de 50 ms
    }
  }
}
