#ifndef USB_CONNECTION_H
#define USB_CONNECTION_H

#include <stack>

class USBConnection {
private:
    int id;
    USBConnection(int id) : id(id) {}

public:
    static USBConnection* CreateUsbConnection();
    int get_id() const { return id; }
    ~USBConnection();

    static std::stack<int> ids;
};


USBConnection* USBConnection::CreateUsbConnection() {
    if (!ids.empty()) {
        int id = ids.top();
        ids.pop();
        return new USBConnection(id);
    }
    return nullptr;
}

USBConnection::~USBConnection() {
    ids.push(id);
}
inline std::stack<int> USBConnection::ids = std::stack<int>({3, 2, 1});
#endif