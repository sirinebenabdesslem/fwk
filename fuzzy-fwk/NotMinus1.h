#ifndef NOTMINUS1_H
#define NOTMINUS_H

#include "Not.h"
#include "Expression.h"

namespace fuzzy {
	template <typename T>
	class NotMinus1: public Not {
	public:
		virtual ~NotMinus1() const = default;
		virtual T evaluate(Expression<T> *expression) const;

	};

	template <typename T>
	T NotMinus1<T>::evaluate(Expression <T> *o) const {
		return (1 - o->evaluate());
	}

}




#endif
