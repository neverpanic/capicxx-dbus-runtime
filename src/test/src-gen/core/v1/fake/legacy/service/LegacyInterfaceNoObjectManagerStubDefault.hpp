/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201512091035.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_FAKE_LEGACY_SERVICE_Legacy_Interface_No_Object_Manager_STUB_DEFAULT_HPP_
#define V1_FAKE_LEGACY_SERVICE_Legacy_Interface_No_Object_Manager_STUB_DEFAULT_HPP_

#include <v1/fake/legacy/service/LegacyInterfaceStubDefault.hpp>

#include <v1/fake/legacy/service/LegacyInterfaceNoObjectManagerStub.hpp>
#include <sstream>

namespace v1 {
namespace fake {
namespace legacy {
namespace service {

/**
 * Provides a default implementation for LegacyInterfaceNoObjectManagerStubRemoteEvent and
 * LegacyInterfaceNoObjectManagerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class LegacyInterfaceNoObjectManagerStubDefault
    : public virtual LegacyInterfaceNoObjectManagerStub,
      public virtual LegacyInterfaceStubDefault {
public:
    LegacyInterfaceNoObjectManagerStubDefault();

    LegacyInterfaceNoObjectManagerStubRemoteEvent* initStubAdapter(const std::shared_ptr<LegacyInterfaceNoObjectManagerStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);





protected:
    class RemoteEventHandler: public virtual LegacyInterfaceNoObjectManagerStubRemoteEvent, public virtual LegacyInterfaceStubDefault::RemoteEventHandler {
    public:
        RemoteEventHandler(LegacyInterfaceNoObjectManagerStubDefault *_defaultStub);


    private:
        LegacyInterfaceNoObjectManagerStubDefault *defaultStub_;
    };
private:
    LegacyInterfaceNoObjectManagerStubDefault::RemoteEventHandler remoteEventHandler_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace service
} // namespace legacy
} // namespace fake
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_FAKE_LEGACY_SERVICE_Legacy_Interface_No_Object_Manager_STUB_DEFAULT
