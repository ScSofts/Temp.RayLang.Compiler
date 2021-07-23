#pragma once
#include "./llvm-all.h"

namespace Ray{
    struct Type{
            llvm::Type *type = nullptr;
            bool isFunction = false;
            bool isArray    = false;
            bool isStruct   = false;
            bool isClass    = false;
            bool isString   = false;
            bool isSigned   = true;
            unsigned char arrayDegree = 0;
    };

    struct Variable{
        llvm::Type *type;
        llvm::Value *value;
    };

    template <class T = std::unique_ptr<llvm::IRBuilder<>> >
    Ray::Type getBasicType(llvm::StringRef name, T & irBuilder){
        Type _type{};
        
        if(name == "int8"){
        
            _type.type = irBuilder->getInt8Ty();
        
        }else if(name == "byte" || name == "uint8"){
        
            _type.type = irBuilder->getInt8Ty();
            _type.isSigned = false;
        
        }else if (name == "int16") {
        
            _type.type = irBuilder->getInt16Ty();
        
        }else if (name == "int32") {
        
            _type.type = irBuilder->getInt32Ty();
        
        }else if(name == "int64"){
        
            _type.type = irBuilder->getInt64Ty();
        
        }else if(name == "uint16"){
        
            _type.type = irBuilder->getInt16Ty();
            _type.isSigned = false;
        
        }else if(name == "uint32"){

            _type.type = irBuilder->getInt32Ty();
            _type.isSigned = false;

        }else if (name == "uint64") {
            _type.type = irBuilder->getInt64Ty();
            _type.isSigned = false;
        }else if(name == "void"){
            return irBuilder->getVoidTy();
        }
        

        return _type;
    }
};