#include <iostream>
#include <string>


class Personaje {
public:
    Personaje (std::string nombre, int direccion, float velocidad)
                : Nombre{nombre} , Direccion{direccion} , Velocidad{velocidad}{

    }

    void setNombre(std::string nombre) {
        Nombre = nombre;
    }

    void setDireccion(int direccion) {
        Direccion = direccion;
    }    

    void setVelocidad(float velocidad) {
        Velocidad = velocidad;

    }
    void Saltar() {
        if (!saltando) {

            saltando = true;
            
            std::cout << Nombre << " saltó." << std::endl;
        }
    }

    void Actualizar() {
    
        if (Direccion != 0) {
            std::cout << Nombre << " se está moviendo en dirección " << (Direccion > 0 ? "derecha" : "izquierda") << " a una velocidad de " << Velocidad << std::endl;
        }
    }

    std::string GetNombre() const {
        return Nombre;
    }

    int GetDireccion() const {
        return Direccion;
    }

    float GetVelocidad() const {
        return Velocidad;
    }

private:
    std::string Nombre;
    int Direccion;
    float Velocidad;
    bool saltando = false;
};

int main() {

    Personaje personaje1{"Mario", 1, 0.5};
  

    personaje1.Saltar(); 
    personaje1.Actualizar();

  
    return 0;
}