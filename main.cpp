#include <iostream>
#include <string>

int main() {

   std::string name;
   int age;
   float height;


   std::cout<< "Seu nome: "<<std::endl;
   std::cin>>name;
   std::cout<< "Sua idade: "<<std::endl;
   std::cin>>age;
   std::cout<< "Sua altura: "<<std::endl;
   std::cin>>height;

   std::cout<<" Hello!, Welcome "<<name<<", como voce esta?"<<std::endl;


    return 0;
}