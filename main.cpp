#include <iostream>
using namespace std;


 int PRICEOFRICE = 750;
 int PRICEOFPULSE = 250;
 int PRICEOFFRUITS = 450;
 int PRICEOFOIL = 850;
 int PRICEOFVEGETABLES = 350;
 int PRICEOFHOMECLEANER = 150;
 int PRICEOFCOLDDRINKS = 300;
 int PRICEOFBABYFOOD = 950;

void Rice(int &totalCost);
void Pulse(int &totalCost);
void Fruits(int &totalCost);
void Oil(int &totalCost);
void Vegetables(int &totalCost);
void Homecleaner(int &totalCost);
void Colddrinks(int &totalCost);
void Babyfood(int &totalCost);

int main() {
    int choice = 0;
    char continueShopping;
    int totalCost = 0;

    cout << "**********************HOWRAH SHOPPING STORE**********************" << endl;
    cout << "140, Santragachi Howrah" << endl;
    cout << "________________________________________" << endl;
    cout<<"email at: adas877762916290@gmail.com"<<endl;
    cout<<"co-founder:Anirban Das"<<endl;
    cout << "Welcome" << endl;
    cout << "Our items: " << endl;
    cout << "____________" << endl;
    cout << "1. Rice - " << PRICEOFRICE << "/kg" << endl;
    cout << "2. Pulse (Mussor, Chola, Moog) - " << PRICEOFPULSE << "/kg" << endl;
    cout << "3. Fruits(Mango,banana ,guava,cucumber,apple) - " << PRICEOFFRUITS << "/kg" << endl;
    cout << "4. Oil (Sunrise, Soya,fortune) - " << PRICEOFOIL << "/kg" << endl;
    cout << "5. Vegetables - " << PRICEOFVEGETABLES << "/kg" << endl;
    cout << "6. Home cleaner - " << PRICEOFHOMECLEANER << "/l" << endl;
    cout << "7. Cold-Drinks - " << PRICEOFCOLDDRINKS << endl;
    cout << "8. Baby food - " << PRICEOFBABYFOOD << endl;

    do {
        cout << "Choose one from the below options..." << endl;
        cout << "\n1. Rice \n2. Pulse (Mussor, Chola, Moog)\n3. Fruits\n4. Oil (Sunrise, Soya)\n5. Vegetables\n6. Home cleaner\n7. Cold drinks\n8. Baby food" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Rice(totalCost);
                break;
            case 2:
                Pulse(totalCost);
                break;
            case 3:
                Fruits(totalCost);
                break;
            case 4:
                Oil(totalCost);
                break;
            case 5:
                Vegetables(totalCost);
                break;
            case 6:
                Homecleaner(totalCost);
                break;
            case 7:
                Colddrinks(totalCost);
                break;
            case 8:
                Babyfood(totalCost);
                break;
            default:
                cout << "Please enter a valid choice." << endl;
        }

        cout << "Do you want to shop again? (y/N): ";
        cin >> continueShopping;

    } while (continueShopping == 'y' || continueShopping == 'Y');

     cout << "Shopping done. Total cost: " << totalCost << " rupees. Thank you! visit again..." << endl;
   
}

void Rice(int &totalCost) {
    totalCost += PRICEOFRICE;
    cout << "You added Rice to your shopping list." << endl;
}

void Pulse(int &totalCost) {
    totalCost += PRICEOFPULSE;
    cout << "You added Pulse to your shopping list." << endl;
}

void Fruits(int &totalCost) {
    totalCost += PRICEOFFRUITS;
    cout << "You added Fruits to your shopping list." << endl;
}

void Oil(int &totalCost) {
    totalCost += PRICEOFOIL;
    cout << "You added Oil to your shopping list." << endl;
}

void Vegetables(int &totalCost) {
    totalCost += PRICEOFVEGETABLES;
    cout << "You added Vegetables to your shopping list." << endl;
}

void Homecleaner(int &totalCost) {
    totalCost += PRICEOFHOMECLEANER;
    cout << "You added Home cleaner to your shopping list." << endl;
}

void Colddrinks(int &totalCost) {
    totalCost += PRICEOFCOLDDRINKS;
    cout << "You added Cold drinks to your shopping list." << endl;
}

void Babyfood(int &totalCost) {
    totalCost += PRICEOFBABYFOOD;
    cout << "You added Baby food to your shopping list." << endl;
}

 