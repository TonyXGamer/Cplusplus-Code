#include <iostream>
#include "weapon.h"
#include <vector>
#include <conio.h>
void printDetails(weapon* weapon);
void Sweapons();
int SwordC(int&);
void AWeapons();
int AxeC(int&);
void SpWeapons();
int SpearC(int&);
void ShWeapons();
int ShieldC(int&);
void Wclass();
void BowWeapons();
int BowC(int&);
int pick(int&);
void Loop(int&);

int main()
{
	std::vector < weapon*> equipmentbag;
	equipmentbag.push_back(new sword);
	equipmentbag.push_back(new axe);
	equipmentbag.push_back(new spear);
	equipmentbag.push_back(new shield);
    equipmentbag.push_back(new bow);


		int balance = 50000;
        std::cout << "----------------------------------" << std::endl;
		std::cout << "| Welcome to Tony's Weapon Shop! |" << std::endl;
        std::cout << "----------------------------------" << std::endl;
		std::cout << " Your Balance: " << balance << "\n";
		pick(balance);
        Loop(balance);
}
void printDetails(weapon* weapon)
{
std::cout << "Item Name: " << weapon->statsName() << "\n";
std::cout << "Item Enchant: " << weapon->statEnchant() << "\n";
std::cout << "Price: " << weapon->statValue() << "\n";
}

void Sweapons()
{
    std::cout << "\n";
    std::cout << "1) Hell's Blade " << "\n";
    std::cout << "2) Demonic Sword " << "\n";
    std::cout << "3) Shadow Blade " << "\n";
    std::cout << "4) Heroic Sword " << "\n\n";
}

int SwordC(int& balance)
{
    sword* item = new sword;
    int items;
    char answer;
    std::cout << "Please select an item to check it's stats: ";
    std::cin >> items;
    std::cout << "\n";
    if (items == 1)
    {

        item->set_stats("Hell's Blade", Fire, 1000);
        printDetails(item);
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;


        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 1000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 2)
    {
        printDetails(new sword("Demonic Sword", Dark, 2000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?(Y/N): ";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 2000; // balance = balance - 2000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 3)
    {
        printDetails(new sword("Shadow Blade", Dark, 3000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 3000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 4)
    {
        printDetails(new sword("Heroic Sword", Light, 4000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 4000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);

        }
    }
    else
    {
        std::cout << "Invalid Item!";
    }
    return items;

}
void AWeapons()
{
    std::cout << "1) Hell's Axe\n";
    std::cout << "2) Demoinc Axe\n";
    std::cout << "3) Shadow Axe\n";
    std::cout << "4) Heroic Axe\n\n";
}
int AxeC(int& balance)
{
    axe* item = new axe;
    char answer;
    int items;
    std::cout << "Please select an item to check it's stats: ";
    std::cin >> items;
    std::cout << "\n";
    if (items == 1)
    {
        item->set_stats("Hell's Axe", Fire, 1000);
        printDetails(item);
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 1000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 2)
    {
        printDetails(new axe("Demonic Axe", Dark, 2000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 2000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 3)
    {
        printDetails(new axe("Shadow Axe", Dark, 3000));std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 3000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 4)
    {
        printDetails(new axe("Heroic Axe", Light, 4000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 4000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else
    {
        std::cout << "Invalid Item!";
    }
    return items;
}
void SpWeapons()
{
    std::cout << "1) Hell's Spear\n";
    std::cout << "2) Demonic Spear\n";
    std::cout << "3) Shadow Spear\n";
    std::cout << "4) Heroic Spear\n";
}
int SpearC(int& balance)
{
    spear* item = new spear;
    int items;
    char answer;
    std::cout << "Please select an item to check it's stats: ";
    std::cin >> items;
    std::cout << "\n";
    if (items == 1)
    {
        item->set_stats("Hell's Spear", Fire, 1000);
        printDetails(item);
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 1000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 2)
    {
        printDetails(new spear("Demonic Spear", Dark, 2000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 2000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 3)
    {
        printDetails(new spear("Shadow Spear", Dark, 3000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 3000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 4)
    {
        printDetails(new spear("Heroic Spear", Light, 4000));std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 4000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else
    {
        std::cout << "Invalid Item!";
    }
    return items;
}
void ShWeapons()
{
    std::cout << "1) Rage Shield\n";
    std::cout << "2) Demonic Shield\n";
    std::cout << "3) Shadow Shield\n";
    std::cout << "4) Heroic Shield\n\n";

}
int ShieldC(int& balance)
{
    shield* item = new shield;
    int items;
    char answer;
    std::cout << "Please select an item to check it's stats: ";
    std::cin >> items;
    std::cout << "\n";
    if (items == 1)
    {
        item->set_stats("Rage Shield", Fire, 1500);
        printDetails(item);
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 1500;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 2)
    {
        printDetails(new shield("Demonic Shield", Dark, 2000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 2000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 3)
    {
        printDetails(new shield("Shadow Shield", Dark, 3000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 3000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 4)
    {
        printDetails(new shield("Heroic Shield", Light, 4000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 4000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else
    {
        std::cout << "Invalid Item!";
    }
    return items;

}
void Wclass()
{
    std::cout << " 1) Sword\n ";
    std::cout << "2) Axe\n ";
    std::cout << "3) Spear\n ";
    std::cout << "4) Shield\n ";
    std::cout << "5) Bow\n\n";
}

void BowWeapons()
{
    std::cout << "1) Aquatic Bow\n";
    std::cout << "2) Bow of the Heavens\n";
    std::cout << "3) Bow of tempest\n";
    std::cout << "4) Inferno Bow\n\n";

}
int BowC(int& balance)
{
    bow* item = new bow;
    int items;
    char answer;
    std::cout << "Please select an item to check it's stats: ";
    std::cin >> items;
    std::cout << "\n";
    if (items == 1)
    {
        item->set_stats("Aquatic Bow", Water, 1500);
        printDetails(item);
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 1500;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 2)
    {
        printDetails(new shield("Bow of the Heavens", Light, 2500));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 2000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 3)
    {
        printDetails(new shield("Bow of tempest", Wind, 3000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 3000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else if (items == 4)
    {
        printDetails(new shield("Inferno Bow", Fire, 4000));
        std::cout << "\n";
        std::cout << "Would you like to buy this item?\n\n";
        std::cout << "Y for Yes || N for No\n";
        std::cin >> answer;

        switch (answer)
        {
            case 'y': case 'Y':
                balance -= 4000;
                std::cout << "Your Balance is now $" << balance << "\n";
                std::cout << "Thank you for your purchase!";
                break;
            case 'n': case 'N':
                std::cout << "Thank you, Please come again!";
                break;
            default:
                std::cout << "Invalid input!";
                exit(1);
        }
    }
    else
    {
        std::cout << "Invalid Item!";
    }
    return items;

}

int pick(int& balance)
{
    int choose;
    do{
        std::cout << "Pick a Weapon class:\n";
        Wclass();
        std::cout << "Your Answer: ";
        std::cin >> choose;
        std::cout << "\n";

        if (choose == 1) {
            Sweapons();
            SwordC(balance);
        } else if (choose == 2) {
            AWeapons();
            AxeC(balance);
        } else if (choose == 3) {
            SpWeapons();
            SpearC(balance);
        } else if (choose == 4) {
            ShWeapons();
            ShieldC(balance);
        }else if( choose == 5 ) {
            BowWeapons();
            BowC(balance);
        }else {
            std::cout << "Invalid Input!\n";
        }
    }while(!(std::cin.fail()));
    return choose;
}

void Loop(int& balance)
{
    char input;
    std::cout << "\nWould you like to look around some more?\n";
    std::cin >> input;
    switch (input)
    {
        case 'Y': case 'y':
            pick(balance);
            break;
        case 'N': case 'n':
            return exit(1);
            break;

    }
}


