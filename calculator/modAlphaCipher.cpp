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
  
        if (options=="-s" or options=="--sin"){
        m[0]=asin(ish);
        m[1]=(asin(ish)*180.0)/M_PI;
        return m;}
                
                
            else if (options=="-c" or options=="--cos"){
        m[0]=acos(ish);
        m[1]=(acos(ish)*180.0)/M_PI;
        return m;}
        
                
        }
        
string Calc::Help(){
    if (options=="-h"){
    help="Справка по использованию:\n -c или --cos  вычисление косинуса\n -s или --sin вычисление синуса\n пример:\n-с значение;";
return help;}}