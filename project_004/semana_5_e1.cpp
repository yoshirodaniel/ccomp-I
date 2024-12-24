#include <iostream>
#include <string>

int main () {
    std::string word;
    char c;
    std::cout<<"Ingresa una cadena(words): ";
    std::getline(std::cin, word);

    for (int i=0; i<word.size();i++){
        c=word.at(i);
        int v=static_cast<int>(c);
        if (v >= 97 && v <= 122)
            word.at(i)=c-32;
            
        }
    std::cout<<word<<std::endl;
    return 0;
}