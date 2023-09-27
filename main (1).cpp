#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    float itemPrice;
    char itemChosen;
    char shoppingCart;
    float tax, total;
    string payment;
    int cash;

cout << "Welcome to Scamazon - We have got an absolutely wondeful deal for you TODAY!" << endl;

cout << "Currently in stock we have: " << endl; 

    cout << "[a] Let's Potato Chip Cost " << right << setw(15) << "$1.57" << endl;
    cout << "[b] Krispy Crepe cost " << right << setw(20) << "$3.50" << endl;
    cout << "[c] Ugh Boots cost " << right << setw(24) << "$10.75" << endl;
    cout << "[d] Mattel Hover Board cost" << right << setw(17) << "$399.99" << endl;
    cout << "[e] ACME Jet Propelled Unicycle cost " << right << setw(5) << "$1000.30" << endl;


    cout << "Choose a product to purchase >>  " << itemChosen;
    cin >> itemChosen;

    cout << endl;

    switch (itemChosen) {
    case 'a':
        cout << "You have added Let's Potato Chip to your cart" << endl;
        break;
    case 'b':
        cout << "You have added Krispy Crepe to your cart " << endl;
        break;
    case 'c':
        cout << "You have added Ugh Boots to your cart " << endl;
        break;
    case 'd':
        cout << "You have added Mattel Hover Board to your cart " << endl;
        break;
    case 'e':
        cout << "You have added ACME Jet Propelled Unicycle to your cart " << endl;
        break;
    default:
    cout << "You did not choose a valid option. An item has been placed in your cart for you " << endl;
    cout << endl;
    cout << "Flubber has been added to your cart" << endl;
    break;

    }


    cout << "Would you like to checkout y/n? >> ";
    cin >> shoppingCart;


if(shoppingCart != 'y'){
      cout << "No problem! Your item has been removed from your cart and put back on the virtual shelf."  
           << " Thank you for visiting Scamazaon - Please return soon!" << endl;
      exit(0);
  }


    if (shoppingCart == 'y') {

        if (itemChosen == 'a') {
            itemPrice = 1.57;
        }
        else if (itemChosen == 'b') {
            itemPrice = 3.50;
        }
        else if (itemChosen == 'c') {
            itemPrice = 10.75;
        }
        else if (itemChosen == 'd') {
            itemPrice = 399.99;
        }
        else if (itemChosen == 'e') {
            itemPrice = 1000.30;
        }
        else if(itemChosen == 'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'){
            itemPrice = 19.97;
        }
    

        tax = itemPrice * 0.095;
        total = itemPrice + tax;

        cout << "Subtotal is: $" << fixed << setprecision(2) << itemPrice << endl;
        cout << "Tax is: $" << fixed << setprecision(2) << tax << endl;
        cout << "Total is: $" << fixed << setprecision(2) << total << endl;
}
cout << endl;

    cout << "Would you like to pay with cash or card? (Cash/Card) >> ";
    cin >> payment;

    if (payment == "Card" || payment == "card") {
        cout << "Thank you! Your card will be billed $" << total << endl;
    }
    else if (payment == "Cash" || payment == "cash") {
        cout << "Please input the amount of cash >>  ";
        cin >> cash;
        if (cash >= total) {
            cout << "You have paid " << cash << " Thank you! Here is your change $" << cash - total << endl;
        }
        else {
            cout << "Whoops! You're missing $" << total - cash <<  " from your payment of $" << fixed << setprecision(2) << total << " Maybe next time!" << endl;
        }
    }
    else if (payment != "Cash" || payment !="cash" || payment != "Card" || payment != "card") {
        cout << "Error! Please try again and submit either cash or card." << endl;
  }
cout << "Thank you for visiting Scamazon please return soon" << endl;

}











