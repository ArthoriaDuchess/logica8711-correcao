#include <iostream>
#include <string>

int main(){
   
   int  jogos;

   std::cout<<"===== Calculador de publico ====="<<std::endl;
   std::cout<<std::endl;

   std::cout<<"Quantos jogos ?";
   std::cin>>jogos;

   int somaPublico = 0;

   for(int i = 1; i <= jogos; i++){
      int publico;
      std::cout<<"Público jogo "<<i<<": ";
      std::cin>>publico;
      somaPublico += publico;
   }
   int media = somaPublico / jogos;

   std::cout<<std::endl;
   std::cout<<"====== RESULTADO ======"<<std::endl;
   std::cout<<"Média de público: "<<media<<" pessoas"<<std::endl;
   std::cout<<"Total de público: "<<somaPublico<<" pessoas"<<std::endl;
   
 return 0;
}