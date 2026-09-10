#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <deque>


// c is the underlying container in the stack 
template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;
        typedef typename Container::reverse_iterator    reverse_iterator;
        typedef typename Container::const_reverse_iterator    const_reverse_iterator;
        typename Container::iterator begin()
        {
            return (this->c.begin());
        }
        typename Container::iterator end()
        {
            return (this->c.end());
        }
        typename Container::const_iterator begin() const
        {
            return (this->c.begin());
        }
        typename Container::const_iterator end() const
        {
            return (this->c.end());
        }
        typename Container::reverse_iterator rbegin()
        {
            return (this->c.rbegin());
        }
        typename Container::reverse_iterator rend()
        {
            return (this->c.rend());
        }
        typename Container::const_reverse_iterator rbegin() const
        {
            return (this->c.rbegin());
        }
        typename Container::const_reverse_iterator rend() const
        {
            return (this->c.rend());
        }
};

#endif