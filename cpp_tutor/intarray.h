#include <stddef.h>

class IntArray{
    private:
        int * _array = nullptr;
        size_t _arrayLength = 0;
    public:
    IntArray( size_t size){
        _array = new int[size];
        _arrayLength = size;
    }

    ~IntArray(){
        delete [] _array;
    }

    size_t getLength(){
        return _arrayLength;
    }

};