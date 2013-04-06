/* This software is distributed under BSD 3-clause license (see LICENSE file).
 *
 * Copyright (c) 2012-2013 Sergey Lisitsyn
 */

#ifndef TAPKEE_DUMMY_CALLBACKS_H_
#define TAPKEE_DUMMY_CALLBACKS_H_

template<class Data>
struct dummy_feature_vector_callback
{
	inline void vector(const Data& i, tapkee::DenseVector& vector) const
	{
		throw tapkee::unsupported_method_error("Dummy feature vector callback is set");
	}
};

template<class Data>
struct dummy_kernel_callback
{
	inline tapkee::ScalarType kernel(const Data& a, const Data& b) const
	{
		throw tapkee::unsupported_method_error("Dummy kernel callback is set");
		return 0.0;
	}
};

template<class Data>
struct dummy_distance_callback
{
	inline tapkee::ScalarType distance(const Data& a, const Data& b) const
	{
		throw tapkee::unsupported_method_error("Dummy distance callback is set");
		return 0.0;
	}
};

#endif

