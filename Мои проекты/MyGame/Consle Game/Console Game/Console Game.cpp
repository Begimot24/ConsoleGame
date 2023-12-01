#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
#include <windows.h>

using namespace std;
using namespace chrono;
using namespace this_thread;


string message1 = "You're sitting in your office";
string message2 = "... it's dark and uncomfortable...";
string message3 = "You don't like this place";
string message4 = "Those shadows scare the freak out of you";
string message5 = "You feel like you're not alone";
string message6 = "You regret your career choices";

//Here are the functions for actions player can do in the office


void cameras()
{
    cout << "Which camera to select?\n\n 1)Stage\n2)Party Room\n3)Kitchen\n4)Parts&Service\n5)Pirate Cove\n6)Rest Room\n7)Left Hall\n8)Right Hall\n";
    int camera_choice;
    switch (camera_choice) {
    case(1):
        cout << "Bonnie, Freddy and Chica are on the stage";
        break;
    case(2):
        cout << "Nothing here";
        break;
    case(3):
        cout << "CAMERA ERROR";
    case(4):
        cout << "Animatronic suits and endo-skeletons are stored here";
        break;
    case(5):
        cout << "The cove is closed";
        break;
    case(6):
        cout << "There's nobody";
        break;
    case(7):
        cout << "Nothing";
        break;
    case(8):
        cout << "Nothing";
        break;
    default:
        cout << "You must select one option";
        break;
    }

}

void doors()
{
    void gip();
    cout << "Actions: 1)Left Door\n2)Right Door";

    //Door states
    int door_choice;
    int left_door_action;
    string left_door_state = "open";
    int right_door_action;
    string right_door_state = "open";

    cin >> door_choice;

    if (door_choice == 1) {
        cout << "1)Light 2)Close/Open";
        cin >> left_door_action;

        if (left_door_action == 1)
        {
            cout << "There's nobody";
        }
        else if (left_door_action == 2)
        {
            if (left_door_state == "open") {
                cout << "You closed the left door";
                left_door_state = "closed";
            }
            else if (left_door_state == "closed") {
                cout << "You opened the left door";
                left_door_state = "open";
            }
        }
    }
    else if (door_choice == 2)
    {
        cout << "1)Light 2)Close/Open";
        cin >> right_door_action;

        if (left_door_action == 1)
        {
            cout << "There's nobody";
        }
        else if (left_door_action == 2)
        {
            if (right_door_state == "open") {
                cout << "You closed the right door";
                left_door_state = "closed";
            }
            else if (right_door_state == "closed") {
                cout << "You opened the right door";
                left_door_state = "open";
            }
        }
    }
    gip();
}

void time_check() {
    void gip();
    int time = 12;
    int hours = 6;
    for (int i = 0; i < hours; i++) {
        int new_time = time + i;
        sleep_for(minutes(1));
    }
    string leave_time_check = "Automatic leave in:\n";
    for (int i = 0; i < leave_time_check.length(); i++) {
        cout << leave_time_check[i];
        for (int i = 1; i < 5; i++) {
            cout << i << "\n";
            Sleep(100);
        }
        system("cls");
        gip();
    }
}

void game_process()
{
    string night_num = "Night 1";
    for (int i = 0; i < night_num.length(); i++) {
        cout << night_num[i];
        Sleep(85);
    }

    sleep_for(seconds(3));
    system("cls");

    
    for (int i = 0; i < message1.length(); i++)
    {
        cout << message1[i];
        Sleep(50);
    }
    sleep_for(seconds(1));
    for (int i = 0; i < message2.length(); i++) {
        cout << message2[i];
        Sleep(135);
    }
    cout << "Options:\n\n1)Watch the cameras\n2)Check the doors\n3)Check the time\n";
    int choice;
    switch (choice) {
    case(1):
        cameras();
        break;
    case(2):
        doors();
        break;
    case(3):
        time_check();
        break;
    default:
        cout << "Please select one of the options";
    }
}

void choice()
{
    int choice;
    switch (choice)
    {
    case 1:
        cameras();
        break;
    case 2:
        doors();
        break;
    case 3:
        time_check();
        break;
    }


    void gip();{
    string message1 = "You're sitting in your office";
    string message2 = "... it's dark and uncomfortable...";
    for (int i = 0; i < message1.length(); i++)
    {
        cout << message1[i];
        Sleep(50);
    }
    sleep_for(seconds(1));
    for (int i = 0; i < message2.length(); i++) {
        cout << message2[i];
        Sleep(135);
    }
    cout << "Options:\n\n1)Watch the cameras\n2)Check the doors\n3)Check the time\n4)Sleep";
}



    void greeting();
{
    int a = 1;
    string decision;
    while (a ==1) {
        cout << "\t\t\t Welcome new player!\n\n\n" << "Would you like to start a new game?\nYes/No\n";
        cin >> decision;
        if (decision == "Yes"|| decision == "yes")
        {
            system("cls");
            a = 0;
            game_process();
        }
        else
        {
            "Cya again!";
            string bye_message = "...next time soon...";
            for (int i = 0; i < bye_message.length(); i++) {
                cout << bye_message[i];
                Sleep(101);
            }
        }
        system("cls");
    }
    
}

int main()
{
    greeting();
}
