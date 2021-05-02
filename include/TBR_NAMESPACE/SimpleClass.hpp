#ifndef TBRU_NAMESPACE_SIMPLECLASS_H
#define TBRU_NAMESPACE_SIMPLECLASS_H

namespace TBR_NAMESPACE {
template <typename T>
class SimpleClass {
  T number;

 public:
  SimpleClass() : number{0} {};
  void setNumber(T _number) { number = _number; };
  T getNumber() const { return number; };
};
}  // namespace TBR_NAMESPACE

#endif