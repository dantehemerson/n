#include <napi.h>

Napi::String getCommand(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  
  return Napi::String::New(env, "Saludos");
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
  Napi::String name = Napi::String::New(env, "getCommand")
  
  exports.Set(name, Napi::Function::New(env, getCommand));

  return exports;
}

NODE_API_MODULE(addon, Init)