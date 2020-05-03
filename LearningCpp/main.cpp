//
//  main.cpp
//  LearningCpp
//
//  Created by Pau Marin on 03/05/2020.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
 
const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()
{
    bool player1Turn = true;
 
    bool gameOver = false;
  
    int chipsInPile = 0;
    int chipsTaken = 0;
    int maxChips = 0;

    string playerNames[2];
  
    //seed the random number generator
    srand(time(0));
  
    //ask the players for their names, then store in an array
    cout << "Jugador 1, introduce tu nombre: ";
    cin >> playerNames[0];
    cout << "Gracias, ¡Buena suerte!" << endl << "Jugador 2, introduce tu nombre: ";
    cin >> playerNames[1];
    cout << "Gracias, ¡Buena suerte!\n";
      
    //start the game with a random number of chips in the pile
  
    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "Esta ronda empezará con " << chipsInPile << " piedras en el montón.\n";
    maxChips = MAX_TURN * chipsInPile;
    cout << "Puedes coger hasta " << maxChips << " piedras." << endl;
    //create a variable to hold the integer value - static_cast<int>(MAX_TURN * chipsInPile)
    //Make sure you assign that at the right place, the compiler won't go back up and update
    //Then knowing the max number that is allowed to be taken per turn, use that in the creation
    //of a  add a random number to be inserted as the number taken. We will use this
    //to play against the computer
    chipsTaken = (rand() % maxChips) + 1;
    cout << "Cogiste " << chipsTaken  << " piedras." << endl;
  
  return 0;
}
