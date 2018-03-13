#ifndef NOT_H
#define NOT_H

#include "UnaryExpression.h"

namespace fuzzy {
	template <typename T>
	class not {
	public:
		virtual ~not() = default;
		virtual T evaluate(Expression<T> *expression) const = 0;
	};
}











#endif 