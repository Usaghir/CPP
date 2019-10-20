/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This Task will simulate Stone, Paper, Scissor game.
 
 Stone, Paper, Scissors game
 
 ”Stone, Scissors, Paper” is a game where two participating players, at the 
 same time select one of the options stone, scissors or paper. Depending on 
 the options chosen, one of the players wins as follows:

  • Stone beats scissors
  • Scissors beats paper
  • Paper beats Stone
  • Other cases makes the game equal

  The task is to write a program that allows a user to play Stone, Scissors and
  Paper with the computer as automated opponent. The player choose “Stone”, 
  “Scissors” or “Paper” by inputting 0, 1 or 2 and the computer then makes a 
  random selection. After each play, the computer's move, the result and actual 
  score should be shown. The first to get 10 wins, wins the whole game. 
  A requirement is that the values of the outcomes Stone, Scissors and Paper
  should be implemented with enum.
 ============================================================================*/

#include <iostream> // for input and output
#include <iomanip>  // for setfill()and setw(2)
#include <ctime>    // for using time();
#include <cstdlib>  // for using srand() and rand();
#include <string>   // for using toupper();
using namespace std;

// Enumerations data type
enum RSP
{
  Stone,
  Scissor,
  Paper
};

// ProtoType
string choice(RSP comp);
// Precondition: The comp is a enum type variable.
// Postcondition: The function will return String corresponding to parameters.

// A function to coverter the user and computer choices
string choice(RSP compuser)
{
  switch (compuser)
  {
  case Stone:
    return "Stone";
  case Scissor:
    return "Scissor";
  case Paper:
    return "Paper";
  }
}

int main()
{
  // Variables declaration.
  int ComputerChoice, UserChoice, userCount = 0, comCount = 0;
  char answer;

  // enum variables.
  RSP user, comp;

  // Time seed for genration random number.
  srand((int)time(NULL));

  do
  {
    system("clear"); // Clear Screen.
    cout << "=================================================" << endl;
    cout << "           STONE SCISSORS PAPPER" << endl;
    cout << "=================================================" << endl;
    do
    {
      // For user input.
      cout << "Your choice (Stone=0/Scissors=1/Paper=2): ";
      cin >> UserChoice;
      cout << "=================================================" << endl;
      while (UserChoice < 0 || UserChoice > 2)
      {
        cout << "X Invalid Choice X" << endl;
        cout << "=================================================" << endl;
        cout << "Try again (Stone=0/Scissors=1/Paper=2): ";
        cin >> UserChoice;
        cout << "=================================================" << endl;
      }

      user = RSP(UserChoice);
      cout << "You choose: " << choice(user) << endl;
      cout << "=================================================" << endl;

      // For Computer intput a random number.
      ComputerChoice = rand() % 3;
      comp = RSP(ComputerChoice);
      cout << "Computer choose: " << choice(comp) << endl;
      cout << "=================================================" << endl;

      // Counting the choices of user and computer.
      if (user == 0 && comp == 1)
      {
        cout << "You Won! " << endl;
        cout << "=================================================" << endl;
        userCount++;
      }
      else if (user == 1 && comp == 2)
      {
        cout << "You Won! " << endl;
        cout << "=================================================" << endl;
        userCount++;
      }
      else if (user == 2 && comp == 0)
      {
        cout << "You Won! " << endl;
        cout << "=================================================" << endl;
        userCount++;
      }
      else if (user == 1 && comp == 0)
      {
        cout << "Computer Won! " << endl;
        cout << "=================================================" << endl;
        comCount++;
      }
      else if (user == 2 && comp == 1)
      {
        cout << "Computer Won! " << endl;
        cout << "=================================================" << endl;
        comCount++;
      }
      else if (user == 0 && comp == 2)
      {
        cout << "Computer Won! " << endl;
        cout << "=================================================" << endl;
        comCount++;
      }
      else
      {
        cout << "Tie! " << endl;
        cout << "=================================================" << endl;
      }

      // Score display.
      cout << "Score (you - computer) : " << setfill('0') << setw(2) << userCount;
      cout << "-" << setfill('0') << setw(2) << comCount << endl;
      cout << "=================================================" << endl;

    } while ((userCount < 10) && (comCount < 10));

    //For final result display.
    if (userCount > comCount)
    {
      cout << "You Won Final Score (you - computer) : " << setfill('0') << setw(2) << userCount << "-";
      cout << setfill('0') << setw(2) << comCount << endl;
    }
    else
    {
      cout << "Computer Won Final Score (you - computer) : " << setfill('0') << setw(2) << userCount << "-";
      cout << setfill('0') << setw(2) << comCount << endl;
      cout << "=================================================" << endl;
    }

    //For reseting the couters.
    comCount = 0;
    userCount = 0;

    // For repetition request from user.
    cout << "\nOne more time? (Y/N):";
    cin.ignore();
    cin.get(answer);

  } while (toupper(answer) == 'Y');
  cout << endl;
  return 0;
}
