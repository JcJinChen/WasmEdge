#pragma once

#include "eei.h"

namespace SSVM {
namespace Executor {

class EEIFinish : public EEI {
public:
  EEIFinish(VM::EVMEnvironment &Env);
  EEIFinish() = delete;
  virtual ~EEIFinish() = default;

  virtual ErrCode run(std::vector<Value> &Args, std::vector<Value> &Res,
                      StoreManager &Store, Instance::ModuleInstance *ModInst);
};

} // namespace Executor
} // namespace SSVM
