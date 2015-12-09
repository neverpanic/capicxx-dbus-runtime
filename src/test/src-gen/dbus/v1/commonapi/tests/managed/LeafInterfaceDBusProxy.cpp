/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.dbus 3.1.5.v201512091037.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1/commonapi/tests/managed/LeafInterfaceDBusProxy.hpp>

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createLeafInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection) {
	return std::make_shared<LeafInterfaceDBusProxy>(_address, _connection);
}

INITIALIZER(registerLeafInterfaceDBusProxy) {
     CommonAPI::DBus::Factory::get()->registerProxyCreateMethod(
		LeafInterface::getInterface(),
		&createLeafInterfaceDBusProxy);
}

LeafInterfaceDBusProxy::LeafInterfaceDBusProxy(
	const CommonAPI::DBus::DBusAddress &_address,
	const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection> &_connection)
	:	CommonAPI::DBus::DBusProxy(_address, _connection)
{
}


    
    void LeafInterfaceDBusProxy::testLeafMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, LeafInterface::testLeafMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<LeafInterface::testLeafMethodError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_inInt(_inInt, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_inString(_inString, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_outInt(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_outString(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<LeafInterface::testLeafMethodError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<int32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodWithReply(
        *this,
        "testLeafMethod",
        "is",
(_info ? _info : &CommonAPI::DBus::defaultCallInfo),
deploy_inInt, deploy_inString,
_internalCallStatus,
deploy_error,
deploy_outInt, deploy_outString);
_error = deploy_error.getValue();
_outInt = deploy_outInt.getValue();
_outString = deploy_outString.getValue();
}
    std::future<CommonAPI::CallStatus> LeafInterfaceDBusProxy::testLeafMethodAsync(const int32_t &_inInt, const std::string &_inString, TestLeafMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
        CommonAPI::Deployable<LeafInterface::testLeafMethodError, CommonAPI::EmptyDeployment> deploy_error(static_cast<CommonAPI::EmptyDeployment *>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_inInt(_inInt, static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_inString(_inString, static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> deploy_outInt(static_cast<CommonAPI::EmptyDeployment*>(nullptr));
        CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> deploy_outString(static_cast<CommonAPI::DBus::StringDeployment*>(nullptr));
        return CommonAPI::DBus::DBusProxyHelper<
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment >,
            CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment >
            >,
            CommonAPI::DBus::DBusSerializableArguments<
            CommonAPI::Deployable<LeafInterface::testLeafMethodError, CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<int32_t,CommonAPI::EmptyDeployment>,
            CommonAPI::Deployable<std::string,CommonAPI::DBus::StringDeployment>
            >
        	>::callMethodAsync(
        *this,
        "testLeafMethod",
        "is",
        (_info ? _info : &CommonAPI::DBus::defaultCallInfo),
        deploy_inInt, deploy_inString,
        [_callback] (CommonAPI::CallStatus _internalCallStatus, CommonAPI::Deployable<LeafInterface::testLeafMethodError, CommonAPI::EmptyDeployment> _deploy_error, CommonAPI::Deployable<int32_t, CommonAPI::EmptyDeployment> _outInt, CommonAPI::Deployable<std::string, CommonAPI::DBus::StringDeployment> _outString) {
        	if (_callback)
        		_callback(_internalCallStatus, _deploy_error.getValue(), _outInt.getValue(), _outString.getValue());
        },
        std::make_tuple(deploy_error, deploy_outInt, deploy_outString));
    }


void LeafInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
          ownVersionMajor = 1;
          ownVersionMinor = 0;
      }

      } // namespace managed
      } // namespace tests
      } // namespace commonapi
      } // namespace v1
