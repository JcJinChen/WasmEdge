#pragma once

#include "eei.h"

namespace SSVM {
namespace Executor {

class EEIGetCallDataSize : public EEI {
public:
  EEIGetCallDataSize(VM::EVMEnvironment &Env);
  EEIGetCallDataSize() = delete;
  virtual ~EEIGetCallDataSize() = default;

  virtual ErrCode run(std::vector<Value> &Args, std::vector<Value> &Res,
                      StoreManager &Store, Instance::ModuleInstance *ModInst);
};

} // namespace Executor
} // namespace SSVM
