#ifndef SEGMENT_TREE
#define SEGMENT_TREE 1
 
class SegmentTree {
private:
	vector<llong> _tree;
	llong _size;
	
	void _init(llong n) {
		_size = 1;
		while (_size < n) {
			_size *= 2;
		}
		_tree.assign(2 * _size - 1, 0);
	}
	
	void _build(const vector<llong>& v, llong x, llong lx, llong rx) {
		if (rx - lx == 1) {
			if (lx < v.size()) {
				_tree[x] = v[lx];
			}
		} else {
			llong mid = (lx + rx) / 2;
			_build(v, 2 * x + 1, lx, mid);
			_build(v, 2 * x + 2, mid, rx);
			_tree[x] = _tree[2 * x + 1] + _tree[2 * x + 2];
		}
	}
	
	void _set(llong i, llong v, llong x, llong lx, llong rx) {
		if (rx - lx == 1) {
			_tree[x] = v;
			return;
		}
		llong mid = (lx + rx) / 2;
		if (i < mid) {
			_set(i, v, 2 * x + 1, lx, mid);
		} else {
			_set(i, v, 2 * x + 2, mid, rx);
		}
		_tree[x] = _tree[2 * x + 1] + _tree[2 * x + 2];
	}
	
	llong _sum(llong l, llong r, llong x, llong lx, llong rx) {
		if (l >= rx || lx >= r) {
			return 0;
		}
		if (lx >= l && rx <= r) {
			return _tree[x];
		}
		llong mid = (lx + rx) / 2;
		llong s1 = _sum(l, r, 2 * x + 1, lx, mid);
		llong s2 = _sum(l, r, 2 * x + 2, mid, rx);
		return s1 + s2;
	}
public:
	SegmentTree(llong n) { _init(n); }
	
	SegmentTree(const vector<llong>& v) {
		_init(v.size());
		_build(v, 0, 0, _size);
	}
	
	void set(llong i, llong v) { _set(i, v, 0, 0, _size); }
	
	llong sum(llong l, llong r) { return _sum(l, r, 0, 0, _size); }
};
 
class QSegmentTree {
public:
	class Node {
	private:
		llong _min;
		llong _count;
	public:
		Node(llong min, llong cnt) {
			_min = min;
			_count = cnt;
		}
		
		const llong min() const { return _min; }
		
		const llong count() const { return _count; }
	};
private:
	Node _combine(Node x, Node y) {
		if (x.min() < y.min()) {
			return x;
		} elif (x.min() > y.min()) {
			return y;
		}
		return Node(x.min(), x.count() + y.count());
	}
	
	const Node _NULL = Node(LLONG_MAX, 0);
	
	vector<Node> _tree;
	llong _size;
	
	void _init(llong n) {
		_size = 1;
		while (_size < n) {
			_size *= 2;
		}
		_tree.assign(2 * _size - 1, Node(0, 0));
	}
	
	void _build(const vector<llong>& v, llong x, llong lx, llong rx) {
		if (rx - lx == 1) {
			if (lx < v.size()) {
				_tree[x] = Node(v[lx], 1);
			}
		} else {
			llong mid = (lx + rx) / 2;
			_build(v, 2 * x + 1, lx, mid);
			_build(v, 2 * x + 2, mid, rx);
			_tree[x] = _combine(_tree[2 * x + 1], _tree[2 * x + 2]);
		}
	}
	
	void _set(llong i, llong v, llong x, llong lx, llong rx) {
		if (rx - lx == 1) {
			_tree[x] = Node(v, 1);
			return;
		}
		llong mid = (lx + rx) / 2;
		if (i < mid) {
			_set(i, v, 2 * x + 1, lx, mid);
		} else {
			_set(i, v, 2 * x + 2, mid, rx);
		}
		_tree[x] = _combine(_tree[2 * x + 1], _tree[2 * x + 2]);
	}
	
	Node _calc(llong l, llong r, llong x, llong lx, llong rx) {
		if (l >= rx || lx >= r) {
			return _NULL;
		}
		if (lx >= l && rx <= r) {
			return _tree[x];
		}
		llong mid = (lx + rx) / 2;
		Node s1 = _calc(l, r, 2 * x + 1, lx, mid);
		Node s2 = _calc(l, r, 2 * x + 2, mid, rx);
		return _combine(s1, s2);
	}
public:
	QSegmentTree(llong n) { _init(n); }
	
	QSegmentTree(const vector<llong>& v) {
		_init(v.size());
		_build(v, 0, 0, _size);
	}
	
	void set(llong i, llong v) { _set(i, v, 0, 0, _size); }
	
	Node calc(llong l, llong r) { return _calc(l, r, 0, 0, _size); }
};

#endif // SEGMENT_TREE
