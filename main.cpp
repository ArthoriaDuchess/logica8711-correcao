#include <iostream>
 

int encontrarMaior(int* arr, int tamanho){
   int maior = arr[0];
   for(int i = 1; i < tamanho; i++){
      if(arr[i] > maior){
         maior = arr[i];
      }
   }
   return maior;
}

int main(){
   int arr[] = {3, 7, 2, 9, 1, 5};
   std::cout<<"Maior elemento: "<<encontrarMaior(arr, 6)<<std::endl;
   return 0;
}