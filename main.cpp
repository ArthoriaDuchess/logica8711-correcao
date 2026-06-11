#include <iostream>
 
 
void quickSort(int* arr, int esquerda, int direita){
    if(esquerda >= direita) return ;
 
    int pivo = arr[direita];
    int i = esquerda - 1;
 
    for(int j = esquerda; j < direita; j++){
        if(arr[j] < pivo){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1 ] = arr[direita];
    arr[direita] = temp;
 
    quickSort(arr, esquerda, i);
    quickSort(arr, i + 2, direita);
}
 
int main(){
    int arr [] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = 7;
 
    quickSort(arr, 0, tamanho - 1);
 
    for(int i = 0; i < tamanho; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
 
}