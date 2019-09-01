#include <string>
#include <bits/stdc++.h>
#include "table.h"


using namespace std;

void drop(string type, vector<string> params)
{
    string db("db");
    string tb("tb");
    // schema checker
    if(type == db){
        cout << "db";
    }
    else if(type == tb){
        cout << "tb";
    }
    else{
        cout << "Could not perform query. Please check your syntax";
    }
}

void create(string type, vector<string> params)
{
    string db("db");
    string tb("tb");
    // schema checker
    if(type == db){
        cout << "db" << endl;
    }
    else if(type == tb){
        cout << "tb" << endl;
    }
    else{
        cout << "Could not perform query. Please check your syntax" << endl;
    }
}

void Interpreter(vector<string> query)
{
    string crt("create");
    string drp("drop");
    string ins("insert");
    if(query.at(0) == crt){
        create(query.at(1), query);
    }
    else if(query.at(1) == drp){
        cout << "drop" << endl;
    }
    else{
        cout << query.at(1) << "!" << endl;
    }
}

vector<string> readIn()
{
    vector<string> query;
    string str, word;
    getline(cin, str, ';');
    stringstream ss(str);
    while (getline(ss, word, ' ')) {
        query.push_back(word);
    }
    return query;
}

int main()
{
    
    // while(true){
        // vector<string> inD;
	    // inD = readIn();
        // Interpreter(inD);
        // cout << inD[0] << "before" << endl;
        // inD.clear();
        vector<Table<string>> db;
        Table<string> t("tableau");
        Table<string> t2("sth");

        // db.push_back(t);
        // db.push_back(t2);
        db.push_back(t);
        db.push_back(t2);
        
        vector<string> sth = {"sth", "another thing"};
        vector<string> blah = { "1", "2"};
        t.insertRow(blah);
        t2.insertRow(sth);
        for(auto table : db){
            auto a = table.fetchAllRows();
        for(auto b : a){
            for(auto c : b){
                cout << c << endl;
            }
        }
            cout << table.getName() << table.getSize() << endl;
            table.showAllRows();
        }
        auto a = t.fetchAllRows();
        for(auto b : a){
            for(auto c : b){
                cout << c << endl;
            }
        }
    // }
    
	return 0;
}
