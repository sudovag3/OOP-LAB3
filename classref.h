class ClassRef {
    private:
        int& ref;

    public:
        ClassRef(int& r) : ref(r) {}
        int& getRef() {
            return ref;
        }
};