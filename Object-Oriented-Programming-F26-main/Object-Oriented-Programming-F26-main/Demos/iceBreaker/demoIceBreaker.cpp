#include<iostream>
#include<fstream>

using namespace std;

int ranGen(){
    int randomNumber = rand() % 6;  // 0 through 5
    // cout << randomNumber << endl;
    return randomNumber;
}

/**
 * @brief reads out the contents of the filename
 * 
 * @param filename :string 
 */
void readFile(string filename, vector<string> & vec) {

   ifstream inputFile(filename);

    //error handling
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file\n";
        return;
    }

    string line;

    while (getline(inputFile, line)) {
        vec.push_back(line);
    }

    inputFile.close();
    return;
}
/**
 * @brief writes to filename with the first column from v0, second column from v1
 * 
 * @param filename: string
 * @param v0: vector<string> (for students names)
 * @param v1: vector<string> (for questions)
 */
void writeFile(string filename, vector<string> v0, vector<string> v1){

    ofstream outputFile(filename);
     if (!outputFile) {
        cout << "Error: Could not create data.csv" << endl;
    }

    // User-provided values
    for(int i = 0; i < v0.size(); i++){
        outputFile << v0[i] << "," << v1[ranGen()] << endl;
    }
    outputFile.close();

}

/**
 * @brief prompts the user to give a file to read
 * 
 */
void promptFile(vector<string> & v){
    cout << "file to read?\n";
    string myFile = "";
    cin >> myFile;
    readFile(myFile, v);
}



void printVec(vector<string> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
}


int main()
{
    srand(time(nullptr));
    vector<string> roster;
    vector<string> qBank;
    readFile("2310_F26_Rosters.csv", roster);
    readFile("Questions.csv", qBank);
    // printVec(roster);
    // printVec(qBank);

    // cout << "Size of roster: " << roster.size() << endl; 
    // cout << "Size of qBank: " << qBank.size() << endl;

    writeFile("Student_question_bank.csv",roster, qBank);

}