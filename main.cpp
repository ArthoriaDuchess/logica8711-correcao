#include <iostream>

int main(){

    int idade;
    
    std::cout<<" Digite a sua idade: "<<std::endl;
        std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade invalida!"<<std::endl;

    }else if(idade <= 2){
        std::cout<<"Você e um bebe!"<<std::endl;

    }else if(idade <= 12){
        std::cout<<"Você e uma criança ainda, nao deveria estar aqui!!"<<std::endl;

    }else if(idade <= 14){
        std::cout<<"Você ainda vai chegar nessa fase!"<<std::endl;

    }else if (idade <= 18){
        std::cout<<"Você ainda nao esta na maioriedade!"<<std::endl;

    }else if (idade <= 60){
        std::cout<<"Voce ja e maior de idade!"<<std::endl;   
    }else{
        std::cout<<"Voce e um(a) senhor(a)!"<<std::endl;
    }

    return 0;

}