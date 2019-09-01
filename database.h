#include "table.h"


using namespace std;

class DB
{
    private:
        string name;
        vector<Table<string>> tables;
        int getTableIndex(string name);
        Table<string> accessTable(string tableName);
    public:
        DB(string databaseName);
        string getName();
        vector<Table<string>> getAllTables();
        int getNumberOfTables();
        void createTable( string tableName);
        void dropTable(string tableName);
        bool isEmpty();
        vector<Table<string>> joinTables(string table1, string table2, string clause);
        // set<vector<t>>::iterator getIterator();
        // bool operator < (const Table<t>& table1);
        // constexpr bool std::operator<(const std::pair<_T1, _T2>&, const std::pair<_T1, _T2>&)
        
};
