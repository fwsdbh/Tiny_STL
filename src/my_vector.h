#pragma once

#include <algorithm>
#include <type_traits>

namespace Tiny_STL {

	template<typename T, typename Alloc = std::allocator<T>>
	class Vector{
	private:
		T* start_;		// ָ��vector��������ʼλ�á�
		T* finish_;		// ָ��ǰ���һ��Ԫ�ص�ĩβλ�á�
		T* endOfStorage_;// ָ������vector������ռ���ڴ�ռ��ĩβλ�á�
		
		using dataAllocator = Alloc;
	public:
		using value_type	= T;
		using iterator		= T*;
		using const_iterator = const T*;
		using reverse_iterator = reverse_iterator_t<T*>;


	};	//end of Vector

} // Tiny_STL