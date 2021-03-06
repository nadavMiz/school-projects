#ifndef __EVENT_SERIALIZER_H__
#define __EVENT_SERIALIZER_H__

#include <sstream>

#include "event.h"
#include "protocolMsg.h"
#include "eventImp.h" //EventImp::m_keyValueDelim

namespace smartCampus
{

class EventSerializer
{
public:
	//EventSerializer();
	//~EventSerializer();
	ProtocolMsg Serialize(const Event& _event) const;
	void DeserializeHeader(const ProtocolMsg& _msg, Event& _event) const;
	
private:
	void SerializeHeader(const Event& _event, ProtocolMsg& _msg) const;
};

}
#endif /* __EVENT_SERIALIZER_H__ */

