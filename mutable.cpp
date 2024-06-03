class MyClass {  
private:  
    int size;  
    mutable int cachedValue; // 这是一个可变的成员变量  
  
public:  
    MyClass(int s) : size(s), cachedValue(-1) {} // 构造函数初始化size和cachedValue  
  
    // 假设有一个耗时的计算函数，其结果被缓存在cachedValue中  
    int expensiveCalculation() const {  
        if (cachedValue == -1) { // 如果cachedValue未被计算过  
            cachedValue = /* 执行耗时的计算 */;  
        }  
        return cachedValue;  
    }  
  
    // 其他成员函数...  
  
    // 获取size的函数，因为是常量成员函数，所以不会修改size  
    int getSize() const {  
        return size;  
    }  
};