#include <iostream>
#include <string>


int main(){

    int opcao;

    while(true){

    std::cout<<"====== MINI MENUZINHO ======"<<std::endl;
    std::cout<<"1 - Iniciar o sistema."<<std::endl;
    std::cout<<"2 - Configuracoes."<<std::endl;
    std::cout<<"3 - Sair."<<std::endl;
    std::cout<<"Digite a opção: "<<std::endl;
    std::cin>>opcao;

    if(opcao == 3){
        std::cout<<"Finalizando o processo. . ."<<std::endl;
        break;
    }

    switch(opcao){
        case 1:
            std::cout<<"Iniciando o sistema."<<std::endl;
            break;
        
        case 2:
            std::cout<<"Configurações."<<std::endl;
            break;

        default:
            std::cout<<"Opção invalida tente novamente. . .\n"<<std::endl;
        }
    }
    return 0;
}