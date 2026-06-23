#pragma once

#include "UserOption.hpp"

class CWnd;

namespace AdminGuard {

enum class PromptResult
{
  Proceed,
  RestartRequested,
  Cancelled,
};

PromptResult PromptAdminRestartIfNeeded(CWnd* owner, const CString& option_key);

}  // namespace AdminGuard
