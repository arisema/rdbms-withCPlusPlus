#include "database.h"


using namespace std;

DB::DB(string databaseName)
{
    name = databaseName;
}

string DB::getName()
{
    return name;
}

vector<Table<string>> DB::getAllTables()
{
    return tables;
}

int DB::getNumberOfTables()
{
    return tables.size();
}

Table<string> getTableInstance(string tableName)
{
    Table<string> table(tableName);
    return table;
}

void DB::createTable(string tableName)
{
    if(getTableIndex(tableName) != -1){
        Table<string> freshTable = getTableInstance(tableName);
        tables.push_back(freshTable);
    }
    else cout << "Table exists with the same name";
}

int DB::getTableIndex(string tableName)
{
    vector<Table<string>>::iterator iterator;
    int index = -1; // to serve as an error flag incase index not found.
    int i = 0;
    for(iterator = tables.begin(); iterator != tables.end(); ++iterator){
        Table<string> table=*iterator;
        if(table.getName() == tableName){
            index = i;
            break;
        }
        i++;
    }
    return index;
}

Table<string> DB::accessTable(string tableName)
{
    int index = getTableIndex(tableName);
    if(index != -1){
        Table<string> table = tables.at(index);
        return table;
    }
}

void DB::dropTable(string tableName)
{
    Table<string> dropTable = accessTable(tableName); 
    // tables.erase(dropTable);
}

vector<Table<string>> DB::joinTables(string table1Name, string table2Name, string clause)
{
    Table<string> table1 = accessTable(table1Name);
    Table<string> table2 = accessTable(table1Name);
    
}
