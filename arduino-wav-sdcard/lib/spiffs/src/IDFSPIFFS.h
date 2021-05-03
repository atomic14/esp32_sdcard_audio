#pragma once

#include <string>

class IDFSPIFFS
{
private:
  std::string m_mount_point;

public:
  IDFSPIFFS(const char *mount_point);
  ~IDFSPIFFS();
  const std::string &get_mount_point() { return m_mount_point; }
};