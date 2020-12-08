#pragma once
namespace Controller {
class ICommand {
 public:
  virtual ~ICommand() {}
  virtual void Execute() = 0;
};
}  // namespace Controller
