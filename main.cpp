#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char cero, uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve;
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
string suma_r = "+";
string resta_r = "-";
string multi_r = "*";
string div_r = "/"; 
int cont = 1;
int primero = 0, segundo = 0, resultado = 0;
string codigo;
string primer_numero;
string segundo_numero;
 
int main() {
  ifstream datos_entrada;
  string nombre_datos_entrada; //variable para que usuario elija el nombre del archivo
  string nombre_datos_salida;
  ofstream archivosalida;
  string datos;
  cout << "Por favor escriba el nombre del archivo que desea abrir: " <<endl;
  cin >> nombre_datos_entrada;
  cout << "Por favor escriba el nombre del archivo de salida: " << endl;
  cin >> nombre_datos_salida;
  datos_entrada.open(nombre_datos_entrada);//abre archivo escrito
  archivosalida.open(nombre_datos_salida); // abre archivo salida
  while(cont == 1 && (getline(datos_entrada, codigo))){   //convierte la primera linea en la marca de referencia
    cont ++;
  }
    char cero = codigo[0];
    char uno = codigo[2];
    char dos = codigo[4];
    char tres = codigo[6];
    char cuatro = codigo[8];
    char cinco = codigo[10];      
    char seis = codigo[12];
    char siete = codigo[14];
    char ocho = codigo[16];
    char nueve = codigo[18];
    char suma = codigo[20];
    char resta = codigo[22];
    char multi = codigo [24];
    char div = codigo [26];

  while(getline(datos_entrada, datos))
  {
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
      if(datos[i] == suma ){
        datos.replace(i,1, suma_r);
      }
      if(datos[i] == resta ){
        datos.replace(i,1, resta_r);
      }
      if(datos[i] == multi ){
        datos.replace(i,1,multi_r);
      }
      if(datos[i] == div){
        datos.replace(i,1, div_r);
      }
    }
  for(int r = 0; r < (int)datos.length(); r++ ){
    if(datos[r] == '+'){
      primer_numero = datos.substr(0,r);
      segundo_numero = datos.substr(r+2);
      primero = stoi(primer_numero);
      segundo = stoi(segundo_numero);
      resultado = primero + segundo;
      cout << "(" << primero << ")" << " + " <<"(" << segundo << ") = " << resultado << endl;
      archivosalida << "(" << primero << ")" << " - " <<"(" << segundo << ") = " << resultado << endl; 
    }
    if(datos[r] == '-'){
      primer_numero = datos.substr(0,r);
      segundo_numero = datos.substr(r+2);
      primero = stoi(primer_numero);
      segundo = stoi(segundo_numero);
      resultado = primero - segundo;
      cout << "(" << primero << ")" << " - " <<"(" << segundo << ") = " << resultado << endl; 
      archivosalida << "(" << primero << ")" << " - " <<"(" << segundo << ") = " << resultado << endl;
    }
    if(datos[r] == '/'){
      primer_numero = datos.substr(0,r);
      segundo_numero = datos.substr(r+2);
      primero = stoi(primer_numero);
      segundo = stoi(segundo_numero);
      resultado = primero / segundo;
      cout << "(" << primero << ")" << " / " <<"(" << segundo << ") = " << resultado << endl; 
      archivosalida << "(" << primero << ")" << " / " <<"(" << segundo << ") = " << resultado << endl;
    }
    if(datos[r] == '*'){
      primer_numero = datos.substr(0,r);
      segundo_numero = datos.substr(r+2);
      primero = stoi(primer_numero);
      segundo = stoi(segundo_numero);
      resultado = primero * segundo;
      cout << "(" << primero << ")" << " * " <<"(" << segundo << ") = " << resultado << endl; 
      archivosalida << "(" << primero << ")" << " * " <<"(" << segundo << ") = " << resultado << endl;
    }
  }
  //cout << datos << endl;
  }
  archivosalida.close();
  return 0;
}