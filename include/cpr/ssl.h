#ifndef CPR_SSL_H
#define CPR_SSL_H

namespace cpr {

class VerifySsl {
  public:
    explicit VerifySsl(const bool verify) : verify(verify) {}

    bool verify;
};

} // namespace cpr

#endif
