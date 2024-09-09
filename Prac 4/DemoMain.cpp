#include <iostream>

#include "CropField.h"
#include "FarmUnit.h"

using namespace std;

#include <map>
#include <string>

#include "Aggregate.h"
#include "Iterator.h"
#include "Farm.h"
#include "ConcreteFarm.h"
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

void printMap(Iterator *gameMap) {
    int farmNo = 0;

    for (int i = 0; i < 9; i++) {

        string line[3][2];
        Farm *current = gameMap->getCurrent();
        string name = gameMap->getCurrent()->getName();
        string crop = "";
        if (current->getFarmUnit(0)->getSoilState()->getName() == "DrySoil") {
            if (current->getFarmUnit(0)->getCropState()->getName() == "Seedling") {
                crop = "|----|\n|o-o|\n|----|\n|o-o|\n|----|";
            }
            else if (current->getFarmUnit(0)->getCropState()->getName() == "Growing") {
                crop = "|----|\n|ø-ø|\n|----|\n|ø-ø|\n|----|";
            }
            else {
                crop = "|----|\n|Φ-Φ|\n|----|\n|Φ-Φ|\n|----|";
            }
        }

        line[farmNo][0] = name;
        line[farmNo][1] = crop;
        farmNo++;

        if ((i + 1) % 3 == 0) {
            cout << line[0][0] << " " << line[1][0] << " " << line[2][0] << " " << endl;
            cout << line[0][1] << " " << line[1][1] << " " << line[2][1] << " " << endl;
            cout << endl;
            farmNo = 0;
        }
    }
}


int main() {
    MenuPrintout();

    Farm *cocaine = new CropField();
    Farm *heroine = new CropField();
    Farm *morphine = new CropField();
    Farm *tobacco = new CropField();
    Farm *coffee = new CropField();
    Farm *cotton = new CropField();
    Farm *tea = new CropField();
    Farm *weed = new CropField();
    Farm *sugar = new CropField();


    map<string, Farm*> farms;

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


    return 0;
}

