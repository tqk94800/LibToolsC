#ifndef HASHMAP_H
#define HASHMAP_H


typedef struct _keyValue
{
    void** key;
    void** value;

    _keyValue* self;

} keyValue;


typedef struct _hashMap
{
    keyValue* list;
    _hashMap self;
    size_t count;
    _hashMap (*create)(void);
    void (*insert)(void** key,void** value);
    void** (*get)(void** key);
    void (*delete)(void** key);

} hashMap;


#endif