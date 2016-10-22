/**
 * Singleton Template Class
 * C++11
 */
#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template <typename T>
class Singleton
{
private:
    // Disable copy constructors and copy operators.
    Singleton(Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton operator=(Singleton&) = delete;
    Singleton operator=(Singleton&&) = delete;

protected:
    Singleton() {}
    virtual ~Singleton() {}

public:
    static T& getInstance()
    {
        static T* instance = new T();
        return *instance;
    }
};

#endif /* __SINGLETON_H__ */
