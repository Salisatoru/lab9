#include <iostream>
#include<string>
using namespace std;

int main(){
    string status;
    int age , height , property;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        if (height < 160){
            status =  "UNFRIEND";
        }
        else if (height < 175){
            status =  "FRIEND";
        }
        else{
            cout << "Enter your property: ";
            cin >> property;
            if (property > 69000000){
                status =  "MARRIED";
            }
            else {
                status =  "ONE-NIGHT-STAND";
            }
        }
    }
    else if (age < 30){
        cout << "Enter your property: ";
        cin >> property;
        if (property > 10000000){
            status =  "BEST FRIEND";
        }
        else{
            status =  "UNFRIEND";
        }
    }
    else{
        status =  "UNFRIEND";
    }
    cout << "Your status = " << status;
    return 0;
}


#include <iostream>
#include<string>
using namespace std;

int main(){
    string character;
    int age , height , bounty;
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100){
            character =  "Chopper";
        }
        else if (height < 180){
            character =  "Usopp";
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000){
                character =  "Zoro";
            }
            else {
                character =  "Sanji";
            }
        }
    }
    else if (age <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty > 500000000){
            character =  "Jinbe";
        }
        else{
            character =  "Franky";
        }
    }
    else{
        character =  "Brook";
    }
    cout << "Your character = " << character;
    return 0;
}
