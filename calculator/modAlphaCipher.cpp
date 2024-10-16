#include <iostream> 
#include <string> 
#include <cmath> 
#include <sstream> 
#include "header.h" 
using namespace std; 
 
Calc::Calc(){ 
    ish=0.0; 
    options="-h";} 
     
Calc::Calc(double arg, string op){ 
        ish=arg; 
        options=op;} 
 
double* Calc::Res(){ 
       stringstream ss; 
       string str; 
   
        if (options=="-s" or options=="--asin"){ 
        m[0]=asin(ish); 
        m[1]=(asin(ish)*180.0)/M_PI; 
        return m;} 
                 
                 
            else if (options=="-c" or options=="--acos"){ 
        m[0]=acos(ish); 
        m[1]=(acos(ish)*180.0)/M_PI; 
        return m;} 
 
         else{return 0;}        
        } 
         
//string Calc::Help(){ 
    //help="Справка по использованию:\n -c или --cos  вычисление арккосинуса\n -s или --sin вычисление арксинуса\n пример:\n-с значение;"; 
//return help; 
//}
