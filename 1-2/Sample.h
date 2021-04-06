#ifndef __SAMPLE_H__
#define __SAMPLE_H__
#include <iostream>
namespace nori{

	template<typename T>
	class Sample{
		private:
			T src;
		public:
			Sample(T src){
				this->src=src;
			};
			void Show(){
				std::cout << "this->srcの中身は :" << this->src << "です。" << std::endl;
			}
	};
};

#endif
