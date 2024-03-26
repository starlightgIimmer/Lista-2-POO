#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Veiculo
{
    private:
        float peso;
        int ano;
        string cor;
        string marca;
    public:
        
        float getPeso() {return peso;}
        
        void setPeso(float p){peso = p;}
        
        int getAno() {return ano;}
        
        void setAno(int a){ano = a;}
        
        string getCor() {return cor;}
        
        void setCor(string c){cor = c;}
        
        string getMarca() {return marca;}
        
        void setMarca(string m){marca = m;}
        
        void printDados() const 
        {
            cout << "Marca: " << marca << ", Ano: " << ano << ", Cor: " << cor << ", Peso: " << peso;
        }

        void printDadosTxt(ofstream& arquivo) const 
        {
            arquivo << "Marca: " << marca << ", Ano: " << ano << ", Cor: " << cor << ", Peso: " << peso;
        }
};

int main() 
{
    float peso;
    int ano;
    string cor;
    string marca;
    
    cout << "Nome: ";
    cin >> nomeCliente;
    cout << "Telefone: ";
    cin >> telefoneCliente;
    cout << "Marca do carro: ";
    cin >> marcaCarro;
    cout << "Placa do carro: ";
    cin >> placaCarro;
    cout << "Cor do carro: ";
    cin >> corCarro;

    Carro carro(marcaCarro, placaCarro, corCarro);
    Cliente cliente(nomeCliente, telefoneCliente, carro);

    cout << "\nDados do Cliente:\n";
    cliente.printDados();

    return 0;
}
