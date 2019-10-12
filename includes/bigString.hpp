#ifndef BIGSTRING_HPP
#define BIGSTRING_HPP

struct BigString{
    BigString();
    BigString(unsigned long long n1, unsigned long long n2);
    BigString(const BigString&);
    ~BigString();

    void ReadBS(std::istream&);
    void WriteBS(std::ostream&);

    void set_lstring(unsigned long long n);
    void set_rstring(unsigned long long n);
    unsigned long long get_lstring() const;
    unsigned long long get_rstring() const;

    char get_bit(int) const;
    void print_all_bits();

    BigString operator &(const BigString& s) const;
    BigString operator |(const BigString& s) const;
    BigString operator ^(const BigString& s) const;
    BigString operator !() const;
    BigString operator<<(int) const;
    BigString operator>>(int) const;
    bool operator ==(const BigString& s) const;
    bool operator !=(const BigString& s) const;
    bool operator >(const BigString& s) const;
    bool operator <(const BigString& s) const;
    const BigString& operator =(const BigString& s);

    int num_of_units() const;
    BigString* comparison(BigString& s);
    bool is_include(const BigString& s) const;

private:
    unsigned long long lString;
    unsigned long long rString;
};

unsigned long long pow_m(int, int);
BigString operator "" _0XtoBS(const char*, size_t);

#endif
