#ifndef LIGHTNING_COMMON_WALLET_H
#define LIGHTNING_COMMON_WALLET_H

#include "config.h"

/* Types of transactions we store in the `transactions` table. Mainly used for
 * display purposes later. */
enum wallet_tx_type {
       TX_UNKNOWN = 0,
       TX_THEIRS = 1,  /* This only affects their funds in the channel */
       TX_WALLET_DEPOSIT = 2,
       TX_WALLET_WITHDRAWAL = 4,
       TX_CHANNEL_FUNDING = 8,
       TX_CHANNEL_CLOSE = 16,
       TX_CHANNEL_UNILATERAL = 32,
       TX_CHANNEL_SWEEP = 64,
       TX_CHANNEL_HTLC_SUCCESS = 128,
       TX_CHANNEL_HTLC_TIMEOUT = 256,
       TX_CHANNEL_PENALTY = 512,
       TX_CHANNEL_CHEAT = 1024,
};
/* Any combination of the above wallet_tx_types */
typedef unsigned short txtypes;

#endif /* LIGHTNING_COMMON_WALLET_H */