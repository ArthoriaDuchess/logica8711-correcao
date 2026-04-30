#include <iostream>
#include <string>

int main() {

    double brlAmout, exchangeRate, usdAmount;
    int choice; //choice: escolha

    std::cout<<"---- Currency Converter: BRL to USD ----"<<std::endl;

    //entrada de taxa de câmbio
    std::cout<<"Enter the current exchange rate (how much is 1 dollar in reais): "<<std::endl;
    std::cin>>exchangeRate;

    //entrada da quantia em reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brlAmout;

    //verificação lógica: garante que o valor informado seja positivo
    if(brlAmout > 0){
        //calculo: divide a montanha em reais pela taxa de câmbio para obter o valor em dólares
        usdAmount = brlAmout / exchangeRate;
        std::cout<<"You will have $"<<usdAmount<<" USD after conversion."<<std::endl;
    }else{
        std::cout<<"Invalid amount! Please enter a positive value."<<std::endl;
    }
    return 0;
}