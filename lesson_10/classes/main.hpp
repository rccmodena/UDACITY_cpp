#include<iostream>

using namespace std;

template <class T>
class Multiplier
{
    private:
        T m1;
        T m2;
        T product;
    public:
      Multiplier();
      void setM1(T m1In);
      void setM2(T m2In);
      void setProduct();
      void printEquation();
};

template<class T>
Multiplier<T>::Multiplier()
{
    
}

template<class T>
void Multiplier<T>::setM1(T m1In)
{
	m1 = m1In;
}

template<class T>
void Multiplier<T>::setM2(T m2In)
{
	m2 = m2In;
}

template<class T>
void Multiplier<T>::setProduct()
{
	product = m1 * m2;
}

template<class T>
void Multiplier<T>::printEquation()
{
	cout<<m1<<" x "<<m2<<" = "<<product;
}
