/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 */
#include "UserStore_types.h"

namespace evernote { namespace edam {

const char* PublicUserInfo::ascii_fingerprint = "724DFF4FFFB8A87B3EDA5AEF78D412EB";
const uint8_t PublicUserInfo::binary_fingerprint[16] = {0x72,0x4D,0xFF,0x4F,0xFF,0xB8,0xA8,0x7B,0x3E,0xDA,0x5A,0xEF,0x78,0xD4,0x12,0xEB};

uint32_t PublicUserInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_userId = false;
  bool isset_shardId = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->userId);
          isset_userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->shardId);
          isset_shardId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->privilege = (evernote::edam::PrivilegeLevel)ecast0;
          this->__isset.privilege = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->username);
          this->__isset.username = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_userId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_shardId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t PublicUserInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PublicUserInfo");
  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->userId);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("shardId", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->shardId);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.privilege) {
    xfer += oprot->writeFieldBegin("privilege", ::apache::thrift::protocol::T_I32, 3);
    xfer += oprot->writeI32((int32_t)this->privilege);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.username) {
    xfer += oprot->writeFieldBegin("username", ::apache::thrift::protocol::T_STRING, 4);
    xfer += oprot->writeString(this->username);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* PremiumInfo::ascii_fingerprint = "1C3FEBFCC34CFA6368AF9D1447D203CA";
const uint8_t PremiumInfo::binary_fingerprint[16] = {0x1C,0x3F,0xEB,0xFC,0xC3,0x4C,0xFA,0x63,0x68,0xAF,0x9D,0x14,0x47,0xD2,0x03,0xCA};

uint32_t PremiumInfo::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_currentTime = false;
  bool isset_premium = false;
  bool isset_premiumRecurring = false;
  bool isset_premiumExtendable = false;
  bool isset_premiumPending = false;
  bool isset_premiumCancellationPending = false;
  bool isset_canPurchaseUploadAllowance = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->currentTime);
          isset_currentTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->premium);
          isset_premium = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->premiumRecurring);
          isset_premiumRecurring = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->premiumExpirationDate);
          this->__isset.premiumExpirationDate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->premiumExtendable);
          isset_premiumExtendable = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->premiumPending);
          isset_premiumPending = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->premiumCancellationPending);
          isset_premiumCancellationPending = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->canPurchaseUploadAllowance);
          isset_canPurchaseUploadAllowance = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sponsoredGroupName);
          this->__isset.sponsoredGroupName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast1;
          xfer += iprot->readI32(ecast1);
          this->sponsoredGroupRole = (SponsoredGroupRole)ecast1;
          this->__isset.sponsoredGroupRole = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_currentTime)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_premium)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_premiumRecurring)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_premiumExtendable)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_premiumPending)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_premiumCancellationPending)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_canPurchaseUploadAllowance)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t PremiumInfo::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("PremiumInfo");
  xfer += oprot->writeFieldBegin("currentTime", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->currentTime);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("premium", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->premium);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("premiumRecurring", ::apache::thrift::protocol::T_BOOL, 3);
  xfer += oprot->writeBool(this->premiumRecurring);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.premiumExpirationDate) {
    xfer += oprot->writeFieldBegin("premiumExpirationDate", ::apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->premiumExpirationDate);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("premiumExtendable", ::apache::thrift::protocol::T_BOOL, 5);
  xfer += oprot->writeBool(this->premiumExtendable);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("premiumPending", ::apache::thrift::protocol::T_BOOL, 6);
  xfer += oprot->writeBool(this->premiumPending);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("premiumCancellationPending", ::apache::thrift::protocol::T_BOOL, 7);
  xfer += oprot->writeBool(this->premiumCancellationPending);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("canPurchaseUploadAllowance", ::apache::thrift::protocol::T_BOOL, 8);
  xfer += oprot->writeBool(this->canPurchaseUploadAllowance);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.sponsoredGroupName) {
    xfer += oprot->writeFieldBegin("sponsoredGroupName", ::apache::thrift::protocol::T_STRING, 9);
    xfer += oprot->writeString(this->sponsoredGroupName);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.sponsoredGroupRole) {
    xfer += oprot->writeFieldBegin("sponsoredGroupRole", ::apache::thrift::protocol::T_I32, 10);
    xfer += oprot->writeI32((int32_t)this->sponsoredGroupRole);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

const char* AuthenticationResult::ascii_fingerprint = "C4DE8A69CAAF10F0C36064CED350235E";
const uint8_t AuthenticationResult::binary_fingerprint[16] = {0xC4,0xDE,0x8A,0x69,0xCA,0xAF,0x10,0xF0,0xC3,0x60,0x64,0xCE,0xD3,0x50,0x23,0x5E};

uint32_t AuthenticationResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_currentTime = false;
  bool isset_authenticationToken = false;
  bool isset_expiration = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->currentTime);
          isset_currentTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->authenticationToken);
          isset_authenticationToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->expiration);
          isset_expiration = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->user.read(iprot);
          this->__isset.user = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->publicUserInfo.read(iprot);
          this->__isset.publicUserInfo = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_currentTime)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_authenticationToken)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_expiration)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t AuthenticationResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("AuthenticationResult");
  xfer += oprot->writeFieldBegin("currentTime", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->currentTime);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("authenticationToken", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->authenticationToken);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("expiration", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->expiration);
  xfer += oprot->writeFieldEnd();
  if (this->__isset.user) {
    xfer += oprot->writeFieldBegin("user", ::apache::thrift::protocol::T_STRUCT, 4);
    xfer += this->user.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.publicUserInfo) {
    xfer += oprot->writeFieldBegin("publicUserInfo", ::apache::thrift::protocol::T_STRUCT, 5);
    xfer += this->publicUserInfo.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

}} // namespace