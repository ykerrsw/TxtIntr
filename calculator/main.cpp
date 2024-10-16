#include <iostream> 
#include <string> 
#include <string.h> 
#include <cmath> 
#include <stdexcept> 
#include "header.h" 
using namespace std; 
//--------------------------------------------------------------------------------------------------------- 
string Helpa(){ 
    string help="Справка по использованию:\n -c или --acos  вычисление косинуса\n -s или --asin вычисление синуса\n пример:\n-с значение\n"; 
return help; 
} 
//---------------------------------------------------------------------------------------------------------- 
bool pr2(string param){ 
    long unsigned int k=0; 
    string alf="1234567890.-+"; 
    for (auto i: param){ 
        for (auto j: alf){ 
            if (i==j){k++;} 
            }} 
    if (k==param.length()){ 
        return true;} 
    else {return false;} 
    } 
//----------------------------------------------------------------------------------------------------------- 
bool pr1(string param){ 
    long unsigned int k=0; 
    string alf="1234567890.+"; 
    for (auto i: param){ 
        for (auto j: alf){ 
            if (i==j){k++;} 
            }} 
    if (k==0){ 
        return true;} 
    else {return false;} 
    } 
//----------------------------------------------------------------------------------------------------------- 
     
int main(int argc, char* argv[]) 
//int main() 
{ string alf="1234567890."; 
 if (argc==3){ 
    string param1=argv[1];//флагG 
   string param2=argv[2];//значение 
    
   //string param2="0.22";//значение 
   //string param1="-s";//флаг 
if (pr2(param2) and pr1(param1) and (param1=="-c" or param1=="-s" or param1=="--asin" or param1=="--acos")){ 
    Calc r(stod(param2),param1); 
    double* result = r.Res(); //получили указатель на массив 
    cout<<"в радианах:\n"<<result[0]<<"\n"<<"в градусах:\n"<<result[1];} 
else {cout<<"Первый параметр должен быть флагом, а второй - числом от -1 до 1."<<endl<<Helpa();} 
   } 
 
else { 
cout<<Helpa();}}
