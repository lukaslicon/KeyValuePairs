/*********************************************************************************
* Lukas Licon, llicon
* 2023 Winter CSE101 PA#7
* DictionaryTest.cpp
* 03/10/2023
* Test file for Dictionary functions
*********************************************************************************/
#include "Dictionary.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char * argv[]) {
    Dictionary test;
    int count = 1;
  
    test.setValue("plaices", count++); 
    test.setValue("ambusher", count++);
    test.setValue("crosby", count++);
    test.setValue("wattles", count++);
    test.setValue("pardoner", count++);
    test.setValue("pythons", count++);
    test.setValue("second", count++);
    test.setValue("forms", count++);
    test.setValue("impales", count++);
    test.setValue("pic", count++);  
  
  //print dictionary
    std::cout << "\nDictionary Test: size " << test.size() << endl;
    std::cout << test;
  // IF ALL OF THESE FUNCTIONS WORK THEN ALL FUNCTIONS WORK FOR DICTIONARY.CPP //
  
  //begin()
    std::cout << "\nbegin() Test: \n";
    test.begin();
    std::cout << "currentKey: " <<test.currentKey() << endl;
    std::cout << "currentVal: " <<test.currentVal()<< endl;
  //next()
    std::cout << "\nnext() Test: \n";
    test.next();
    std::cout << "currentKey: " <<test.currentKey()<< endl;
    std::cout << "currentVal: " <<test.currentVal()<< endl;
  //end()
    std::cout << "\nend() Test: \n";
    test.end();
    std::cout << "currentKey: " <<test.currentKey()<< endl;
    std::cout << "currentVal: " <<test.currentVal()<< endl;
  //prev()
    std::cout << "\nprev() Test: \n";
    test.prev();
    std::cout << "currentKey: " <<test.currentKey()<< endl;
    std::cout << "currentVal: " <<test.currentVal()<< endl;
  //pre_string()
    std::cout << "\npre_string() Test: \n";
    std::cout << test.pre_string();
  //to_string()
    std::cout << "\nto_string() Test: \n";
    std::cout << test.to_string();
  //contains()
    string check = " ";
    std::cout << "\ncontains() test: Type a word to check dictionary.\n";
    std::cin >> check;
    cout << (test.contains(check)?"true\n":"false\n");
  //remove()
    std::cout << "\nremove() test: Type a word to remove from dictionary.\n";
    std::cin >> check;
    if (test.contains(check)) {
        test.remove(check);
        cout << "Remove Successful!!!\n";
      } 
    else
        cout << "\nError: Word in not in the dictionary...\n";

  
  //equals operator
  Dictionary temp = test;
  std::cout << "\nCopied List of words:\n";
  std::cout << temp;
  cout << "\nChecking IF EQUAL: " << (temp==test?"true\n":"false\n");
  temp.remove("forms");
  std::cout << "CLEARING TEMP FOR TESTING: \n";
  temp.clear();
  std::cout << "CHECKING IF EQUAL AFTER CLEAR: " << (temp==test?"true\n":"false\n");
  
    return 0;
}
