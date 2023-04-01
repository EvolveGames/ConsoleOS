#ifndef UTIL_H
#define UTIL_H

#define NEW_LINE 10
#define RETURN 13
#define NULL 0

typedef unsigned char uint_8;
typedef unsigned short uint_16;
typedef unsigned int uint_32;
typedef unsigned long long uint_64;
typedef uint_32 size_t;

typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

// 0xFFFF = 11111111 8bit mask
#define low_16(address) (uint_16)((address) & 0xFFFF)  
// shift to right 
#define high_16(address) (uint_16)(((address) >> 16) & 0xFFFF)

char *to_string(size_t num, bool hexadecimal = false);
//write i/o port
void outb(unsigned short port, unsigned char val);
//read i/o port
unsigned char inb(unsigned short port);
//fill memory
void memset(void *ptr, uint_8 value, size_t num);
//memory copy
void *memcpy(void *dst, const void *src, size_t n);
//memory move
void memmove(void *dest, void *src, size_t n);
//string length
int string_length(const char *str);
//get any array length
template <typename T>
static size_t getArrayLength(T (&array));

class Event
{       
    typedef void (*Action)();
    private:
    Action* actions;
    uint_16 length = 0;
    Event() {
        actions = new Action[0];
    }

    ~Event() {
        delete[] actions;
    }
    public:
    static bool findAction(Action *src, Action to_find);
    void Add(Action void_to_add);
    void Invoke();
};

#endif