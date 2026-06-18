#include <iostream>
#include <string>

struct Jogador{
   std::string nome;
   int CartaoVermelho;
   int CartaoAmarelo;
};

int main(){
   std::cout<<"===== REGISTRO DE CARTÕES ====="<<std::endl;
   std::cout<<std::endl;

   Jogador jogador;

   std::cout<<"Nome do jogador: ";
   std::cin>>jogador.nome;

   std::cout<<"Cartões amarelos: "<<std::endl;
   std::cin>>jogador.CartaoAmarelo;

   std::cout<<"Cartões vermelhos: "<<std::endl;
   std::cin>>jogador.CartaoVermelho;

   std::cout<<std::endl;
   std::cout<<"===== SITUAÇÃO ====="<<std::endl;
   
}