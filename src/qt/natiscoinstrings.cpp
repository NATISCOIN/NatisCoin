

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *natiscoin_strings[] = {
QT_TRANSLATE_NOOP("natiscoin-core", "NatisCoin Core"),
QT_TRANSLATE_NOOP("natiscoin-core", "The %s developers"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"-maxtxfee is set very high! Fees this large could be paid on a single "
"transaction."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Accept connections from outside (default: 1 if no -proxy or -connect/-"
"noconnect)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Connect only to the specified node(s); -noconnect or -connect=0 alone to "
"disable automatic connections"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Disable all NatisCoin specific functionality (Masternodes, PrivateSend, "
"InstantSend, Governance) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Enable InstantSend, show confirmations for locked transactions (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Enable multiple PrivateSend mixing sessions per block, experimental (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Enable use of automated PrivateSend for funds stored in this wallet (0-1, "
"default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Error loading %s: You can't enable HD on a already existing non-HD wallet"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Execute command when a wallet InstantSend transaction is successfully locked "
"(%s in cmd is replaced by TxID)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Incorrect or no devnet genesis block found. Wrong datadir for devnet "
"specified?"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"InstantSend doesn't support sending values that high yet. Transactions are "
"currently limited to %1 NAT."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"InstantSend requires inputs with at least %d confirmations, you might need "
"to wait a few minutes and try again."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maintain a full address index, used to query for the balance, txids and "
"unspent outputs for addresses (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maintain a full spent index, used to query the spending txid and input index "
"for an outpoint (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maintain a timestamp index for block hashes, used to query blocks hashes by "
"a range of timestamps (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maintain at most <n> connections to peers (temporary service connections "
"excluded) (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Make sure to encrypt your wallet and delete all non-encrypted backups after "
"you verified that wallet works!"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Override spork address. Only useful for regtest and devnet. Using this on "
"mainnet or testnet will ban you."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Provide liquidity to PrivateSend by infrequently mixing coins on a continual "
"basis (%u-%u, default: %u, 1=very frequent, high fees, %u=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect/-noconnect)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Reduce storage requirements by enabling pruning (deleting) of old blocks. "
"This allows the pruneblockchain RPC to be called to delete specific blocks, "
"and enables automatic pruning of old blocks if a target size in MiB is "
"provided. This mode is incompatible with -txindex and -rescan. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, 1 = allow manual pruning via RPC, >%u "
"= automatically prune block files to stay under the specified target size in "
"MiB)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Set lowest fee rate (in %s/kB) for transactions to be included in block "
"creation. (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Show N confirmations for a successfully locked transaction (%u-%u, default: "
"%u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Specify full path to directory for automatic wallet backups (must exist)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Unable to locate enough PrivateSend non-denominated funds for this "
"transaction."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Use N separate masternodes for each denominated input to mix funds (%u-%u, "
"default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Use hierarchical deterministic key generation (HD) after BIP39/BIP44. Only "
"has effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"User defined mnemonic for HD wallet (bip39). Only has effect during wallet "
"creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"User defined mnemonic passphrase for HD wallet (BIP39). Only has effect "
"during wallet creation/first start (default: empty string)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"User defined seed for HD wallet (should be in hex). Only has effect during "
"wallet creation/first start (default: randomly generated)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. The client then connects normally using the "
"rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of arguments. This option can "
"be specified multiple times"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: At least %d of %d masternodes are running on a newer software "
"version. Please check latest releases, you might need to update too."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: Every masternode (out of %d known ones) is running on a newer "
"software version. Please check latest releases, it's very likely that you "
"missed a major/critical update."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("natiscoin-core", ""
"You need to rebuild the database using -reindex-chainstate to change -txindex"),
QT_TRANSLATE_NOOP("natiscoin-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("natiscoin-core", "%s is not a valid backup folder!"),
QT_TRANSLATE_NOOP("natiscoin-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("natiscoin-core", "(%d could be used only on mainnet)"),
QT_TRANSLATE_NOOP("natiscoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "(default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "(must be %d for mainnet)"),
QT_TRANSLATE_NOOP("natiscoin-core", "(press q to shutdown and continue later)"),
QT_TRANSLATE_NOOP("natiscoin-core", "-devnet can only be specified once"),
QT_TRANSLATE_NOOP("natiscoin-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("natiscoin-core", "-port must be specified when -devnet and -listen are specified"),
QT_TRANSLATE_NOOP("natiscoin-core", "-rpcport must be specified when -devnet and -server are specified"),
QT_TRANSLATE_NOOP("natiscoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("natiscoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("natiscoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("natiscoin-core", "Allow RFC1918 addresses to be relayed and connected to (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Already have that input."),
QT_TRANSLATE_NOOP("natiscoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("natiscoin-core", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("natiscoin-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("natiscoin-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("natiscoin-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("natiscoin-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("natiscoin-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("natiscoin-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Change index out of range"),
QT_TRANSLATE_NOOP("natiscoin-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("natiscoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("natiscoin-core", "Connect to KeePassHttp on port <port> (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("natiscoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Copyright (C)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("natiscoin-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("natiscoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("natiscoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("natiscoin-core", "Done loading"),
QT_TRANSLATE_NOOP("natiscoin-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish hash transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish raw transaction (locked via InstantSend) in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Entries are full."),
QT_TRANSLATE_NOOP("natiscoin-core", "Entry exceeds maximum size."),
QT_TRANSLATE_NOOP("natiscoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error loading %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error loading %s: You can't disable HD on a already existing HD wallet"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("natiscoin-core", "Error upgrading chainstate database"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("natiscoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to create backup %s!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to find mixing queue to join"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to load fulfilled requests cache from"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to load governance cache from"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to load masternode cache from"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to load masternode payments cache from"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("natiscoin-core", "Failed to start a new mixing queue"),
QT_TRANSLATE_NOOP("natiscoin-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("natiscoin-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("natiscoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Importing..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("natiscoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("natiscoin-core", "Incompatible version."),
QT_TRANSLATE_NOOP("natiscoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("natiscoin-core", "Information"),
QT_TRANSLATE_NOOP("natiscoin-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("natiscoin-core", "Input is not valid."),
QT_TRANSLATE_NOOP("natiscoin-core", "InstantSend options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("natiscoin-core", "Invalid spork address specified with -sporkaddr"),
QT_TRANSLATE_NOOP("natiscoin-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("natiscoin-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("natiscoin-core", "Keep N NAT anonymized (%u-%u, default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("natiscoin-core", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("natiscoin-core", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("natiscoin-core", "Line: %d"),
QT_TRANSLATE_NOOP("natiscoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading fulfilled requests cache..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading governance cache..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("natiscoin-core", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("natiscoin-core", "Masternode cache is empty, skipping payments and governance cache..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Masternode options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("natiscoin-core", "Masternode:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Minimum bytes per sigop in transactions we relay and mine (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("natiscoin-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Mnemonic passphrase is too long, must be at most 256 characters"),
QT_TRANSLATE_NOOP("natiscoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("natiscoin-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("natiscoin-core", "No errors detected."),
QT_TRANSLATE_NOOP("natiscoin-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("natiscoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("natiscoin-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("natiscoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("natiscoin-core", "Not enough funds to anonymize."),
QT_TRANSLATE_NOOP("natiscoin-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("natiscoin-core", "Number of automatic wallet backups (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("natiscoin-core", "Port: %d"),
QT_TRANSLATE_NOOP("natiscoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Print this help message and exit"),
QT_TRANSLATE_NOOP("natiscoin-core", "Print version and exit"),
QT_TRANSLATE_NOOP("natiscoin-core", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("natiscoin-core", "PrivateSend options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("natiscoin-core", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("natiscoin-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("natiscoin-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("natiscoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("natiscoin-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("natiscoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("natiscoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("natiscoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("natiscoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("natiscoin-core", "Send trace/debug info to debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Session not complete!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Session timed out."),
QT_TRANSLATE_NOOP("natiscoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("natiscoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("natiscoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("natiscoin-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchroning blockchain..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronizing governance objects..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronizing masternode payments..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("natiscoin-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("natiscoin-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("natiscoin-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("natiscoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("natiscoin-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("natiscoin-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("natiscoin-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("natiscoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("natiscoin-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("natiscoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("natiscoin-core", "Trying to connect..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("natiscoin-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("natiscoin-core", "Unknown response."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("natiscoin-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("natiscoin-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("natiscoin-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("natiscoin-core", "Upgrading UTXO database"),
QT_TRANSLATE_NOOP("natiscoin-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Use devnet chain with provided name"),
QT_TRANSLATE_NOOP("natiscoin-core", "Use the test chain"),
QT_TRANSLATE_NOOP("natiscoin-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("natiscoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("natiscoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wallet window title"),
QT_TRANSLATE_NOOP("natiscoin-core", "Warning"),
QT_TRANSLATE_NOOP("natiscoin-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("natiscoin-core", "Will retry..."),
QT_TRANSLATE_NOOP("natiscoin-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("natiscoin-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("natiscoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("natiscoin-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("natiscoin-core", "no mixing available."),
QT_TRANSLATE_NOOP("natiscoin-core", "see debug.log for details."),
};
