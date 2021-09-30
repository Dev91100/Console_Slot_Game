#include "SlotMachineUI.h" //This also includes other libraries needed. No need to re-include.
#include <iostream>

using namespace std;

//function prototypes
void restartProcess();

int main()
{
    system("COLOR E0");

    //Display Main Menu
    main_Menu displayMenu;
    displayMenu.mainMenu();

    //Get Input
    choice userInput;
    if (userInput.choiceOfInput() == 0)
    {
        restartProcess();
    }

    return 0;
}

void restartProcess()
{
    main();
}
