#ifndef AND_H
#define AND_H

#include "BinaryExpression.h"
#include "Expression.h"

namespace fuzzy{
	template <typename T>
	class And : public BinaryExpression <T> {
	public:
		virtual ~And() = default;

	};
}







#endif 
