 #include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void showWinner(char player, char computer);
int choice;

int main() {

 char player;
 char computer;

 player = getUserChoice();
 std::cout << "You choice: ";
 showChoice(player);

 computer = getComputerChoice();
 std::cout << "Computer choice: ";
 showChoice(computer);

 showWinner(player, computer);

 return 0;
}
char getUserChoice() {

 char player;
 std::cout << "Rock-Paper-Scissors Game\n" << std::endl;

 do {
      std::cout << "Choose one of the following" << std::endl;
      std::cout << "============================\n";
      std::cout << "'r' for Rock\n";
      std::cout << "'p' for Paper\n";
      std::cout << "'s' for Scissors\n";
      std::cout << "=> \n";
      std::cin >> player;
 }while (player != 'r' && player != 'p' && player != 's');

 return player;
}
char getComputerChoice() {

 srand(time(nullptr));
 int num = rand() % 3 + 1;

 switch (num) {
  case 1:
   return 'r';
  case 2:
   return 'p';
  case 3:
   return 's';
 }
 return 0;
}
void showChoice(const char choice)
{
 switch (choice) {
  case 'r':
   std::cout << "Rock\n";
   break;

  case 'p':
   std::cout << "Paper\n";
   break;

  case 's':
   std::cout << "Scissors\n";
   break;
 }

}
void showWinner(char player, char computer) {

 switch (player) {
  case 'r':
   if (computer == 'r') {
    std:cout << "It's a tie\n";
   }else if (computer == 'p') {
    std::cout << "You lose\n";
   }else {
    std::cout << "You win\n";
   }
   break;

   case 'p':
   if (computer == 'r') {
    std::cout << "You win!\n";
   }else if (computer == 'p') {
    std::cout << "It's a tie\n";
   }else {
    std::cout << "You lose\n";
   }
   break;

  case 's':
   if (computer == 'r') {
    std::cout << "You lose\n";
   }else if (computer == 'p') {
    std::cout << "You win!\n";
   }else {
    std::cout << "It's a tie\n";
   }
   break;
 }
}