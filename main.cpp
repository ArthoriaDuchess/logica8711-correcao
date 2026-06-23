#include <iostream>
#include <string>

int main(){
   
   int pilha[10];
   int topo = -1;
   int opcao;

   std::cout<<"===== PILHA COM MENU ====="<<std::endl;

   while(true){
      std::cout<<"1. Empilhar"<<std::endl;
      std::cout<<"2. Desempilhar"<<std::endl;
      std::cout<<"3. Exibir pilha"<<std::endl;
      std::cout<<"4. Sair"<<std::endl;
      std::cout<<"Esolha: "<<std::endl;
      std::cin>>opcao;

      if(opcao == 1){
         if(topo < 9){
            int valor;
            std::cout<<"Digite o valor: ";
            std::cin>>valor;
            topo++;
            pilha[topo];
            std::cout<<"Empilhado"<<std::endl;
         }else{
            std::cout<<"Pilha cheia!"<<std::endl;

         }
      }
      else if(opcao == 2){
         if(topo >= 0){
            std::cout<<"Removido: "<<pilha[topo]<<std::endl;
            topo--;
         }else{
            std::cout<<"Pilha vazia!"<<std::endl;

         }
      }
      else if(opcao == 3){
         if(topo >= 0){
            std::cout<<"Pilha: "<<std::endl;
            for(int i = 0; i <= topo; i++){
               std::cout<<pilha[i]<<" ";
            }
            std::cout<<std::endl;
         }else{
            std::cout<<"Pilha vazia!"<<std::endl;
         }
      }
      else if(opcao ==  4){
         std::cout<<"Saindo. . ."<<std::endl;
         break;
      }
   }
   return 0;
}