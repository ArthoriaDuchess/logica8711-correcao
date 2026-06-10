#include <iostream>
#include <string>
#include <windows.h>

struct Produto{
    int id;
    std::string descricao;
    float preco;
    bool concluida;
};

Produto produtos[50];
int totalProdutos = 0;

void adicionar(){
    std::cout<<"\n ---- adicionar produtos ----"<<std::endl;

    std::cout<<"ID: ";
    std::cin>>produtos[totalProdutos].id;

    std::cin.ignore();
    std::cout<<"Precificação: ";
    std::cin>>produtos[totalProdutos].preco;

    std::cin.ignore();
    std::cout<<"Descrição: ";
    std::getline(std::cin, produtos[totalProdutos].descricao);

    produtos[totalProdutos].concluida = false;

    totalProdutos++;
    std::cout<<"Produto adicionado!"<<std::endl;
}

void listar(){
    if(totalProdutos == 0){
        std::cout<<"\n Nenhum produto!"<<std::endl;
        return;
    }
    std::cout<<"\n--- Produtos ---"<<std::endl;
    for(int i = 0; i < totalProdutos; i++){
        std::string status = produtos[i].concluida ? "S" : "N";
        std::cout<<"["<<status<<"]"<<produtos[i].id<<" - "
                    <<produtos[i].descricao<<std::endl;
    }
}
 void marcarProduto(){
    int idBuscado;

    std::cout<<"\n ID do produto: ";
    std::cin>>idBuscado;

    for(int i = 0; i < totalProdutos; i++){
        if(produtos[i].id == idBuscado){
            produtos[i].concluida = true;
            std::cout<<"Marcado com Sucesso!"<<std::endl;
            return;
        }
        std::cout<<"Produto não encontrado!"<<std::endl;
    }
 }

void deletarProduto(){
    if(totalProdutos == 0){
        std::cout<<"Nenhum produto cadastrado!"<<std::endl;
        return;
    }
    int idBuscado;
    std::cout<<"\n Digite o ID do produto para deletar: ";
    std::cin>>idBuscado;

    for(int i = 0; i < totalProdutos; i++){
        if(produtos[i].id == idBuscado){
            for(int j = i; j < totalProdutos - 1; j++){
                produtos [j] = produtos[j + i];
            }
            totalProdutos--;
            std::cout<<"Produto deletado com sucesso!"<<std::endl;
            return;
            }
        }
    }


 void menu(){
    std::cout<<"\n === Check List Produtos === "<<std::endl;
    std::cout<<"1. Adicionar produto"<<std::endl;
    std::cout<<"2. Lista de produtos"<<std::endl;
    std::cout<<"3. Marcar produto"<<std::endl;
    std::cout<<"4. Deletar produto"<<std::endl;
    std::cout<<"5. Sair"<<std::endl;
    std::cout<<"Escolha: "<<std::endl;
 }

int main(){
    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos
    
    int opcao;

    while(true){
        menu();
        std::cin>>opcao;

        switch(opcao){
            case 1:
                adicionar();
                break;
            case 2:
                listar();
                break;
            case 3:
                marcarProduto();
                break;
            case 4:
                deletarProduto();
                break;
            case 5:
                std::cout<<"૮₍˶Ó﹏Ò ⑅₎ა"<<std::endl;
                exit(0);
            default:

                std::cout<<"Opção inválida!"<<std::endl;
        }
    }
    return 0;
}
