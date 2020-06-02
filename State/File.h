
#pragma once

#include <string>

class File{
    private:
        std::string name;
    public:
        File(std::string);
        std::string getName();
        ~File();
};

