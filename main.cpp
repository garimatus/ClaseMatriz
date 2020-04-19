#include <iostream>
#include <stdlib.h>

using namespace std;

class Matriz{
    private:
        string Nombre;
        int **M;
        int F;
        int C;
    public:
        void mostrar();
        Matriz();
        ~Matriz();
    protected:
        /* ... */
};

Matriz::Matriz(){
    cout << "Nombre de la Matriz : ";
    cin >> Nombre;
    cout << "No. de Filas : ";
    cin >> F;
    cout << "No. de Columnas : ";
    cin >> C;
    M = new int*[F];
    for(int i=0;i<C;i++)
        M[i] = new int[C];
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++){
            cout << "M["<< i+1 <<"]["<< j+1 <<"] : ";
            cin >> M[i][j];
        }
    }
}

void Matriz::mostrar(){
    system("CLS");
    cout <<"Mostrando "<< Nombre <<endl;
    for(int i=0;i<F;i++){
        for(int j=0;j<C;j++)
            cout <<"M["<<i+1<<"]["<<j+1<<"] : "<<M[i][j]<<endl;
    }
}

Matriz::~Matriz(){}

int main(){
    Matriz A;
    A.mostrar();
    cout << "Hello world!" << endl;
    return 0;
}
