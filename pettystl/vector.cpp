namespace pettystl {
    template<typename T> class vector<T> {
        private:
            int length;
            int capacity;
            T * data;
    };
}