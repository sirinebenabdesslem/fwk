#ifndef EXPRESSION_H
#define EXPRESSION_H
 
namespace core {
	template <typename T>
	class Expression {
	public:
		virtual ~Expression() = default;
		virtual T evaluate() const = 0;
	};
}


#endif 