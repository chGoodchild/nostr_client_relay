#ifndef LOG_HH
#define LOG_HH

#include <string>

namespace events
{
  void start_log();
  void log(const std::string& str, bool to_file = true);
  std::string get_time_now(const std::string& time_format = "%X");
  void json_to_file(const std::string& name, const std::string& buf);
};

#endif

