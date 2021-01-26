#pragma once

#include "Listener.h"
#include "Publisher.h"
#include "Window.h"

namespace Model {
class Scene : public Listener, public Publisher {
 public:
  Scene();
  virtual ~Scene();
  virtual void LoadScene() = 0;
  virtual void UpdateScene() = 0;
  virtual void DestroyScene() = 0;

  void StopGame();
  void Resume();
  void QuitGame();
  void RunGame();

  bool IsRunning();
  bool IsStopped();

 private:
  bool run_ = false;
  bool stop_ = false;
  bool quit_ = false;
};
}  // namespace Model
