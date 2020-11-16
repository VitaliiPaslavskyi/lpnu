#include <iostream>
#include <vector>

using namespace std;
//(A U B) ^ A = A


int main(){

    using namespace std;
    vector<int> a(0);
    vector<int> b(0);
    vector<int> association(0);
    vector<int> cut(0);

    int num;
    
    int n1, n2;
    cout << "Enter nubers of elements in sets A, B(n1 - A, n2 - B): ";
    cin >> n1 >> n2;
    ///////////////////////////// array for A & B
    cout << "\nEnter numbers for A: ";
    for(int i = 0; i < n1; i++){
        cin >> num;
        a.push_back(num);
        //a.push_back(rand() % 60);
    }

    cout << "Enter numbers for B: ";
    for(int i = 0; i < n2; i++){
        cin >> num;
        b.push_back(num);
        //b.push_back(rand() % 60);
    }

    cout << "A : ";
    for(int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; 

    cout << endl;

    cout << "B : ";
    for(int i = 0; i < b.size(); i++) 
        cout << b[i] << " ";
        
    cout << endl;
    cout << '\n';
    ////////////////////////////// power
    cout << "|A| = " << a.size() << endl;
    cout << "|B| = " << b.size() << endl << endl;


    /////////////////////////////// association

    for(int i = 0; i < a.size(); i++){
        association.push_back(a[i]);
    }

    for(int i = 0; i < b.size(); i++){
        association.push_back(b[i]);
    }

    for(int i = 0; i < association.size(); i++){
        for(int j = 0; j < association.size(); j++){
            if( i != j && association[i] == association[j]){
                association.erase(association.begin()+(j));
            }
        }
    }
    
    cout << "A U B: ";
    for(int i = 0; i < association.size(); i++){
        cout << association[i] << " ";
    }

    cout << endl;
    /////////////////////////////////
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < association.size(); j++){
            if(a[i] == association[j]){
                cut.push_back(association[j]);
            }
        }
    }
    cout << "A cut (A U B): ";
    if(cut.size() == 0){
        cout << "A cut B is empty plural" << endl;
    } 
    else{
        for(int i = 0; i < cut.size(); i++){
            cout << cut[i] << " ";
        }
    }

    
    //cin.get();
    return 0;
}