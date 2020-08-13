#include <iostream>
#include <unistd.h>
using namespace std;


void loginverify(string user , string passtext);

int main (){

  string username , password;


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

  cout <<"USERNAME:";
  getline(cin, username);
  cout <<"\n";
  cout <<"PASSWORD:";
  getline(cin, password);

  loginverify(username, password);


  return 0;

}



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
