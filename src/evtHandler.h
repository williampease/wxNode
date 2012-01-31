
#ifndef _NodeEvtHandler_h_
#define _NodeEvtHandler_h_

#include "wxnode.h"
#include <vector>

class NodeWxEvtHandler;

class ListenerData {
public:
  ListenerData(int eventType, v8::Local<v8::Object> fn);

  v8::Persistent<v8::Object> m_fn;
  int m_eventType;
};

class NodeExEvtHandlerImpl {
public:
  friend class EventProxy;
  friend class NodeWxEvtHandler;

  NodeExEvtHandlerImpl();
  virtual ~NodeExEvtHandlerImpl();

protected:
  virtual void fireEvent(uint32_t iListener, wxEvent& event);
  virtual void addCommandRangeListener(wxEvtHandler* evtHandler, int id, int lastId, int eventType, v8::Local<v8::Object> fn);
  virtual void addCommandListener(wxEvtHandler* evtHandler, int id, int eventType, v8::Local<v8::Object> fn);
  virtual void connect(wxEvtHandler* evtHandler, int id, int lastId, int eventType, v8::Local<v8::Object> fn);

  virtual v8::Handle<v8::Object> self() = 0;

  std::vector<ListenerData*>* m_listeners;
};

struct EventProxyData : public wxObject {
  NodeExEvtHandlerImpl* m_self;
  uint32_t m_iListener;
};

class EventProxy : public wxEvtHandler
{
public:
	void forwardEvent(wxEvent& event);
};

class NodeWxEvtHandler : public wxEvtHandler, public wxNodeObject {
public:
  static void InitMethods(v8::Handle<v8::FunctionTemplate> func);

protected:
  static v8::Handle<v8::Value> _EVT_MENU(const v8::Arguments& args);
};

#endif