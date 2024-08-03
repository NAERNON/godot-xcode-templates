//___FILEHEADER___

#ifndef ___FILEBASENAME____hpp
#define ___FILEBASENAME____hpp

#include <godot_cpp/classes/___VARIABLE_superclassFileName___.hpp>

using namespace godot;

class ___VARIABLE_className___ : public ___VARIABLE_superclassName___ {
    GDCLASS(___VARIABLE_className___, ___VARIABLE_superclassName___)
    
protected:
    static void _bind_methods();
    
public:
    ___VARIABLE_className___();
    ~___VARIABLE_className___();
    
public: // MARK: Setup
    void _ready() override;
};

#endif /* ___FILEBASENAME____hpp */
