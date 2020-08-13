#include <iostream>
#include <unistd.h>
using namespace std;

/*The small functios */
void banner();
void loginpopup();
void loginverify(string user , string passtext);

/*This is the main from where i call my choosen functions*/
int main (){

  banner();
  loginpopup();
  




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
