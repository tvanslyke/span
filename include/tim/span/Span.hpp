#ifndef TIM_SPAN_SPAN_HPP
#define TIM_SPAN_SPAN_HPP

namespace tim {

inline namespace span {

template <class T, std::ptrdiff_t N = -1>
struct Span;

template <class T>
struct Span<T, -1> {
private:

public:
	using element_type           = T;
	using value_type             = std::remove_cv_t<T>;
	using index_type             = std::size_t;
	using difference_type        = std::ptrdiff_t;
	using pointer                = T*;
	using const_pointer          = const T*;
	using reference              = T&;
	using const_reference        = const T&;
	using iterator               = pointer;
	using const_iterator         = const_pointer;
	using reverse_iterator       = std::reverse_iterator<pointer>;
	using const_reverse_iterator = std::reverse_iterator<const_pointer>;

	Span()            = default;
	Span(const Span&) = default;
	Span(Span&&)      = default;

	Span& operator=(const Span&) = default;
	Span& operator=(Span&&)      = default;


private:
	T* data_ = nullptr;
	std::size_t size_ = 0u;
};

} /* inline namespace span */

} /* namespace tim */

#endif /* TIM_SPAN_SPAN_HPP */
