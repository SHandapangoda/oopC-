#include <iostream>

using namespace std;

class student{
private:
    string name;
    string Class;
    int id;

 public: void setName(string Name){
    name = Name;

 }

 public: void setClass(string Clz){
    Class = Clz;
 }

 public: void setID(int Id){
    id = Id;
 }

 public: int getID(){
    return id;
 }
 public: string getClass(){
    return Class;
 }
 public: string getName(){
     return name;
 }
    student(string Name, string clz, int ID){
     name= Name;
    Class = clz;
    id = ID;
    }

    void intro(){
    cout << name << endl;
    cout << Class << endl;
    cout << id << endl;
    }
};

int main()
{
   student st1 = student("Sithum","22",100);
   st1.intro();

   st1.setName("Handapangoda");

  cout <<  st1.getName() << endl;
}
