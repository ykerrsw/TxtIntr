#include <iostream>
#include <string>
#include <string.h>
#include <cmath>
#include <stdexcept>
#include "header.h"
using namespace std;



int main(int argc, char* argv[])
//int main()
{ 
 if (argc==3){
    string param1=argv[1];//флаг
   string param2=argv[2];//значение
   
   //string param2="0.22";//значение
   //string param1="-s";//флаг
   
Calc r(stod(param2),param1);

try{
double* result = r.Res(); //получили указатель на массив
cout<<"в радианах:\n"<<result[0]<<"\n"<<"в градусах:\n"<<result[1];}
 catch(const invalid_argument& e){
 cerr << "Ошибка" << e.what() << endl;
 r.Help();}}
 
    else{
    Calc r;
cout<<r.Help();
}}
    
    