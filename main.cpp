#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char cero = 'B';
char uno = 'y';
char dos = '/';
char tres = '8';
char cuatro = 'T';
char cinco = '&';
char seis = 'Q';
char siete = 'E';
char ocho = 'P';
char nueve = 'F';
string cero_r = "0";
string uno_r = "1";
string dos_r = "2";
string tres_r = "3";
string cuatro_r = "4";
string cinco_r = "5";
string seis_r = "6";
string siete_r = "7";
string ocho_r = "8";
string nueve_r = "9"; 
 
int main() {
  ifstream datos_entrada;
  string nombre_datos_entrada; //variable para que usuario elija el nombre del archivo
  string datos;
  cout << "Por favor escriba el nombre del archivo que desea abrir: " <<endl;
  cin >> nombre_datos_entrada;
  datos_entrada.open(nombre_datos_entrada); //abre archivo escrito
  while(getline(datos_entrada, datos)){  
    for(int i=0; i < (int)datos.length(); i++) {
      if(datos[i] == cero ){
      datos.replace(i,1,cero_r);
      }
      if(datos[i] == uno ){
        datos.replace(i,1,uno_r);
      }
      if(datos[i] == dos ){
        datos.replace(i,1,dos_r);
      }
      if(datos[i] == tres){
        datos.replace(i,1, tres_r );
      }
      if(datos[i] == cuatro ){
        datos.replace(i,1, cuatro_r );
      }
      if(datos[i] == cinco ){
        datos.replace(i,1,cinco_r);
      }
      if(datos[i] == seis){
        datos.replace(i,1, seis_r );
      }
      if(datos[i] == siete ){
        datos.replace(i,1, siete_r);
      }
      if(datos[i] == ocho){
        datos.replace(i,1, ocho_r );
      }
      if(datos[i] == nueve ){
        datos.replace(i,1, nueve_r);
      }

    }
    cout << datos << endl; 
  }
  return 0;
}