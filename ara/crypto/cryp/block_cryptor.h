namespace ara::crypto::cryp {

class BlockCryptor {
    public:
        virtual bool IsEncryption() const noexcept = 0;
        virtual ~BlockCryptor() noexcept = default;
        inline bool IsMaxInputOnly() const noexcept;
        inline bool IsMaxOutputOnly() const noexcept;
};

}
