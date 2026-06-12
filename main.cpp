#include <iostream>
#include <string>
#include <cctype>

int main(){

   std::string palavra = "programacao";
   std::string advinhada = "";
   int erros = 0;
   int maxErros = 6;
   bool ganhou = false;

   for(int i = 0; i < palavra.length(); i++){
      advinhada += "_";
   }
   std::cout<<"===== JOGO DA FORCA ====="<<std::endl;
   std::cout<<"Advinhe a palavra!"<<std::endl;
   std::cout<<std::endl;

   while(erros < maxErros && !ganhou){
      std::cout<<"Palavra: ";
      for(int i = 0; i < advinhada.length(); i++){
         std::cout<<advinhada[i]<<" ";
      }
      std::cout<<std::endl;
      std::cout<<"Erros: "<<erros<<"/"<<maxErros<<std::endl;
      std::cout<<std::endl;

      char letra;
      std::cout<<"Digite uma letra: ";
      std::cin>>letra;
      letra = std::tolower(letra);

      std::cout<<std::endl;

      bool encontrou = false;

      for(int i = 0; i < palavra.length(); i++){
         if(palavra[i] == letra){
            advinhada[i] = letra;
            encontrou = true;
         }
      }
      if(!encontrou){
         std::cout<<"Letra errada!"<<std::endl;
         erros++;
      }else{
         std::cout<<"Letra encontrada!"<<std::endl;
      }
      std::cout<<std::endl;
      
      if(advinhada == palavra){
         ganhou = true;
      }
   }
   std::cout<<"=========="<<std::endl;
   if(ganhou){
      std::cout<<"Parabéns! voce venceu!"<<std::endl;
      std::cout<<"A palavra era: "<<palavra<<std::endl;
   }else{
      std::cout<<"Game Over! Você perdeu!"<<std::endl;
      std::cout<<"A palavra era: "<<palavra<<std::endl;
   }
   return 0;
}
