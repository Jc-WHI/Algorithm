

/*class Stack {
    private:
    std::vector<int> data;
    
    public:
        void push(int x){
            data.push_back(x);
        }
        void pop(){
            if(!data.empty()){
                data.pop_back();
            }else{
                std:: cout <<"stack is full"<<std::endl;
            }
        }
        int top() const {
            if(!data.empty())
                return data.back();
        }
        
        bool isEmpty() const{
            return data.empty();
        }
*/
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    std::vector<int> data;

public:
    void push(int x) {
        data.push_back(x);
    }
    
    void pop() {
        if (!data.empty()) {
            cout << data.back() << endl;
            data.pop_back();
        } else {
            cout << -1 << endl;
        }
    }
    
    int top() const {
        if (!data.empty()) {
            return data.back();
        } else {
            return -1;
        }
    }
    
    bool isEmpty() const {
        return data.empty();
    }
    
    int size() const {
        return data.size();
    }
};

int main() {
    int a, c;
    string b;
    Stack list;

    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> b;
        if (b == "push") {
            cin >> c;
            list.push(c);
        } else if (b == "pop") {
            list.pop();
        } else if (b == "top") {
            cout << list.top() << endl;
        } else if (b == "size") {
            cout << list.size() << endl;
        } else if (b == "empty") {
            cout << (list.isEmpty() ? 1 : 0) << endl;
        }
    }

    return 0;
}
