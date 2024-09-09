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
#include "State.h"
#include "CropState.h"
#include "SoilState.h"

#include "DrySoil.h"
#include "MoistSoil.h"
#include "FloodedSoil.h"
#include "FruitfulSoil.h"

#include "Seedling.h"
#include "Growing.h"
#include "FullyGrown.h"

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

void printMap(map<string, Farm*> farms) {
    int farmNo = 0;
    int index = 0;
//    Farm *current = nullptr;
    map<string, Farm*> ::iterator current;
    string line[3][2];
    cout << endl;

    string topAndEndLine = "------";

    //for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
    for (current = farms.begin(); current != farms.end(); ++current) {

        if (current->second == nullptr) {
            return;
        }
        string name = current->second->getName();
        string crop = "";
        if (current->second->getFarmUnit(0)->getSoilState()->getName() == "DrySoil") {
            if (current->second->getFarmUnit(0)->getCropState()->getName() == "Seedling") {
                crop = "______\n|----|\n|o-o|\n|----|\n|o-o|\n|----|\n______";
            }
            else if (current->second->getFarmUnit(0)->getCropState()->getName() == "Growing") {
                crop = "______\n|----|\n|ø-ø|\n|----|\n|ø-ø|\n|----|\n______";
            }
            else {
                crop = "______\n|----|\n|Φ-Φ|\n|----|\n|Φ-Φ|\n|----|\n______";
            }
        }

        line[farmNo][0] = name;
        line[farmNo][1] = crop;
        farmNo++;


        if ((index + 1) % 3 == 0) {
            cout << line[0][0] << " " << line[1][0] << " " << line[2][0] << " " << endl;
            cout << line[0][1] << " " << line[1][1] << " " << line[2][1] << " " << endl;
            cout << endl;
            farmNo = 0;
        }
        index++;
    }
}


int main() {
    MenuPrintout();

    FarmUnit *cocaine = new CropField();
    FarmUnit *heroine = new CropField();
    FarmUnit *morphine = new CropField();
    FarmUnit *tobacco = new CropField();
    FarmUnit *coffee = new CropField();
    FarmUnit *cotton = new CropField();
    FarmUnit *tea = new CropField();
    FarmUnit *weed = new CropField();
    FarmUnit *sugar = new CropField();

    SoilState *drySoil = new DrySoil();
    SoilState *moistSoil = new MoistSoil();
    SoilState *floodedSoil = new FloodedSoil();
    SoilState *fruitfulSoil = new FruitfulSoil();

    CropState *seedling = new Seedling();
    CropState *growing = new Growing();
    CropState *fullyGrown = new FullyGrown();


    map<string, Farm*> farms;

//    farms.insert(pair<string, Farm*>("Farm 0", new ConcreteFarm()));
    farms["Farm 0"] = new ConcreteFarm();
    farms["Farm 0"]->addFarmUnit(cocaine);
    farms["Farm 0"]->setName("cocaine");
    farms["Farm 0"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 0"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 1"] = new ConcreteFarm();
    farms["Farm 1"]->addFarmUnit(heroine);
    farms["Farm 1"]->setName("heroine");
    farms["Farm 1"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 1"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 2"] = new ConcreteFarm();
    farms["Farm 2"]->addFarmUnit(morphine);
    farms["Farm 2"]->setName("morphine");
    farms["Farm 2"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 2"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 3"] = new ConcreteFarm();
    farms["Farm 3"]->addFarmUnit(tobacco);
    farms["Farm 3"]->setName("tobacco");
    farms["Farm 3"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 3"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 4"] = new ConcreteFarm();
    farms["Farm 4"]->addFarmUnit(coffee);
    farms["Farm 4"]->setName("coffee");
    farms["Farm 4"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 4"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 5"] = new ConcreteFarm();
    farms["Farm 5"]->addFarmUnit(tea);
    farms["Farm 5"]->setName("tea");
    farms["Farm 5"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 5"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 6"] = new ConcreteFarm();
    farms["Farm 6"]->addFarmUnit(cotton);
    farms["Farm 6"]->setName("cotton");
    farms["Farm 6"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 6"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 7"] = new ConcreteFarm();
    farms["Farm 7"]->addFarmUnit(weed);
    farms["Farm 7"]->setName("weed");
    farms["Farm 7"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 7"]->getFarmUnit(0)->setCropState(seedling);

    farms["Farm 8"] = new ConcreteFarm();
    farms["Farm 8"]->addFarmUnit(sugar);
    farms["Farm 8"]->setName("sugar");
    farms["Farm 8"]->getFarmUnit(0)->setSoilState(drySoil);
    farms["Farm 8"]->getFarmUnit(0)->setCropState(seedling);


    Aggregate gameMap;
    Iterator *mapObj = gameMap.createIterator(farms);


    printMap(farms);


    return 0;
}
