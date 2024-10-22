#pragma once
class Zveno {
private:
	int info;
	Zveno* next;
public:
	Zveno(int info = 0) {
		this->info = info;
		next = nullptr;
	}
	~Zveno() {
		next = 0;
	}
	Zveno(const Zveno& tmp) {
		info = tmp.info;
		next = 0;
	}
	Zveno& operator=(Zveno tmp) {
		info = tmp.info;
		return *this;
	}
	int getInfo() {
		return info;
	}
	Zveno* getNext() {
		return next;
	}
	void setInfo(int val) {
		info = val;
	}
	void setNext(Zveno* tmp) {
		next = tmp;
	}
};