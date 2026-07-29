#include <QString>
#include "blorg/discovery/discovery.h"
#include "blorg/discovery/config.h"

namespace BLORG::Discovery {

bool AllowMentions() {
    return !kBlockUsernameResolve;
}

bool AllowInlineBots() {
    return !kBlockInlineBots;
}

bool AllowTelegramLinks() {
    return !kBlockTelegramLinks;
}

bool AllowResolveUsername() {
    return !kBlockUsernameResolve;
}

bool AllowGlobalSearch() {
    return !kBlockGlobalSearch;
}

bool ShowBlockedUsersSection() {
    return !kBlockBlockedUsersSection;
}

bool AllowRequestsJoin() {
    return !kBlockRequestsJoin;
}

}