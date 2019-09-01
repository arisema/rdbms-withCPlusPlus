#include <iostream>
#include <vector>
#include <set>

using namespace std;

template <class t>
class Table
{
    private:
        string name;
        vector<t> schema;
        set<vector<t>> rows;
    public:
        Table(string tableName);
        void insertRow( vector<t> data);
        set<vector<t>> fetchAllRows();
        set<vector<t>> fetchSomeRows(t query);
        void deleteRow(vector<t> data);
        // void deleteRow(t query);
        bool isEmpty();
        int getSize();
        string getName();
        void showAllRows();
        // set<vector<t>>::iterator getIterator();
        // bool operator < (const Table<t>& table1);
        // constexpr bool std::operator<(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
        
};
