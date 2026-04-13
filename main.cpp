#include <iostream>

int main(){
    
    int opcaoPagamento;
    int qntParafuso;
    float ValorParafuso = 1.40;
    float ValorTotalParafuso;
    float Desconto;

    std::cout<<"Digite a quantidade de parafusos desejada: "<<std::endl;
    std::cin>>qntParafuso;

    ValorTotalParafuso = qntParafuso * ValorParafuso;

    std::cout<<"Qual a forma de pagamento: "<<std::endl;
    std::cout<<"--- 1 - Pix"<<std::endl;
    std::cout<<"--- 2 - Dinheiro"<<std::endl;
    std::cout<<"--- 3 - Cartao"<<std::endl;
    std::cin>>opcaoPagamento;

    if(opcaoPagamento == 1){
        std::cout<<"Sua compra ficou no valor total de R$: "<<ValorTotalParafuso<<std::endl;
    }else if(opcaoPagamento == 2){
        Desconto = ValorTotalParafuso * 0.90;
        std::cout<<"Sua compra ficou no valor total de R$: "<<Desconto<<std::endl;
    }else if(opcaoPagamento == 3){
        std::cout<<"Sua compra ficou no valor total de R$: "<<ValorTotalParafuso<<std::endl;
    }else{
        std::cout<<"Forma de pagamento invalida, tente outra forma!!"<<std::endl;
    }

    return 0;
}