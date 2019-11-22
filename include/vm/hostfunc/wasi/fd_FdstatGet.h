#pragma once

#include "wasi.h"

namespace SSVM {
namespace Executor {

class WasiFdFdstatGet : public Wasi {
public:
  WasiFdFdstatGet(VM::WasiEnvironment &Env);
  WasiFdFdstatGet() = delete;
  virtual ~WasiFdFdstatGet() = default;

  virtual ErrCode run(std::vector<Value> &Args, std::vector<Value> &Res,
                      StoreManager &Store, Instance::ModuleInstance *ModInst);
};

} // namespace Executor
} // namespace SSVM
