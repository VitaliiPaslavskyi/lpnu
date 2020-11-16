#include <iostream>
#include <vector>

using namespace std;

int main(){
    // ввід даних користувачем
    int n1, n2;
    cout << "Enter interval point n1: ";
    cin >> n1;
    cout << "Enter interval point n2: ";
    cin >> n2;

    // пустий для чисел Фібоначі 
    vector<int> fibo_nums(0);

    // змінні для першого числа, другого і їх суми (exp: 2, 3, 5  (5 = 2 + 3))
    int firstNum = 0, secondNum = 1, sum = 0;

    
    // цикл do{}while(). Виконує код в {}, поки в () істина
    while(sum <= n2){
        sum = firstNum + secondNum; // третє число ряду Фібоначі це сума двох попередніх
        fibo_nums.push_back(sum);
        firstNum = secondNum; // перше число отримує значення 2гого (exp: було 2 стало 3)
        secondNum = sum; //друге число отримує значення суми (exp: було 3 стало 5)
    } // виконується поки сума менша за н2


    // цим циклом виводиться в консоль
    for(int i = 0; i < fibo_nums.size(); i++){
        cout << fibo_nums[i] << " ";
    }
    cout << endl;
    int counter = 0; //змінна в якій буде записано к-сть парних чисел

    //цикл в якому рахується к-сть парних чисел
    for(int i = 0; i < fibo_nums.size(); i++){ // (оголошується змінна і яка = 0; код в {} виконується поки і < розміру масиву; i збільшується на 1)
        if(fibo_nums[i] >= n1 && fibo_nums[i] <= n2){
            if(fibo_nums[i] % 2 != 0){
                counter++;
            }
        }
        
    }
    cout << "Odd nums " << counter << endl; // вивід к-сті парних чисел

    cin.get();
    return 0;
}