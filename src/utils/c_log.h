#ifndef EXTERNAL_TEMPLATE_C_LOG_H
#define EXTERNAL_TEMPLATE_C_LOG_H

#include <string>
#include <memory>

namespace utils {
    class c_log {
       public:
        auto set_console_handle(void* handle) -> void;
        auto info(const std::string& msg) const -> void;
        auto warn(const std::string& msg) const -> void;

       private:
        auto  _reset_color() const -> void;
        void* _cmd_handle{};
    };
    extern std::unique_ptr<c_log> g_log;
}  // namespace utils

#endif  // EXTERNAL_TEMPLATE_C_LOG_H
