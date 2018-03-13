#ifndef UNARYEXPRESSION_H
#define UNARYEXPRESSION_H

#include "Expression.h"

namespace core {
	template <typename T>
	class UnaryExpression {
	public:
		virtual ~UnaryExpression() = default;
		virtual T evaluate(Expression<T> *expression) const = 0;
	};

}


#endif 
