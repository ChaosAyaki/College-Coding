template <typename T> class Mochila {
    private: 
        T * datos;
        int n;
    public:
        Mochila(int n);
        ~Mochila();
        
        void modificar(int i, T dato);

        T obtener(int i);
};