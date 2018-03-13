#ifndef VALUEMODEL_H
#define VALUEMODEL_H

#include "Expression.h"

namespace core {
	template <typename T>
	class VirtualModel : public Expression<T> {
	public:
		virtual ~VirtualModel() = default;
		ValueModel() = default;

		virtual T evaluate() const;
		virtual void setValue(T *v);
	
	private:
		T value;
	};

	template <typename T>
	T ValueModel<T>::evaluate() const {
		return value;
	}

	template <typename T>
	void ValueModel<T>::setValue(T *v) {
		value = *v;
	}

}

#endif 
