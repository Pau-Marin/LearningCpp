//
//  main.cpp
//  LearningCpp
//
//  Created by Pau Marin on 03/05/2020.
//

#include <iostream>

using namespace std;

int main()
{
    string name;
    string favFood;
    cout << "Por favor, escribe tu nombre" << endl;
    cin >> name;
    cout << "Saludos " << name << ", ¿Cual es tu comida favorita?" << endl;
    cin >> favFood;
    cout << "¡Que guay!, mi comida favorita también es " << favFood << endl;
    
    return 0;
}
