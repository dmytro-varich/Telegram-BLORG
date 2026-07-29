#pragma once

#include <QString>

namespace BLORG::Discovery {

bool AllowMentions();

bool AllowTelegramLinks();

bool AllowResolveUsername();

bool AllowInlineBots();

bool AllowGlobalSearch();

bool ShowBlockedUsersSection();

bool AllowRequestsJoin();

}