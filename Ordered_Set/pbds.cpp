#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T, typename cmp = less<T>>
using orderedSet = tree<T, null_type, cmp, rb_tree_tag, tree_order_statistics_node_update>;

#define upr upper_bound
#define low lower_bound
#define o_key order_of_key
#define f_order find_by_order
// int find(T __item) { return __item == *__os.find_by_order(__os.order_of_key(__item)) ? __os.order_of_key(__item) : -1; }
