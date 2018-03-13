#ifndef BINARYEXPRESSIONMODEL_H
#define BINARYEXPRESSIONMODEL_H

#include "BinaryExpression.h"
#include "Expression.h"
#include <iostream>

namespace core {
	template <typename T>
	class BinaryExeptionModel : public BinaryExpression <T>, public Expression <T> {
	public:
		virtual ~BinaryExpressionModel() = default;
		BinaryExpressionModel(Expression <T> *l, Expression<T> *r);

		virtual T evaluate();
		virtual T evaluate(Expression<T> *l, Expression<T> *r);

	private:
		Expression<T> r;
		Expression<T> l;
	};

	template <typename T>
	BinaryExpressionModel<T>::evaluate() const {
		if (left != null && right != null)
			return evaluate(left, right);
	}

	template <typename T> 


}












#endif
