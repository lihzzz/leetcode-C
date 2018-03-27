//
// Created by lh on 2018/3/10.
//

#ifndef LEETCODE_RTTI_H
#define LEETCODE_RTTI_H


#include <cstdint>
#include <array>

#if !defined(RTTI_CHAIN_MAX_SIZE)
#define RTTI_CHAIN_MAX_SIZE 32
#endif


namespace rttilib{

    class rtti{
    protected:
        std::array<std::intptr_t ,RTTI_CHAIN_MAX_SIZE> inherChainID;
        std::array<void*,RTTI_CHAIN_MAX_SIZE> inherChainPtr;
        int inherChainCounter;

        rtti():inherChainCounter(-1){
            for(auto& id:inherChainID) id = -1;
            for(auto& ptr:inherChainPtr) ptr = 0;
        }

    public:
        virtual ~rtti(){}

        inline void* getPtrKindOf(std::intptr_t type){
            for(int i = 0;i<=inherChainCounter;i++){
                if(inherChainID[i] == type)
                    return inherChainPtr[i];
            }
            return nullptr;
        }

        inline bool isKindOf(std::intptr_t type){
            return getPtrKindOf(type) == nullptr?false:true;
        }
    };



    template <typename T>
    class rttiport: public virtual rtti{
    public:
        static std::intptr_t id ;
    public:
        static std::intptr_t type();

    protected:
        rttiport(){
            inherChainCounter++;
            inherChainID[inherChainCounter] = type();
            inherChainPtr[inherChainCounter] = static_cast<T*>(this);
        }
        virtual ~rttiport(){}
    };
    template<typename T>
    std::intptr_t rttiport<T>::id = 0;
    template<typename T>
    std::intptr_t rttiport<T>::type() {
        // 此处我们要把 id 的地址的位模式进行重新解释，所以使用 reinterpret_cast
        return reinterpret_cast<std::intptr_t>(&id);
    }
    // 提供另一种检查 obj 指向的对象是否为 T 类型的对象
    template<typename T>
    static bool is(rtti *obj) {
        if(obj == nullptr)
            return false;
        return obj->getPtrKindOf(rttiport<T>::type()) != nullptr;
    }

}

#endif //LEETCODE_RTTI_H
