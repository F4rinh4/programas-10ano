/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
int main()  {
    int Kmi,Kmf,Gasolina,resultado;
    std::cout<< "Kilómetros íniciais";
    std::cin>> Kmi;
    std::cout<< "Kilómetros finais";
    std::cin>> Kmf;
    std::cout<< "Gasolina";
    std::cin>> Gasolina;
    std::cin>> resultado ==(100*Gasolina)/(Kmf-Kmi);
    std::out<<"O veículo gastoa" resultado "listro gastos";
}