#include <iostream>
#include <string>

int main(){

    std::string name;
    std::string surname;
    std::string fullName;
    int age;
    int yearOfBirth;
    std::string cityOfResidence;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your surname: ";
    std::getline(std::cin, surname);

    fullName = name + " " + surname;

    std::cout << "Your full name is: " << fullName << std::endl;


    std::cout<< "insira a sua idade: ";
    std::cin >> age;
    std::cout<< "qual o seu ano de nascimento? ";
    std::cin >> yearOfBirth;
    std::cout<< "qual a sua cidade de residencia? ";
    std::getline(std::cin, cityOfResidence);
    std::cout<< name << " " << surname << ", voce tem " << age - yearOfBirth << ", e esta morando em: " << cityOfResidence << "." << std::endl;

    return 0;
}