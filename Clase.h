class Clase{
    private: // Atributos
        int num1, num2;
    
    public: // Metodos
        Clase(int n1, int n2){
            num1 = n1; 
            num2 = n2;
        }
        Clase(){
            num1 = 0;
			num2 = 0;
        }
        
        void SetNum1(int n1);
        void SetNum2(int n2);
        int getNum1();
        int getNum2();
};

void Clase::SetNum1(int n1){
    num1 = n1;
}
void Clase::SetNum2(int n2){
    num2 = n2;
}
int Clase::getNum1 (){
    return num1;
}
int Clase::getNum2(){
    return num2;
}