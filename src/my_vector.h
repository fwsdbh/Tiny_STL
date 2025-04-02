#pragma once

#include <algorithm>
#include <type_traits>

namespace Tiny_STL {

	template<typename T, typename Alloc = std::allocator<T>>
	class Vector{
	private:
		T* start_;		// 指向vector容器的起始位置。
		T* finish_;		// 指向当前最后一个元素的末尾位置。
		T* endOfStorage_;// 指向整个vector容器所占用内存空间的末尾位置。
		
		using dataAllocator = Alloc;
	public:
		using value_type	= T;
		using iterator		= T*;
		using const_iterator = const T*;
		using reverse_iterator = reverse_iterator_t<T*>;


	};	//end of Vector

} // Tiny_STL