#include <iostream>

#include "Barn.h"
#include "CropField.h"
#include "DrySoil.h"
#include "FarmUnit.h"
#include "Seedling.h"

using namespace std;

#include <map>
#include <string>

#include "Aggregate.h"
#include "Iterator.h"
#include "Farm.h"
#include "ConcreteFarm.h"
#include "FarmUnit.h"
#include "CropField.h"

void MenuPrintout(){
        cout << "\033[38;5;64m                                                                                                                     \n"
            "                ........                                                                      ...:::..               \n"
            "          .:+#%%@@@@@@@@@%%%*=:.                                                         .-*%%@@@@@@@@%%+..          \n"
            "      .-%@@@@@@@@@@@@@@@@@@@@@@@@@#=:..                  ..:+#%%#=:..                .:+@@@@@@@@@@@@@@@@@@@*:        \n"
            "...=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%*=::.......:=#@@@@@@@@@@@@@@@%*-::::::-+#@@@@@@@@@@@@@@@@@@@@@@@@@@@@%-.... \n"
            "+@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#=.\n"
            "####################################################################################################################*\033[0m\n"
            "\033[38;5;172m\n"
            "                                /$$                                                     /$$              \n"
            "                               | $$                                                    | $$              \n"
            "        /$$  /$$  /$$  /$$$$$$ | $$  /$$$$$$$  /$$$$$$  /$$$$$$/$$$$   /$$$$$$        /$$$$$$    /$$$$$$ \n"
            "       | $$ | $$ | $$ /$$__  $$| $$ /$$_____/ /$$__  $$| $$_  $$_  $$ /$$__  $$      |_  $$_/   /$$__  $$\n"
            "       | $$ | $$ | $$| $$$$$$$$| $$| $$      | $$  \\ $$| $$ \\ $$ \\ $$| $$$$$$$$        | $$    | $$  \\ $$\n"
            "       | $$ | $$ | $$| $$_____/| $$| $$      | $$  | $$| $$ | $$ | $$| $$_____/        | $$ /$$| $$  | $$\n"
            "       |  $$$$$/$$$$/|  $$$$$$$| $$|  $$$$$$$|  $$$$$$/| $$ | $$ | $$|  $$$$$$$        |  $$$$/|  $$$$$$/\n"
            "        \\_____/\\___/  \\_______/|__/ \\_______/ \\______/ |__/ |__/ |__/ \\_______/         \\___/   \\______/ \n"
            "                                                                                                  \n"
            "        /$$   /$$                                               /$$                               /$$\n"
            "       | $$  | $$                                              | $$                              | $$\n"
            "       | $$  | $$  /$$$$$$  /$$$$$$/$$$$   /$$$$$$   /$$$$$$$ /$$$$$$    /$$$$$$   /$$$$$$   /$$$$$$$\n"
            "       | $$$$$$$$ /$$__  $$| $$_  $$_  $$ /$$__  $$ /$$_____/|_  $$_/   /$$__  $$ |____  $$ /$$__  $$\n"
            "       | $$__  $$| $$  \\ $$| $$ \\ $$ \\ $$| $$$$$$$$|  $$$$$$   | $$    | $$$$$$$$  /$$$$$$$| $$  | $$\n"
            "       | $$  | $$| $$  | $$| $$ | $$ | $$| $$_____/ \\____  $$  | $$ /$$| $$_____/ /$$__  $$| $$  | $$\n"
            "       | $$  | $$|  $$$$$$/| $$ | $$ | $$|  $$$$$$$ /$$$$$$$/  |  $$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$\n"
            "       |__/  |__/ \\______/ |__/ |__/ |__/ \\_______/|_______/    \\___/   \\_______/ \\_______/ \\_______/\n"
            "                                                                                              \033[0m" << endl;

            cout << "\033[38;5;94m .......................           ....................    ............  .........  ....... ....... ........  ........\n"
            "%@@@@@@@@@@@@%*++=-:.        .:=++#@@@@@@@@@@@@@#+-.. .:=*%@@@@@@@%+.. .+%@@@@@=. .*@@@%=. +@@@@#. .%@@@@%-.  =%@@@@%\n"
            "%@@@@#+==-:...        .:=+*#@@@@@@@@@@@@@@@#+=..  .-+#@@@@@@@@@@*-. .:*@@@@@@*. .:#@@@@#. .#@@@@#:  *@@@@@%=. .:#@@@%\n"
            "--:...         .:=*#%@@@@@@@@@@@@@@@@@@*-:..  .-*%@@@@@@@@@@@#-.. .=%@@@@@@#:. .-%@@@@@-  +@@@@@%-  -@@@@@@@=   .+@@%\n"
            "        ..=*#%@@@@@@@@@@@@@@@@@@@@@%=:.   .:*%@@@@@@@@@@@@%+:. ..+%@@@@@@%=.. .*@@@@@@%. :#@@@@@@=. .%@@@@@@@=   .-%%\n"
            " ..-*#%@@@@@@@@@@@@@@@@@@@@@@@@@+:...  .+%@@@@@@@@@@@@@@#:..  .#@@@@@@@@*.. .+@@@@@@@@. .=@@@@@@@+.  +@@@@@@@@=   ..*\n \033[0m";
};

<<<<<<< Updated upstream
void printMap(Iterator *gameMap) {
    int farmNo = 0;

    for (int i = 0; i < 9; i++) {
=======
void moveUp() {
    cout << endl << "Moving Up" << endl;
}

void moveDown() {
    cout << endl << "Moving Down" << endl;
}

void moveLeft() {
    cout << endl << "Moving Left" << endl;
}

void moveRight() {
    cout << endl << "Moving Right" << endl;
}

void action1() {
    cout << endl << "Action 1" << endl;
}

void action2() {
    cout << endl << "Action 2" << endl;
}

void farmAction1() {

//    farm->getSoilState()->rain(farm->getFarmUnit(0));
//    cout << endl << "Farm Action 1" << endl;
}

void farmSellTruck() {
    cout << endl << "Farm Sell Truck" << endl;
}

void farmBuyTruck() {
    cout << endl << "Farm Buy Truck" << endl;
}

void farmAction3() {
    cout << endl << "Farm Action 3" << endl;
}

void farmAction4() {
    cout << endl << "Farm Action 4" << endl;
}

void printMap(map<string, ConcreteFarm*> farms) {
    int farmNo = 0;
    int index = 0;
//    Farm *current = nullptr;
    map<string, ConcreteFarm*> ::iterator current;
    string line[3][2];
    cout << endl;

    string player1 = "|-----|";
    string player2 = "|     |";
    string player3 = "|-----|";

    string topAndEndLine = "-------";
    string cropLines[3];
    string otherLine = "";
>>>>>>> Stashed changes

        string line[3][2];
        Farm *current = gameMap->getCurrent();
        string name = gameMap->getCurrent()->getName();
        string crop = "";
<<<<<<< Updated upstream
        if (current->getFarmUnit(0)->getSoilState()->getName() == "DrySoil") {
            if (current->getFarmUnit(0)->getCropState()->getName() == "Seedling") {
                crop = "|----|\n|o-o|\n|----|\n|o-o|\n|----|";
            }
            else if (current->getFarmUnit(0)->getCropState()->getName() == "Growing") {
                crop = "|----|\n|ø-ø|\n|----|\n|ø-ø|\n|----|";
            }
            else {
                crop = "|----|\n|Φ-Φ|\n|----|\n|Φ-Φ|\n|----|";
=======
        if (current->second->getFarmUnit(0)->getSoilState()->getName() == "DrySoil") {
            otherLine = "|-----|";

            if (current->second->getFarmUnit(0)->getCropState()->getName() == "Seedling") {
                cropLines[farmNo] = "|-o-o-|";
                crop = "______\n|----|\n|o-o|\n|----|\n|o-o|\n|----|\n______";
            }
            else if (current->second->getFarmUnit(0)->getCropState()->getName() == "Growing") {
                cropLines[farmNo] = "|-ø-ø-|";
                crop = "______\n|----|\n|ø-ø|\n|----|\n|ø-ø|\n|----|\n______";
            }
            else {
                cropLines[farmNo] = "|-Φ-Φ-|";
                crop = "______\n|----|\n|Φ-Φ|\n|----|\n|Φ-Φ|\n|----|\n______";
>>>>>>> Stashed changes
            }
        }

        line[farmNo][0] = name;
        line[farmNo][1] = crop;
        farmNo++;

<<<<<<< Updated upstream
        if ((i + 1) % 3 == 0) {
            cout << line[0][0] << " " << line[1][0] << " " << line[2][0] << " " << endl;
            cout << line[0][1] << " " << line[1][1] << " " << line[2][1] << " " << endl;
=======

        if ((index + 1) % 3 == 0) {

            cout << endl;
            cout << line[0][0] << "\t\t\t" << line[1][0] << "\t\t\t" << line[2][0] << endl;
            cout << topAndEndLine << "\t\t\t" << topAndEndLine << "\t\t\t" << topAndEndLine << endl;
            cout << otherLine << "\t\t\t" << otherLine << "\t\t\t" << otherLine << endl;
            cout << cropLines[0] << "\t\t\t" << cropLines[1] << "\t\t\t" << cropLines[2] << endl;
            cout << otherLine << "\t\t\t" << otherLine << "\t\t\t" << otherLine << endl;
            cout << topAndEndLine << "\t\t\t" << topAndEndLine << "\t\t\t" << topAndEndLine << endl << endl;

//            cout << line[0][1] << " " << line[1][1] << " " << line[2][1] << " " << endl;
>>>>>>> Stashed changes
            cout << endl;
            farmNo = 0;
        }
    }
}

string chooseDefaultControl() {
    cout << "Choose an action: " << endl;
    cout << "W(lowercase):\t" << "Move Up" << endl;
    cout << "A(lowercase):\t" << "Move Left" << endl;
    cout << "S(lowercase):\t" << "Move Down" << endl;
    cout << "D(lowercase):\t" << "Move Right" << endl;
    cout << "1:\t" << "Choose Left Farm()" << endl;
    cout << "2:\t" << "Choose Right Farm()" << endl;
    cout << "3:\t" << "Exit the game" << endl;
    cout << endl << "Your action: ";

    string option;
    cin >> option;
    return option;
}

string chooseFarmOption(ConcreteFarm *farm) {
    bool isTruck = true;

    if (farm->getTruck() == nullptr) {
        isTruck = false;
    }

    cout << "Choose an action: " << endl;
    cout << "1:\t" << "Make it rain!" << endl;

    if (isTruck) {
        cout << "2:\t" << "Sell the farm's truck" << endl;
    }
    else {
        cout << "2:\t" << "Buy the farm a truck" << endl;
    }

    cout << "3:\t" << "Call the truck()" << endl;
    cout << "4:\t" << "Crops are ready. Harvest" << endl;
    cout << "5:\t" << "Exit the farm(" << farm->getName() << ")" << endl;
    cout << endl << "Your action: ";

    string option;
    cin >> option;
    return option;
}

int main() {
    MenuPrintout();

    State *drySoil = new DrySoil();
    State *moistSoil = new DrySoil();
    State *fruitfulSoil = new DrySoil();
    State *floodedSoil = new DrySoil();

    State *seedling = new Seedling();
    State *growing = new Growing();
    State *fullyGrown = new FullyGrown();

<<<<<<< Updated upstream
    FarmUnit *field = new CropField();

    Farm *cocaine = new ConcreteFarm();
    cocaine->addFarmUnit(new CropField());
    cocaine->addFarmUnit(new Barn());


    Farm *heroine = new ConcreteFarm();
    heroine->addFarmUnit(new ConcreteFarm());
    heroine->addFarmUnit(new Barn());

    Farm *morphine = new ConcreteFarm();
    morphine->addFarmUnit(new ConcreteFarm());
    morphine->addFarmUnit(new Barn());

    Farm *tobacco = new ConcreteFarm();
    tobacco->addFarmUnit(new ConcreteFarm());
    tobacco->addFarmUnit(new Barn());

    Farm *coffee = new ConcreteFarm();
    coffee->addFarmUnit(new ConcreteFarm());
    coffee->addFarmUnit(new Barn());

    Farm *cotton = new ConcreteFarm();
    cotton->addFarmUnit(new ConcreteFarm());
    cotton->addFarmUnit(new Barn());

    Farm *tea = new ConcreteFarm();
    tea->addFarmUnit(new ConcreteFarm());
    tea->addFarmUnit(new Barn());

    Farm *weed = new ConcreteFarm();
    weed->addFarmUnit(new ConcreteFarm());
    weed->addFarmUnit(new Barn());

    Farm *sugar = new ConcreteFarm();
    sugar->addFarmUnit(new ConcreteFarm());
    sugar->addFarmUnit(new Barn());
=======
    CropState *seedling = new Seedling();
//    CropState *growing = new Growing();
//    CropState *fullyGrown = new FullyGrown();
>>>>>>> Stashed changes


    map<string, ConcreteFarm*> farms;

    farms["Farm " + 0] = new ConcreteFarm();
    farms["Farm " + 0]->addFarmUnit(cocaine);
    farms["Farm" + 0]->setName("cocaine");

    farms["Farm " + 1] = new ConcreteFarm();
    farms["Farm " + 1]->addFarmUnit(heroine);
    farms["Farm" + 1]->setName("heroine");

    farms["Farm " + 2] = new ConcreteFarm();
    farms["Farm " + 2]->addFarmUnit(morphine);
    farms["Farm" + 2]->setName("morphine");

    farms["Farm " + 3] = new ConcreteFarm();
    farms["Farm " + 3]->addFarmUnit(tobacco);
    farms["Farm" + 3]->setName("tobacco");

    farms["Farm " + 4] = new ConcreteFarm();
    farms["Farm " + 4]->addFarmUnit(coffee);
    farms["Farm" + 4]->setName("coffee");

    farms["Farm " + 5] = new ConcreteFarm();
    farms["Farm " + 5]->addFarmUnit(tea);
    farms["Farm" + 5]->setName("tea");

    farms["Farm " + 6] = new ConcreteFarm();
    farms["Farm " + 6]->addFarmUnit(cotton);
    farms["Farm" + 6]->setName("cotton");

    farms["Farm " + 7] = new ConcreteFarm();
    farms["Farm " + 7]->addFarmUnit(weed);
    farms["Farm" + 7]->setName("weed");

    farms["Farm " + 8] = new ConcreteFarm();
    farms["Farm " + 8]->addFarmUnit(sugar);
    farms["Farm" + 8]->setName("sugar");


    Aggregate gameMap;
    Iterator *mapObj = gameMap.createIterator(farms);


    printMap(mapObj);

    bool onFarm = false;
    ConcreteFarm* current = mapObj->getCurrent();

    int playerPosition[9];

    while (true) {
        if (!onFarm) {
            string command = chooseDefaultControl();

            if (command == "w") {
                moveUp();
            }
            if (command == "a") {
                moveLeft();
            }
            if (command == "s") {
                moveDown();
            }
            if (command == "d") {
                moveRight();
            }
            if (command == "1") {
                onFarm = true;
                action1();
            }
            if (command == "2") {
                onFarm = true;
                action2();
            }
            if (command == "3") {
                cout << endl << endl << "Thank you for playing! See you next time!" << endl;
                return 0;
            }
        }
        else {
            string command = chooseFarmOption(current);

            if (command == "1") {
                farmAction1();
            }
            if (current->getTruck() == nullptr && command == "2") {
                farmBuyTruck();
            }
            if (current->getTruck() != nullptr && command == "2") {
                farmSellTruck();
            }
            if (command == "3") {
                farmAction3();
            }
            if (command == "4") {
                farmAction4();
            }
            if (command == "5") {
                onFarm = false;
            }
        }
    }




    return 0;
}
