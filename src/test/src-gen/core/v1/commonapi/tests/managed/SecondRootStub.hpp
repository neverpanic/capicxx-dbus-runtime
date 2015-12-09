/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.5.v201512091035.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_TESTS_MANAGED_Second_Root_STUB_HPP_
#define V1_COMMONAPI_TESTS_MANAGED_Second_Root_STUB_HPP_

#include <functional>



#include <v1/commonapi/tests/managed/LeafInterfaceStub.hpp>

#include <v1/commonapi/tests/managed/SecondRoot.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1 {
namespace commonapi {
namespace tests {
namespace managed {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service SecondRoot. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class SecondRootStubAdapter
    : public virtual CommonAPI::StubAdapter, 
      public virtual SecondRoot {
 public:


    virtual bool registerManagedStubLeafInterface(std::shared_ptr<::v1::commonapi::tests::managed::LeafInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubLeafInterface(const std::string&) = 0;
    virtual std::set<std::string>& getLeafInterfaceInstances() = 0;

    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for SecondRoot.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class SecondRootStubRemoteEvent
{
public:
    virtual ~SecondRootStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service SecondRoot to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class SecondRootStub
    : public virtual CommonAPI::Stub<SecondRootStubAdapter, SecondRootStubRemoteEvent>
{
public:

    virtual ~SecondRootStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;



    virtual bool registerManagedStubLeafInterface(std::shared_ptr<::v1::commonapi::tests::managed::LeafInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubLeafInterface(const std::string&) = 0;
    virtual std::set<std::string>& getLeafInterfaceInstances() = 0;
    using CommonAPI::Stub<SecondRootStubAdapter, SecondRootStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<SecondRootStubAdapter, SecondRootStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<SecondRootStubAdapter, SecondRootStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef SecondRootStubRemoteEvent RemoteEventType;
    typedef SecondRoot StubInterface;
};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1


// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_TESTS_MANAGED_Second_Root_STUB_HPP_
