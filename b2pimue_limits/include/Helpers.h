#ifndef b2pimue_helpers_h
#define b2pimue_helpers_h
#include <vector>

struct argumentHolder{
    int argc;
    //char** argv;
    std::vector<char*> argv;
    int seed=10;
    int tag = 1;
    std::string workspaceName="";

    argumentHolder(){}
    argumentHolder(int _argc,
                  std::vector<char*> _argv,
                  //char** _argv,
                  int _seed=10,
                  int _tag = 1,
                  std::string _workspaceName=""
            ){
    argc= _argc;
    argv= _argv;
    seed= _seed;
    tag = _tag;
    workspaceName= _workspaceName;
    };
};

#endif