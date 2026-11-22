

#include <memory>
#include <iostream>
#include <string> 
 
void observe(std::weak_ptr<int>& weak)
{
    std::cout << "weak count = " << weak.use_count() << "\n";

    // we need to convert the weak ptr passed to a shared ptr 
    // What should be done here be to create a p that is a shared_ptr?

    std::shared_ptr<int> p = weak.lock();

    if (p)
        std::cout << "\tobserve() is able to lock weak_ptr<>, value=" << *p << " with count = " << p.use_count() << " weak_count = " << weak.use_count() << '\n';
    else
        std::cout << "\tobserve() is unable to lock weak_ptr<>\n";
}

int main()
{
    std::weak_ptr<int> weak;
    std::cout << "weak_ptr<> is not yet initialized\n";
    observe(weak);

    /* would this work? why? */
    // std::unique_ptr<int> p1 = std::make_unique<int>(42);
    // weak = p1; 
    // This line will not compile because std::weak_ptr cannot be assigned from std::unique_ptr. std::weak_ptr is designed to work with std::shared_ptr, not std::unique_ptr.


    // what do the curly braces imply? what is their use in this case?
    {
        auto shared = std::make_shared<int>(42);
        weak = shared;
        std::cout << "weak_ptr<> is initialized with shared_ptr\n";
        observe(weak);
    }

    /*the curly braces create a new scope when the scope ends at the closing brace
    all local variables defined within that scope are destroyed 
    the shared_ptr named shared will be destroyed when the scope ends 
    which will decrease its reference countand free the memory
     if there are no other shared_ptrs pointing to it*/
    std::cout << "shared_ptr<> has been destructed due to scope exit\n";
    observe(weak);

    return 0;
}

