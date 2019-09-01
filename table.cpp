#include "table.h"


template <class t>
Table<t>::Table(string tableName)
{
    name = tableName;
}

template <class t>
void Table<t>::insertRow(vector<t> data)
{
    rows.insert(data);
}

template <class t>
set<vector<t>> Table<t>::fetchAllRows()
{
    return rows;
}

template <class t>
set<vector<t>> Table<t>::fetchSomeRows(t query)
{
    // to do
}

template <class t>
void Table<t>::deleteRow(vector<t> data)
{
    rows.erase(data);
}

template <class t>
bool Table<t>::isEmpty()
{
    return rows.empty();
}

template <class t>
int Table<t>::getSize()
{
    return rows.size();
}

template <class t>
string Table<t>::getName()
{
    return name;
}

template <class t>
void Table<t>::showAllRows(){
    for(auto row : rows){
        for(auto attr : row){
            cout << attr;
        }
        cout << endl;
    }
}

template class Table<string>;
