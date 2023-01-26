class Money
{
private:
    bool _physical;
    double _signed_amount;
    double _unsigned_amount;

public:
    virtual void generateCredit() = 0;
    virtual void generateDebit() = 0;
};