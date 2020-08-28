#include <iostream>
#include <unistd.h>
#include <dos.h>
using namespace std;

/*The small functios */
void banner();
void loginpopup();
void loginverify(string user , string passtext);
void command();

/*Some impotant  global varibles*/

bool isLoginpopup = false;

/*This is the main from where i call my choosen functions*/
int main (){



  banner();
  if(!isLoginpopup){
    loginpopup();

  }else{
    cout << "::Logged in::"<<"\n";
    cout <<"\n";
    cout <<"::Type Help For more information(case sensitive)::"<<"\n\n";
    command();
  }

  return 0;

}

/*The console banner*/
void banner(){
  cout <<"\n\n";
  cout << "----------A CONSOLE COMPUTER----------" << "\n";
  cout << "[             $$$$$                  ]" << "\n";
  cout << "[           $$   $$                  ]" << "\n";
  cout << "[          $$    $$                  ]" << "\n";
  cout << "[         $$     $$                  ]" << "\n";
  cout << "[         $$$$$$$$$$$$$$$$           ]" << "\n";
  cout << "[                $$                  ]" << "\n";
  cout << "[                $$                  ]" << "\n";
  cout << "[                $$                  ]" << "\n";
  cout << "[====================================]" << "\n";
  cout <<"\n\n";


}

/*The loginpop up function that brings the input for username and
  password*/
void loginpopup(){
  string username , password;
  cout <<"USERNAME:";
  getline(cin, username);
  cout <<"\n";
  cout <<"PASSWORD:";
  getline(cin, password);

  loginverify(username, password);

}

/*This is the login vrify method to check the pass and username*/
void loginverify(string user, string passtext){
  if(user == "root" && passtext == "toor"){
    cout <<"Succesfully login"<<"\n";
    isLoginpopup = true;
    system("cls");
    system("color a");
    main();
  }else {
    system("color 4");
    cout << "Wrong user name or password"<<"\n";
    cout << "Try again";
    usleep(499900);
    system("cls");
    system("color 7");
    main();
  }
}

//this is show date function.
void showDate(){
  struct date dt;
  getdate(&dt);
  cout <<"The Current date of your system is :[+]"<<"\n";
  cout <<"%d/%d/%d" << dt.da_day << dt.da_mon << dt.da_year;
}

/*This is command section where all the commands will be processed*/
void command(){
  string comin;
  cout <<"::YOUR COMMAND:> ";
  getline(cin, comin);
  if(comin == "Help"){
    cout << "-----THIS IS HELP SECTION------"<<"\n";
    cout <<"--------------------------------"<<"\n";
    cout <<"--------------------------------"<<"\n";
    cout <<"| application                  |"<<"\n";
    cout <<"| date                         |"<<"\n";
    cout <<"| id                           |"<<"\n";
    cout <<"| network                      |"<<"\n";
    cout <<"| time                         |"<<"\n";
    cout <<"|                              |"<<"\n";
    cout <<"|                              |"<<"\n";
    cout <<"|                              |"<<"\n";
    cout <<"|                              |"<<"\n";
    cout <<"|                              |"<<"\n";
    cout <<"--------------------------------"<<"\n";
    cout <<"--------------------------------"<<"\n";
    command();

  } else if (comin == "time"){
    cout <<"this is time"<<"\n";
    command();
  } else if (comin == "date"){
    cout <<"this is date"<<"\n";
    showDate();
    command();
  } else if (comin == "id"){
    cout << "this is ID"<<"\n";
    command();
  } else if (comin == "application"){
    cout << "this is application" <<"\n";
    command();
  } else if (comin == "network"){
    cout << "this is network"<<"\n";
    command();
  }
}
