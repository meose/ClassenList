#pragma once
#include "clist.h"

namespace list {
	class queue : public clist {
	public:
		queue() : clist() {};
		~queue() {};

		int Push(const int &);
		int Pop(void);
	};
}