#include <iostream>
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
  cout << user << passtext;
}
