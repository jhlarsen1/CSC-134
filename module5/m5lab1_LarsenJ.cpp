/*
CSC 134
m5lab1 choose your own adventure
LarsenJ
3/31/25
full application which is made of multiple functions
*/

#include <iostream>
using namespace std;
#include <thread>
#include <chrono>

void slowPrint(const std::string& text, int delay_ms) 
{
    for (char c : text) 
    {
        std::cout << c << std::flush; // Flush the output after each character to ensure it shows immediately
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms)); // Delay between characters
    }
    std::cout << std::endl;
}
void slowLine(const std::string& text, int delay_ms) 
{
    for (char c : text) {
        std::cout << c;
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms)); // Delay between characters
    }
    std::cout << std::endl;
}

/*
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.

You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_ask();
void choice_run_away();
void choice_new_world();
void choice_I_refuse();
void choice_gun();
void choice_ask_hoodedman();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) 
  {
    choice_front_door();
  } 
  else if (2 == choice) 
  {
    // call choice 2 here
    choice_back_door();
  } 
  else if (3 == choice) 
  {
    // call choice 3 here
  } 
  else if (4 == choice) 
  {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } 
  else 
  {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() 
{
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    choice_back_door();
  } 
  else if (2 == choice) 
  {
    choice_go_home();
  }
}

void choice_back_door() 
{ 
    cout << "You touch the doorknob and a blue portal opens up underneath you" << endl;
    cout << "You try as hard as you can but the blue portal forcibly sucks you in before you can react" << endl;
    cout << "The portal puts you in front of a beautiful woman with wings" << endl;
    cout << "Do you:" << endl;
    cout << "1. Ask \"who are you\"" << endl;
    cout << "2. Run away and try to get back home" << endl;
    int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) 
  {
    choice_ask();
  } 
  else if (2 == choice) 
  {
    choice_run_away();
  }

}

void choice_go_home() 
{
     cout << "On your way home you get confronted agressively by a hooded man with what looks like a sword and shield" << endl;
     cout << "The man seems to be in rush and you suspect he could be dangerous" << endl;
     cout << "Do You: " << endl;
     cout << "1. Reach for your gun in self-defense and prepare shoot the hooded man" << endl;
     cout << "2. Ask the hooded man what he wants" << endl;
     int choice;
     cin >> choice;
     if (1 == choice)
     {
        choice_gun();
     }
     else if (2 == choice)
     {
        choice_ask_hoodedman();
     }
}

void choice_ask()
{
    cout << "Although frightened, you ask the winged woman who are you" << endl;
    cout << "The winged woman responds with a mean look and agressive tone:" << endl;
    slowPrint("\"Be silent mortal, I am the Goddess of reality, Xenas.\"", 100);
    slowPrint("\"I am in search of a brave worrior who can save one of the realities I control\"", 100);
    slowPrint("\"The last 100 humans to come before me ran away, and were instantly obliterated for being cowards\"", 100);
    slowPrint("\"Theres no time to waste! I will be gifting you with my blessing to begin your journey in a new world\"", 100);
    cout << "Press 1 and then [Enter] to continue" << endl;
    cout << "Press 2 and then [Enter] to tell the Goddess you refuse to continue" << endl;
    int choice;
    cin >> choice;
  if (1 == choice) 
  {
    choice_new_world();
  } 
  else if (2 == choice) 
  {
    choice_I_refuse();
  }
    

}
void choice_new_world()
{
    cout << "And the adventure begins!" << endl;
    slowLine("The Goddess waves her hand you instantly appear in the middle of a strange new city", 100);
    slowLine("You look around and notice everyone is dressed strangely", 100);
    slowLine("A large shadow passes over your body and then you look up and see a dragon flying over the city!", 100);
    //stopped here for the sake of the assignment being turned in
}
void choice_I_refuse()
{
    cout << "You begin to yell at the Goddess" << endl;
    slowPrint("You cants make...", 100);
    cout << "The Godess obliterates you for you can finish" << endl;
    slowPrint("GAME OVER!", 100);
}
void choice_run_away()
{
    slowLine("You turn and begin to runaway as fast as you can", 100);
    slowLine("The Godess instantly obliterates you for being what she considers a coward", 100);
    slowPrint("GAME OVER!", 100);
}
void choice_gun()
{
    slowLine("You reach for the gun you have concealed on your waist", 100);
    slowLine("Sensing your hostility the hooded man instantly removes your head with one quick swipe of his sword", 100);
    slowPrint("GAME OVER!", 100);

}
void choice_ask_hoodedman()
{
    slowLine("You ask the hooded man...", 100);
    slowPrint("\"Who are you! What do you want from me!\"", 100);
    slowLine("After a breef pause, the hooded man begins to talk", 100);
    slowPrint("\"You have been summoned by the Goddess of reality, to refuse her summons is to choose death\"", 100);
    cout << "****ended here to turn in program****" << endl;
    

}