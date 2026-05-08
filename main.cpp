#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

void exibirModalidade(std::string exibirModalidade){
    //exibição da modalidade

    std::cout<<"\n=========== SENAC NH - MATRICULAS =========="<<std::endl;
    std::cout<<"1 - Cursos Presenciais"<<std::endl;
    std::cout<<"2 - Cursos EAD"<<std::endl;
    std::cout<<"3 - Idiomas (Libras)"<<std::endl;
    std::cout<<"0 - Sair do sistema"<<std::endl;
    std::cout<<"Selecione a modalidade do curso"<<std::endl;
}

void cadastroAluno(std::string cadastroAluno){

    //cadastro aluno

    std::string cpfAluno, rgAluno, cepAluno;
    std::string nomeAluno, emailAluno, contatoAluno, dataNascimentoAluno;
    std::string enderecoAluno, bairroAluno,cidadeAluno;

    std::cout<<"\n======== Cadastro do ========"<<cadastroAluno<<"\n";

    std::cout<<"Informe o nome do aluno: ";
    getline(std::cin, nomeAluno);
    std::cout<<"Insira o cpf do aluno: ";
    getline(std::cin, cpfAluno);
    std::cout<<"Insira o rg do Aluno: ";
    getline(std::cin, rgAluno);
    std::cout<<"Insira o cep do aluno: ";
    getline(std::cin, cepAluno);
    std::cout<<"Informe o email do aluno: ";
    getline(std::cin, emailAluno);
    std::cout<<"Informe o número de contato do aluno: ";
    getline(std::cin, contatoAluno);
    std::cout<<"Informe a data de nascimento do aluno: ";
    getline(std::cin, dataNascimentoAluno);
    std::cout<<"Insira o endereço do aluno: ";
    getline(std::cin, enderecoAluno);
    std::cout<<"Informe o bairro do aluno: ";
    getline(std::cin, bairroAluno);
    std::cout<<"Informe a cidade do aluno: ";
    getline(std::cin, cidadeAluno);

    //função para skipar o cadastro do responsavel ou ir para o cadastro caso seja aluno e responsavel
    int opcao;

    std::cout<<"\n Seria o proprio aluno ou o responsavel ? 1 SIM / 0 NÃO: ";
    std::cin>>opcao;
    std::cin.ignore();

    if (opcao == 1){
        std::cout<<"\n O aluno será o proprio resposável\n ";

        std::string nomeResponsavel = nomeAluno;
        std::string cpfResponsavel = cpfAluno;
        std::string rgResponsavel = rgAluno;
        std::string cepResponsavel = cepAluno;
        std::string emailResponsavel = emailAluno;
        std::string contatoResponsavel = contatoAluno;
        std::string dataNascimentoResponsavel = dataNascimentoAluno;
        std::string enderecoResponsavel = enderecoAluno;
        std::string bairroResponsavel = bairroAluno;
        std::string cidadeResponsavel = cidadeAluno;

        std::cout<<"\n Responsavel Cadastrado automaticamente\n ";

    }else{

        std::cout<<"\n Indo para o cadastro do responsavel...\n ";

    }

    std::cout<<"\n Finalizado o Cadastro do Aluno "<<"\n";

    //apresentação do aluno

    std::cout<<"Nome aluno: "<<nomeAluno<<std::endl;
    std::cout<<"CPF aluno: "<<cpfAluno<<std::endl;
    std::cout<<"RG aluno: "<<rgAluno<<std::endl;
    std::cout<<"CEP aluno: "<<cepAluno<<std::endl;
    std::cout<<"Email aluno: "<<emailAluno<<std::endl;
    std::cout<<"Contato aluno: "<<contatoAluno<<std::endl;
    std::cout<<"Data de nascimento aluno: "<<dataNascimentoAluno<<std::endl;
    std::cout<<"Endereço aluno: "<<enderecoAluno<<std::endl;
    std::cout<<"Bairro aluno: "<<bairroAluno<<std::endl;
    std::cout<<"Cidade aluno: "<<cidadeAluno<<std::endl;
    
}

void cadastroResponsavel(std::string cadastroResponsavel){

    //cadastro responsavel

    std::string cpfResponsavel, rgResponsavel, cepResponsavel;
    std::string nomeResponsavel, emailResponsavel, contatoResponsavel, dataNascimentoResponsavel;
    std::string enderecoResposavel, bairroResponsavel, cidadeResponsavel;

    std::cout<<"\n======== Cadastro do ========"<<cadastroResponsavel<<"\n";

    std::cout<<"Informe o nome do responsavel: ";
    getline(std::cin, nomeResponsavel);
    std::cout<<"Insira o cpf do responsavel: ";
    getline(std::cin, cpfResponsavel);
    std::cout<<"Insira o rg do responsavel: ";
    getline(std::cin, rgResponsavel);
    std::cout<<"Insira o cep do resposavel: ";
    getline(std::cin, cepResponsavel);
    std::cout<<"Informe o email do responsavel: ";
    getline(std::cin, emailResponsavel);
    std::cout<<"Informe o número de contato do responsavel: ";
    getline(std::cin, contatoResponsavel);
    std::cout<<"Informe a data de nascimento do responsavel: ";
    getline(std::cin, dataNascimentoResponsavel);
    std::cout<<"Insira o endereço do responsavel: ";
    getline(std::cin, enderecoResposavel);
    std::cout<<"Informe o bairro do responsavel: ";
    getline(std::cin, bairroResponsavel);
    std::cout<<"Informe a cidade do responsavel: ";
    getline(std::cin, cidadeResponsavel);

    std::cout<<"\n Finalização do Cadastro "<<"\n";


    std::cout<<"Nome: "<<nomeResponsavel<<std::endl;
    std::cout<<"CPF: "<<cpfResponsavel<<std::endl;
    std::cout<<"RG: "<<rgResponsavel<<std::endl;
    std::cout<<"CEP: "<<cepResponsavel<<std::endl;
    std::cout<<"Email: "<<emailResponsavel<<std::endl;
    std::cout<<"Contato: "<<contatoResponsavel<<std::endl;
    std::cout<<"Data de nascimento: "<<dataNascimentoResponsavel<<std::endl;
    std::cout<<"Endereço: "<<enderecoResposavel<<std::endl;
    std::cout<<"Bairro: "<<bairroResponsavel<<std::endl;
    std::cout<<"Cidade: "<<cidadeResponsavel<<std::endl;


}

void cadastroFinanceiro(){


}


int main() {

    SetConsoleOutputCP(CP_UTF8); // Poder colocar acentos
    SetConsoleCP(CP_UTF8); // Poder colocar acentos

   
    cadastroAluno("Aluno");
    cadastroResponsavel("Responsavel");
    

    
    return 0;
}