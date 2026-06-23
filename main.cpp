#include <iostream>
#include <string>

int main(){

   int numeros[] = {1,2,3,2,4,5,3,6};
   int tamanho = 10;

   std::cout<<" ===== PARES E IMPARES ====="<<std::endl;
   std::cout<<std::endl;

   std::cout<<"Pares: ";
   for(int i = 0; i < tamanho; i++){
      if(numeros[i] % 2 == 0){
         std::cout<<numeros[i]<<" ";
      }
   }
   std::cout<<std::endl;
   std::cout<<"Impares: ";
   for(int i = 0; i < tamanho; i++){
      if(numeros[i] % 2 != 0){
         std::cout<<numeros[i]<<" ";
      }
   }
   return 0;
}