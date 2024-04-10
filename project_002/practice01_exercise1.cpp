#include <iostream>
#include <string>

class Student {
    public:
        explicit Student (std::string n, int a) 
                :name{n}{
            if(a>0){
                age = a;
            }
            
        }

        void setName(std::string n){
            name = n;
        }

        std::string getName() {
            return name;
        }

        void setAge(int a){
            age = a;
        }

        int getAge(){
            return age;
        }

        bool isOlder() const {
            if (age >= 18){
                return true;
            }
            else{
                return false;
            }
        }
    private:
        std::string name;
        int age;

};

int main () {
    Student estudiante_1{"estudiante_1",0};
    std::cout<<"Ingrese el nombre del primer estudiante: "<<std::endl;
    std::string nombre_estudiante;
    std::getline(std::cin, nombre_estudiante);
    estudiante_1.setName(nombre_estudiante);
    std::cout<<"Ingrese la edad del primer estudiante"<<std::endl;
    int edad;
    std::cin>>edad;
    estudiante_1.setAge(edad);

    Student estudiante_2{"estudiante_2",0};
    std::cout<<"Ingrese el nombre del segundo estudiante: "<<std::endl;
    std::cin.ignore();
    std::getline(std::cin, nombre_estudiante);
    estudiante_2.setName(nombre_estudiante);
    std::cout<<"Ingrese la edad del segundo estudiante"<<std::endl;
    std::cin>>edad;
    estudiante_2.setAge(edad);

    std::system("cls");


    std::cout<<"Estudiante: "<<estudiante_1.getName()<<std::endl;
    std::cout<<"Edad: "<<estudiante_1.getAge()<<std::endl;
    std::cout<<"Mayor de edad: "<<estudiante_1.isOlder()<<std::endl;
    std::cout<<std::endl;
    
    std::cout<<"Estudiante: "<<estudiante_2.getName()<<std::endl;
    std::cout<<"Edad: "<<estudiante_2.getAge()<<std::endl;
    std::cout<<"Mayor de edad: "<<estudiante_2.isOlder()<<std::endl;
    std::cout<<std::endl;

    return 0;
}