

class stack {
    public:
        void push(int a);
        int pop();
        void clear();
        stack();
        ~stack();
        bool isEmpty();
    private:
        int top;
        int *dane;
};

