#include <iostream>
using namespace std;
  class Complex { 
    double real;  
    double imaginary;
    public:
    Complex() : real(0), imaginary(0) {} 
    Complex(double r, double i) : real(r), imaginary(i) {}
    double getReal() const { return real; }     
    double getImaginary() const { return imaginary; }         
    void setReal(double new_real) { real = new_real; }            
    void setImaginary(double new_imaginary) { imaginary = new_imaginary; }      
    Complex operator+(const Complex &other) const {        
         return Complex(real + other.real, imaginary + other.imaginary);     }           
         Complex operator-(const Complex &other) const {         
             return Complex(real - other.real, imaginary - other.imaginary);     
             }          
            Complex operator*(const Complex &other)
            const {         
            double r = real * other.real - imaginary * other.imaginary;         
            double i = real * other.imaginary + imaginary * other.real;         
            return Complex(r, i);     }         
            void input() {         
                cout << "Enter real part: ";         
                 cin >> real;         
                cout << "Enter imaginary part: ";         
                    cin >> imaginary;     }      
                    friend ostream &operator<<(ostream &out, const Complex &c); };  
                    ostream &operator<<(ostream &out, const Complex &c) {     
                        out << c.real;     
                        if (c.imaginary != 0) {         
                            if (c.imaginary > 0) {             
                                out << "+";             
                                if (abs(c.imaginary) != 1) 
                                cout << c.imaginary;         } 
                                else {             
                                    cout << "-";             
                                    if (abs(c.imaginary) != 1) 
                                    cout << -c.imaginary;         }          
                                    cout << "i";     }     
                                    return out; }  
                                    int main() {     
                                        Complex a, b;     
                                        a.input();     
                                        b.input();     
                                        cout << "Sum of " << a << " and " << b << " = " << a + b << endl;     
                                        cout << "Subtraction of " << b << " from " << a << " = " << a - b << endl;     
                                        cout << "Product of " << a << " and " << b << " = " << a * b << endl;     
                                        return 0; }