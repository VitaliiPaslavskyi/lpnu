#include <iostream>

using namespace std;

// простий варіант



double mathFunc(double point){
    // функція
    double f = (point * point) - 6 * point + 2;
    return f;
}

int main(){
    // інтервал [a, b]
    double a, b;
    cout << "Enter a, b: ";
    cin >> a >> b;

    // довжина інтервалу
    double interval;
    if(a<b){
        interval = b - a;
    } else{
        interval = a - b;
    }
    cout << "Interval: " << interval << endl;
    // к-сть точок на які ділиться інтервал
    int n;
    cout << "Enter number of interval deviders: ";
    cin >> n;
    
    // різниця між 2 і 1 точкою
    double step = interval / (n-1);

    cout << "step: " << step << endl;

    // точки
    double point = a, point1 = 0;

    // цикл
    for (int i = 1; i < n; i++){
        // починаєм з a і шукаємо значення настуаної
        point1 = point + step;
        cout << endl;
        cout << "point: " << point << " point1: " << point1 << endl;

        //якщо (значення фукції від першої точки поділене на значення фукції від наступної) < 0, то знаки різні 
        if(mathFunc(point1) / mathFunc(point) < 0){
            cout << "Yes" << endl; 
            cout << "mathFunc(point1): " << mathFunc(point1) << "; mathFunc(point): " << mathFunc(point) << "; result = " << mathFunc(point1) / mathFunc(point) << endl;
            return 0;
        }else{
            cout << "Not this interval: " << point << " - " << point1 << endl;
        }

        cout << "mathFunc(point1): " << mathFunc(point1) << "; mathFunc(point): " << mathFunc(point) << "; result - " << mathFunc(point1) / mathFunc(point) << endl;

        point = point1;
    }
    
    cout << "Not on interval [" << a << ", " << b << "]" << endl;  

    cin.get();
    return 0;
}






    

