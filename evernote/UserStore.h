/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#ifndef UserStore_H
#define UserStore_H

#include <TProcessor.h>
#include "UserStore_types.h"

namespace evernote { namespace edam {

class UserStoreIf {
 public:
  virtual ~UserStoreIf() {}
  virtual bool checkVersion(const std::string& clientName, const int16_t edamVersionMajor, const int16_t edamVersionMinor) = 0;
  virtual void authenticate(AuthenticationResult& _return, const std::string& username, const std::string& password, const std::string& consumerKey, const std::string& consumerSecret) = 0;
  virtual void refreshAuthentication(AuthenticationResult& _return, const std::string& authenticationToken) = 0;
  virtual void getUser(evernote::edam::User& _return, const std::string& authenticationToken) = 0;
  virtual void getPublicUserInfo(PublicUserInfo& _return, const std::string& username) = 0;
  virtual void getPremiumInfo(PremiumInfo& _return, const std::string& authenticationToken) = 0;
};

class UserStoreNull : virtual public UserStoreIf {
 public:
  virtual ~UserStoreNull() {}
  bool checkVersion(const std::string& /* clientName */, const int16_t /* edamVersionMajor */, const int16_t /* edamVersionMinor */) {
    bool _return = false;
    return _return;
  }
  void authenticate(AuthenticationResult& /* _return */, const std::string& /* username */, const std::string& /* password */, const std::string& /* consumerKey */, const std::string& /* consumerSecret */) {
    return;
  }
  void refreshAuthentication(AuthenticationResult& /* _return */, const std::string& /* authenticationToken */) {
    return;
  }
  void getUser(evernote::edam::User& /* _return */, const std::string& /* authenticationToken */) {
    return;
  }
  void getPublicUserInfo(PublicUserInfo& /* _return */, const std::string& /* username */) {
    return;
  }
  void getPremiumInfo(PremiumInfo& /* _return */, const std::string& /* authenticationToken */) {
    return;
  }
};

typedef struct _UserStore_checkVersion_args__isset {
  _UserStore_checkVersion_args__isset() : clientName(false), edamVersionMajor(false), edamVersionMinor(false) {}
  bool clientName;
  bool edamVersionMajor;
  bool edamVersionMinor;
} _UserStore_checkVersion_args__isset;

class UserStore_checkVersion_args {
 public:

  UserStore_checkVersion_args() : clientName(""), edamVersionMajor(1), edamVersionMinor(20) {
  }

  virtual ~UserStore_checkVersion_args() throw() {}

  std::string clientName;
  int16_t edamVersionMajor;
  int16_t edamVersionMinor;

  _UserStore_checkVersion_args__isset __isset;

  bool operator == (const UserStore_checkVersion_args & rhs) const
  {
    if (!(clientName == rhs.clientName))
      return false;
    if (!(edamVersionMajor == rhs.edamVersionMajor))
      return false;
    if (!(edamVersionMinor == rhs.edamVersionMinor))
      return false;
    return true;
  }
  bool operator != (const UserStore_checkVersion_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_checkVersion_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_checkVersion_pargs {
 public:


  virtual ~UserStore_checkVersion_pargs() throw() {}

  const std::string* clientName;
  const int16_t* edamVersionMajor;
  const int16_t* edamVersionMinor;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_checkVersion_result__isset {
  _UserStore_checkVersion_result__isset() : success(false) {}
  bool success;
} _UserStore_checkVersion_result__isset;

class UserStore_checkVersion_result {
 public:

  UserStore_checkVersion_result() : success(0) {
  }

  virtual ~UserStore_checkVersion_result() throw() {}

  bool success;

  _UserStore_checkVersion_result__isset __isset;

  bool operator == (const UserStore_checkVersion_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const UserStore_checkVersion_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_checkVersion_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_checkVersion_presult__isset {
  _UserStore_checkVersion_presult__isset() : success(false) {}
  bool success;
} _UserStore_checkVersion_presult__isset;

class UserStore_checkVersion_presult {
 public:


  virtual ~UserStore_checkVersion_presult() throw() {}

  bool* success;

  _UserStore_checkVersion_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserStore_authenticate_args__isset {
  _UserStore_authenticate_args__isset() : username(false), password(false), consumerKey(false), consumerSecret(false) {}
  bool username;
  bool password;
  bool consumerKey;
  bool consumerSecret;
} _UserStore_authenticate_args__isset;

class UserStore_authenticate_args {
 public:

  UserStore_authenticate_args() : username(""), password(""), consumerKey(""), consumerSecret("") {
  }

  virtual ~UserStore_authenticate_args() throw() {}

  std::string username;
  std::string password;
  std::string consumerKey;
  std::string consumerSecret;

  _UserStore_authenticate_args__isset __isset;

  bool operator == (const UserStore_authenticate_args & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(consumerKey == rhs.consumerKey))
      return false;
    if (!(consumerSecret == rhs.consumerSecret))
      return false;
    return true;
  }
  bool operator != (const UserStore_authenticate_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_authenticate_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_authenticate_pargs {
 public:


  virtual ~UserStore_authenticate_pargs() throw() {}

  const std::string* username;
  const std::string* password;
  const std::string* consumerKey;
  const std::string* consumerSecret;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_authenticate_result__isset {
  _UserStore_authenticate_result__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_authenticate_result__isset;

class UserStore_authenticate_result {
 public:

  UserStore_authenticate_result() {
  }

  virtual ~UserStore_authenticate_result() throw() {}

  AuthenticationResult success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_authenticate_result__isset __isset;

  bool operator == (const UserStore_authenticate_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(userException == rhs.userException))
      return false;
    if (!(systemException == rhs.systemException))
      return false;
    return true;
  }
  bool operator != (const UserStore_authenticate_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_authenticate_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_authenticate_presult__isset {
  _UserStore_authenticate_presult__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_authenticate_presult__isset;

class UserStore_authenticate_presult {
 public:


  virtual ~UserStore_authenticate_presult() throw() {}

  AuthenticationResult* success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_authenticate_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserStore_refreshAuthentication_args__isset {
  _UserStore_refreshAuthentication_args__isset() : authenticationToken(false) {}
  bool authenticationToken;
} _UserStore_refreshAuthentication_args__isset;

class UserStore_refreshAuthentication_args {
 public:

  UserStore_refreshAuthentication_args() : authenticationToken("") {
  }

  virtual ~UserStore_refreshAuthentication_args() throw() {}

  std::string authenticationToken;

  _UserStore_refreshAuthentication_args__isset __isset;

  bool operator == (const UserStore_refreshAuthentication_args & rhs) const
  {
    if (!(authenticationToken == rhs.authenticationToken))
      return false;
    return true;
  }
  bool operator != (const UserStore_refreshAuthentication_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_refreshAuthentication_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_refreshAuthentication_pargs {
 public:


  virtual ~UserStore_refreshAuthentication_pargs() throw() {}

  const std::string* authenticationToken;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_refreshAuthentication_result__isset {
  _UserStore_refreshAuthentication_result__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_refreshAuthentication_result__isset;

class UserStore_refreshAuthentication_result {
 public:

  UserStore_refreshAuthentication_result() {
  }

  virtual ~UserStore_refreshAuthentication_result() throw() {}

  AuthenticationResult success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_refreshAuthentication_result__isset __isset;

  bool operator == (const UserStore_refreshAuthentication_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(userException == rhs.userException))
      return false;
    if (!(systemException == rhs.systemException))
      return false;
    return true;
  }
  bool operator != (const UserStore_refreshAuthentication_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_refreshAuthentication_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_refreshAuthentication_presult__isset {
  _UserStore_refreshAuthentication_presult__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_refreshAuthentication_presult__isset;

class UserStore_refreshAuthentication_presult {
 public:


  virtual ~UserStore_refreshAuthentication_presult() throw() {}

  AuthenticationResult* success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_refreshAuthentication_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserStore_getUser_args__isset {
  _UserStore_getUser_args__isset() : authenticationToken(false) {}
  bool authenticationToken;
} _UserStore_getUser_args__isset;

class UserStore_getUser_args {
 public:

  UserStore_getUser_args() : authenticationToken("") {
  }

  virtual ~UserStore_getUser_args() throw() {}

  std::string authenticationToken;

  _UserStore_getUser_args__isset __isset;

  bool operator == (const UserStore_getUser_args & rhs) const
  {
    if (!(authenticationToken == rhs.authenticationToken))
      return false;
    return true;
  }
  bool operator != (const UserStore_getUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_getUser_pargs {
 public:


  virtual ~UserStore_getUser_pargs() throw() {}

  const std::string* authenticationToken;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getUser_result__isset {
  _UserStore_getUser_result__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_getUser_result__isset;

class UserStore_getUser_result {
 public:

  UserStore_getUser_result() {
  }

  virtual ~UserStore_getUser_result() throw() {}

  evernote::edam::User success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_getUser_result__isset __isset;

  bool operator == (const UserStore_getUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(userException == rhs.userException))
      return false;
    if (!(systemException == rhs.systemException))
      return false;
    return true;
  }
  bool operator != (const UserStore_getUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getUser_presult__isset {
  _UserStore_getUser_presult__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_getUser_presult__isset;

class UserStore_getUser_presult {
 public:


  virtual ~UserStore_getUser_presult() throw() {}

  evernote::edam::User* success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_getUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserStore_getPublicUserInfo_args__isset {
  _UserStore_getPublicUserInfo_args__isset() : username(false) {}
  bool username;
} _UserStore_getPublicUserInfo_args__isset;

class UserStore_getPublicUserInfo_args {
 public:

  UserStore_getPublicUserInfo_args() : username("") {
  }

  virtual ~UserStore_getPublicUserInfo_args() throw() {}

  std::string username;

  _UserStore_getPublicUserInfo_args__isset __isset;

  bool operator == (const UserStore_getPublicUserInfo_args & rhs) const
  {
    if (!(username == rhs.username))
      return false;
    return true;
  }
  bool operator != (const UserStore_getPublicUserInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getPublicUserInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_getPublicUserInfo_pargs {
 public:


  virtual ~UserStore_getPublicUserInfo_pargs() throw() {}

  const std::string* username;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getPublicUserInfo_result__isset {
  _UserStore_getPublicUserInfo_result__isset() : success(false), notFoundException(false), systemException(false), userException(false) {}
  bool success;
  bool notFoundException;
  bool systemException;
  bool userException;
} _UserStore_getPublicUserInfo_result__isset;

class UserStore_getPublicUserInfo_result {
 public:

  UserStore_getPublicUserInfo_result() {
  }

  virtual ~UserStore_getPublicUserInfo_result() throw() {}

  PublicUserInfo success;
  evernote::edam::EDAMNotFoundException notFoundException;
  evernote::edam::EDAMSystemException systemException;
  evernote::edam::EDAMUserException userException;

  _UserStore_getPublicUserInfo_result__isset __isset;

  bool operator == (const UserStore_getPublicUserInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(notFoundException == rhs.notFoundException))
      return false;
    if (!(systemException == rhs.systemException))
      return false;
    if (!(userException == rhs.userException))
      return false;
    return true;
  }
  bool operator != (const UserStore_getPublicUserInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getPublicUserInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getPublicUserInfo_presult__isset {
  _UserStore_getPublicUserInfo_presult__isset() : success(false), notFoundException(false), systemException(false), userException(false) {}
  bool success;
  bool notFoundException;
  bool systemException;
  bool userException;
} _UserStore_getPublicUserInfo_presult__isset;

class UserStore_getPublicUserInfo_presult {
 public:


  virtual ~UserStore_getPublicUserInfo_presult() throw() {}

  PublicUserInfo* success;
  evernote::edam::EDAMNotFoundException notFoundException;
  evernote::edam::EDAMSystemException systemException;
  evernote::edam::EDAMUserException userException;

  _UserStore_getPublicUserInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _UserStore_getPremiumInfo_args__isset {
  _UserStore_getPremiumInfo_args__isset() : authenticationToken(false) {}
  bool authenticationToken;
} _UserStore_getPremiumInfo_args__isset;

class UserStore_getPremiumInfo_args {
 public:

  UserStore_getPremiumInfo_args() : authenticationToken("") {
  }

  virtual ~UserStore_getPremiumInfo_args() throw() {}

  std::string authenticationToken;

  _UserStore_getPremiumInfo_args__isset __isset;

  bool operator == (const UserStore_getPremiumInfo_args & rhs) const
  {
    if (!(authenticationToken == rhs.authenticationToken))
      return false;
    return true;
  }
  bool operator != (const UserStore_getPremiumInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getPremiumInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserStore_getPremiumInfo_pargs {
 public:


  virtual ~UserStore_getPremiumInfo_pargs() throw() {}

  const std::string* authenticationToken;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getPremiumInfo_result__isset {
  _UserStore_getPremiumInfo_result__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_getPremiumInfo_result__isset;

class UserStore_getPremiumInfo_result {
 public:

  UserStore_getPremiumInfo_result() {
  }

  virtual ~UserStore_getPremiumInfo_result() throw() {}

  PremiumInfo success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_getPremiumInfo_result__isset __isset;

  bool operator == (const UserStore_getPremiumInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(userException == rhs.userException))
      return false;
    if (!(systemException == rhs.systemException))
      return false;
    return true;
  }
  bool operator != (const UserStore_getPremiumInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserStore_getPremiumInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserStore_getPremiumInfo_presult__isset {
  _UserStore_getPremiumInfo_presult__isset() : success(false), userException(false), systemException(false) {}
  bool success;
  bool userException;
  bool systemException;
} _UserStore_getPremiumInfo_presult__isset;

class UserStore_getPremiumInfo_presult {
 public:


  virtual ~UserStore_getPremiumInfo_presult() throw() {}

  PremiumInfo* success;
  evernote::edam::EDAMUserException userException;
  evernote::edam::EDAMSystemException systemException;

  _UserStore_getPremiumInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class UserStoreClient : virtual public UserStoreIf {
 public:
  UserStoreClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  UserStoreClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool checkVersion(const std::string& clientName, const int16_t edamVersionMajor, const int16_t edamVersionMinor);
  void send_checkVersion(const std::string& clientName, const int16_t edamVersionMajor, const int16_t edamVersionMinor);
  bool recv_checkVersion();
  void authenticate(AuthenticationResult& _return, const std::string& username, const std::string& password, const std::string& consumerKey, const std::string& consumerSecret);
  void send_authenticate(const std::string& username, const std::string& password, const std::string& consumerKey, const std::string& consumerSecret);
  void recv_authenticate(AuthenticationResult& _return);
  void refreshAuthentication(AuthenticationResult& _return, const std::string& authenticationToken);
  void send_refreshAuthentication(const std::string& authenticationToken);
  void recv_refreshAuthentication(AuthenticationResult& _return);
  void getUser(evernote::edam::User& _return, const std::string& authenticationToken);
  void send_getUser(const std::string& authenticationToken);
  void recv_getUser(evernote::edam::User& _return);
  void getPublicUserInfo(PublicUserInfo& _return, const std::string& username);
  void send_getPublicUserInfo(const std::string& username);
  void recv_getPublicUserInfo(PublicUserInfo& _return);
  void getPremiumInfo(PremiumInfo& _return, const std::string& authenticationToken);
  void send_getPremiumInfo(const std::string& authenticationToken);
  void recv_getPremiumInfo(PremiumInfo& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class UserStoreProcessor : virtual public ::apache::thrift::TProcessor {
 protected:
  boost::shared_ptr<UserStoreIf> iface_;
  virtual bool process_fn(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, std::string& fname, int32_t seqid);
 private:
  std::map<std::string, void (UserStoreProcessor::*)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*)> processMap_;
  void process_checkVersion(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_authenticate(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_refreshAuthentication(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_getUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_getPublicUserInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
  void process_getPremiumInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot);
 public:
  UserStoreProcessor(boost::shared_ptr<UserStoreIf> iface) :
    iface_(iface) {
    processMap_["checkVersion"] = &UserStoreProcessor::process_checkVersion;
    processMap_["authenticate"] = &UserStoreProcessor::process_authenticate;
    processMap_["refreshAuthentication"] = &UserStoreProcessor::process_refreshAuthentication;
    processMap_["getUser"] = &UserStoreProcessor::process_getUser;
    processMap_["getPublicUserInfo"] = &UserStoreProcessor::process_getPublicUserInfo;
    processMap_["getPremiumInfo"] = &UserStoreProcessor::process_getPremiumInfo;
  }

  virtual bool process(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot);
  virtual ~UserStoreProcessor() {}
};

class UserStoreMultiface : virtual public UserStoreIf {
 public:
  UserStoreMultiface(std::vector<boost::shared_ptr<UserStoreIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~UserStoreMultiface() {}
 protected:
  std::vector<boost::shared_ptr<UserStoreIf> > ifaces_;
  UserStoreMultiface() {}
  void add(boost::shared_ptr<UserStoreIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool checkVersion(const std::string& clientName, const int16_t edamVersionMajor, const int16_t edamVersionMinor) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        return ifaces_[i]->checkVersion(clientName, edamVersionMajor, edamVersionMinor);
      } else {
        ifaces_[i]->checkVersion(clientName, edamVersionMajor, edamVersionMinor);
      }
    }
  }

  void authenticate(AuthenticationResult& _return, const std::string& username, const std::string& password, const std::string& consumerKey, const std::string& consumerSecret) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->authenticate(_return, username, password, consumerKey, consumerSecret);
        return;
      } else {
        ifaces_[i]->authenticate(_return, username, password, consumerKey, consumerSecret);
      }
    }
  }

  void refreshAuthentication(AuthenticationResult& _return, const std::string& authenticationToken) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->refreshAuthentication(_return, authenticationToken);
        return;
      } else {
        ifaces_[i]->refreshAuthentication(_return, authenticationToken);
      }
    }
  }

  void getUser(evernote::edam::User& _return, const std::string& authenticationToken) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getUser(_return, authenticationToken);
        return;
      } else {
        ifaces_[i]->getUser(_return, authenticationToken);
      }
    }
  }

  void getPublicUserInfo(PublicUserInfo& _return, const std::string& username) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getPublicUserInfo(_return, username);
        return;
      } else {
        ifaces_[i]->getPublicUserInfo(_return, username);
      }
    }
  }

  void getPremiumInfo(PremiumInfo& _return, const std::string& authenticationToken) {
    uint32_t sz = ifaces_.size();
    for (uint32_t i = 0; i < sz; ++i) {
      if (i == sz - 1) {
        ifaces_[i]->getPremiumInfo(_return, authenticationToken);
        return;
      } else {
        ifaces_[i]->getPremiumInfo(_return, authenticationToken);
      }
    }
  }

};

}} // namespace

#endif