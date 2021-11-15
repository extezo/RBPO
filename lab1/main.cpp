#include <iostream>
#include <string>
using namespace std;

unsigned short personHeight;

unsigned short ReadPersonAge() {
    unsigned short age;
    cin >> age;
    return age;
}

string ReadPersonName() {
    string name;
    cin >> name;
    return name;
}

void ReadPersonHeight() {
    cin >> personHeight;
}

void ReadPersonWeight(unsigned short &weight) {
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cin >> *salary;
}

void ReadPersonData(string &name, unsigned short &age, string &salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    double doubleSalary;
    ReadPersonSalary(&doubleSalary);
    salary = to_string(doubleSalary);
}

void ReadPersonData(string &name, unsigned short &age, string &height, string &weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    height = to_string(personHeight);
    unsigned short personWeight;
    ReadPersonWeight(personWeight);
    weight = to_string(personWeight);
}

void WritePersonData (unsigned short age, string &name, const string &height = "", const string &weight = "", const string &salary = "") {
    cout << name << endl << to_string(age) << endl << height << endl << weight << endl << salary << endl;
}

int main() {
    string name, height, weight, salary;
    unsigned short age;
    ReadPersonData(name, age, salary);
    WritePersonData(age, name, "", "",salary);
    ReadPersonData(name, age, height, weight);
    WritePersonData(age, name, height, weight);
    return 0;
}