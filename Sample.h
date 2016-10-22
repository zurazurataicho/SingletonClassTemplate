#ifndef __SAMPLE_H__
#define __SAMPLE_H__
#include "Singleton.h"

/**
 * sample class
 */
class Sample final : public Singleton<Sample>
{
private:
    // getInstance() needs to access to the constructor on this class.
    // This allows the Singleton base class to access it as a friend.
    friend class Singleton<Sample>;

    Sample();
    ~Sample() override;

    int _a;

public:
    void set(int a);
    int get() const;
};
#endif /* __SAMPLE_H__ */
