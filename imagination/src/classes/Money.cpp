class Money
{
private:
    bool _physical;
    double _signed_amount;
    double _unsigned_amount;

public:
    void generateCredit()
    {
        _unsigned_amount--;
        _signed_amount++;
    }
    void generateDebit()
    {
        _unsigned_amount++;
        _signed_amount--;
    }
};