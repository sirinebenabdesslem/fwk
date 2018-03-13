#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H


#include <iostream>
#include "Expression.h"
#include "UnaryExpression.h"

namespace core {
	template <typename T>
	class UnaryExeptionModel : public UnaryExpression <T>, public Expression <T> {
	public:
		virtual ~UnaryExpressionModel() = default;
		UnaryExpressionModel(Expression<T> *operand, UnaryExpression<T> *o);

		virtual T evaluate();
		virtual T evaluate(Expression<T> *expression);

	private:
		Expression<T> *operand;
		UnaryExpression<T> *o; //operateur
	};

	template <typename T>
	UnaryExpressionModel<T>::UnaryExpressionModel(Expression<T> *operand, UnaryExpression<T> *ope) : operand(operand), ope(ope){}

	template <typename T>
	UnaryExpressionModel<T>::evaluate() const {
		if (operand != null)
			return operator(operand);
	}

	template <typename T>
	UnaryExpressionModel<T>::evaluate(Expression<T> *expression) : expression(expression) {
		if (o != null)
			return operator.evaluate(o)
	}

}





#endif 