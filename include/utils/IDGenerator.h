
#include <DynamicArray.h>
class IDGenerator
{
    private:
    static int extractNum(const string & id, const string & prefix );
    public:
    static std::string generateID(
        const string & prefix,
        const DynamicArray <string> & exitIDs);



};