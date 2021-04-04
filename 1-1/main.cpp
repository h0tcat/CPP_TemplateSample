#include <iostream>

template<class T>

class Array{
	private:
		T data[5];
	public:
		void setData(int num,T d);
		T getData(int num);
};

template<class T>
void Array<T>::setData(int num,T d){
	if(num<0 || num>4)
		std::cout << "配列の範囲を超えています" << std::endl;
	else
		data[num]=d;
}

template<class T>
T Array<T>::getData(int num){
	if(num<0 || num>4){
		std::cout << "配列の範囲を超えています" << std::endl;
		return data[0];
	}else
		return data[num];
}

int main(void){
	std::cout << "int型の配列を作成します" << std::endl;
	Array<int> intArray;
	
	for(int i=0;i<5;i++){
		intArray.setData(i,5*i);
	}
	for(int i=0;i<5;i++){
		std::cout << intArray.getData(i) << std::endl;
	}

	std::cout << "double型の配列を作成します。" << std::endl;
	Array<double> doubleArray;
	for(int i=0;i<5;i++){
		doubleArray.setData(i,static_cast<double>(i)*1.0);
	}

	for(int i=0;i<5;i++)
		std::cout << doubleArray.getData(i) << std::endl;


	return 0;
}
