Download and install this template for Xcode when creating a C++ Godot class.

Once installed, Xcode will propose the *Godot Class* template when creating a new file from template (File&#160;→&#160;New&#160;→&#160;File&#160;from&#160;Template…).

<img src="https://github.com/NAERNON/godot-xcode-templates/blob/main/template_xcode_img.png" alt="An image displaying the Xcode template selection panel with the Godot template" height=400>

This template provides the header and C++ files for a Godot class.

### Header

```hpp
#ifndef my_node_hpp
#define my_node_hpp

#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

class MyNode : public Node3D {
    GDCLASS(MyNode, Node3D)
    
protected:
    static void _bind_methods();
    
public:
    MyNode();
    ~MyNode();
    
public: // MARK: Setup
    void _ready() override;
};

#endif /* my_node_hpp */
```

### C++

```c++
#include "my_node.hpp"

using namespace godot;

MyNode::MyNode() {}
MyNode::~MyNode() {}

void MyNode::_bind_methods() {}

// MARK: Setup

void MyNode::_ready() {}
```

## Installation

Download the project and place its content at ~Library/Developer/Xcode/Templates.

Restart Xcode and the template should be visible.
