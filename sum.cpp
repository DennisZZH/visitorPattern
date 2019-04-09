//Author: Zihao Zhang
//Date: 4.2.2019

#include "sum.hpp"

void SumVisitor::visitNode(Node* node) {
	// Hint: for this function, you will need to to use the sum
	// member of the object.
	
	// WRITEME

	sum += node->value;
	node->visit_children(this);

}
