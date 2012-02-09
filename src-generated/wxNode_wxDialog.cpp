
#include <sstream>
#include "wxNode_wxDialog.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxTopLevelWindow.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxTextSizerWrapper.h"
#include "wxNode_wxStdDialogButtonSizer.h"
#include "wxNode_wxArrayInt.h"
#include "wxNode_wxDialogLayoutAdapter.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxDialog::s_ct;



wxNode_wxDialog::wxNode_wxDialog()
  : wxDialog()
{

}

wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxDialog(parent, id, title, pos, size, style, name)
{

}

wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style)
  : wxDialog(parent, id, title, pos, size, style)
{

}

wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size)
  : wxDialog(parent, id, title, pos, size)
{

}

wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos)
  : wxDialog(parent, id, title, pos)
{

}

wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title)
  : wxDialog(parent, id, title)
{

}




/*static*/ void wxNode_wxDialog::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxDialog"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxDialog"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxDialog::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxTopLevelWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "showModal", _ShowModal);
  NODE_SET_PROTOTYPE_METHOD(target, "endModal", _EndModal);
  NODE_SET_PROTOTYPE_METHOD(target, "isModal", _IsModal);
  NODE_SET_PROTOTYPE_METHOD(target, "showWindowModal", _ShowWindowModal);
  NODE_SET_PROTOTYPE_METHOD(target, "sendWindowModalDialogEvent", _SendWindowModalDialogEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "setReturnCode", _SetReturnCode);
  NODE_SET_PROTOTYPE_METHOD(target, "getReturnCode", _GetReturnCode);
  NODE_SET_PROTOTYPE_METHOD(target, "setAffirmativeId", _SetAffirmativeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getAffirmativeId", _GetAffirmativeId);
  NODE_SET_PROTOTYPE_METHOD(target, "setEscapeId", _SetEscapeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getEscapeId", _GetEscapeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getParentForModalDialog", _GetParentForModalDialog);
  NODE_SET_PROTOTYPE_METHOD(target, "createTextSizer", _CreateTextSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createButtonSizer", _CreateButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createSeparatedSizer", _CreateSeparatedSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createSeparatedButtonSizer", _CreateSeparatedButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createStdDialogButtonSizer", _CreateStdDialogButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "doLayoutAdaptation", _DoLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "canDoLayoutAdaptation", _CanDoLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "getContentWindow", _GetContentWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "addMainButtonId", _AddMainButtonId);
  NODE_SET_PROTOTYPE_METHOD(target, "getMainButtonIds", _GetMainButtonIds);
  NODE_SET_PROTOTYPE_METHOD(target, "isMainButtonId", _IsMainButtonId);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationLevel", _SetLayoutAdaptationLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationLevel", _GetLayoutAdaptationLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationMode", _SetLayoutAdaptationMode);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationMode", _GetLayoutAdaptationMode);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationDone", _SetLayoutAdaptationDone);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationDone", _GetLayoutAdaptationDone);
  NODE_SET_METHOD(target, "setLayoutAdapter", _SetLayoutAdapter);
  NODE_SET_METHOD(target, "getLayoutAdapter", _GetLayoutAdapter);
  NODE_SET_METHOD(target, "isLayoutAdaptationEnabled", _IsLayoutAdaptationEnabled);
  NODE_SET_METHOD(target, "enableLayoutAdaptation", _EnableLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "getModality", _GetModality);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::New(const wxNode_wxDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxDialog"));
  wxNode_wxDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxDialog*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::New(const wxDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxDialog"));
  wxNode_wxDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::NewCopy(const wxDialog& obj) {
  v8::HandleScope scope;
  wxNode_wxDialog* returnVal = new wxNode_wxDialog();
  memcpy(dynamic_cast<wxDialog*>(returnVal), &obj, sizeof(wxDialog));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxDialog::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxDialog::AssignableFrom(const char* className) {
  if(!strcmp("wxDialog", className)) { return true; }
  
  if(!strcmp("wxDialog", className)) { return true; }

  if(!strcmp("wxFontDialogBase", className)) { return true; }

  if(!strcmp("wxFontDialog", className)) { return true; }
  if(!strcmp("wxRearrangeDialog", className)) { return true; }
  if(!strcmp("wxDirDialogBase", className)) { return true; }

  if(!strcmp("wxDirDialog", className)) { return true; }
  if(!strcmp("wxWizardBase", className)) { return true; }

  if(!strcmp("wxWizard", className)) { return true; }
  if(!strcmp("wxMessageDialogBase", className)) { return true; }

  if(!strcmp("wxMessageDialog", className)) { return true; }
  if(!strcmp("wxGenericMessageDialog", className)) { return true; }

  if(!strcmp("wxRichMessageDialogBase", className)) { return true; }

  if(!strcmp("wxGenericRichMessageDialog", className)) { return true; }

  if(!strcmp("wxRichMessageDialog", className)) { return true; }
  if(!strcmp("wxColourDialog", className)) { return true; }
  if(!strcmp("wxHtmlHelpDialog", className)) { return true; }
  if(!strcmp("wxFindReplaceDialogBase", className)) { return true; }

  if(!strcmp("wxFindReplaceDialog", className)) { return true; }
  if(!strcmp("wxPrintAbortDialog", className)) { return true; }
  if(!strcmp("wxAnyChoiceDialog", className)) { return true; }

  if(!strcmp("wxSingleChoiceDialog", className)) { return true; }
  if(!strcmp("wxMultiChoiceDialog", className)) { return true; }
  if(!strcmp("wxTextEntryDialog", className)) { return true; }

  if(!strcmp("wxPasswordEntryDialog", className)) { return true; }
  if(!strcmp("wxRichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("wxPrintDialogBase", className)) { return true; }
  if(!strcmp("wxPageSetupDialogBase", className)) { return true; }
  if(!strcmp("wxSymbolPickerDialog", className)) { return true; }
  if(!strcmp("wxFileDialogBase", className)) { return true; }

  if(!strcmp("wxFileDialog", className)) { return true; }
  if(!strcmp("wxNumberEntryDialog", className)) { return true; }
  if(!strcmp("wxPropertySheetDialog", className)) { return true; }

  if(!strcmp("wxRichTextFormattingDialog", className)) { return true; }
  if(!strcmp("wxGenericProgressDialog", className)) { return true; }

  if(!strcmp("wxProgressDialog", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _38200
   */
  if(args.Length() == 0) {
    

    wxNode_wxDialog *self = new wxNode_wxDialog();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38201
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38201
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38201
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38201
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38201
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_ShowModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47833
   */
  if(args.Length() == 0) {
    

    int returnVal = self->ShowModal();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::ShowModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_EndModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47834
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int retCode = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->EndModal(retCode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::EndModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47835
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsModal();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_ShowWindowModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47836
   */
  if(args.Length() == 0) {
    

    self->ShowWindowModal();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::ShowWindowModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SendWindowModalDialogEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47837
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int type = (int)args[0]->ToInt32()->Value(); /* type: _980  */
    

    self->SendWindowModalDialogEvent(type);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SendWindowModalDialogEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetReturnCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47838
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int returnCode = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetReturnCode(returnCode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetReturnCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetReturnCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47839
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetReturnCode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetReturnCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetAffirmativeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47840
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int affirmativeId = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetAffirmativeId(affirmativeId);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetAffirmativeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetAffirmativeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47841
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetAffirmativeId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetAffirmativeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetEscapeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47842
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int escapeId = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetEscapeId(escapeId);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetEscapeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetEscapeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47843
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetEscapeId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetEscapeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetParentForModalDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47844
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    const wxWindow* returnVal = self->GetParentForModalDialog(parent, style);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _47845
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetParentForModalDialog();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetParentForModalDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateTextSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47846
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue message(args[0]->ToString()); /* type: _14808  */
    

    wxSizer* returnVal = self->CreateTextSizer(*message);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  
  /*
   * id: _47847
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxTextSizerWrapper::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue message(args[0]->ToString()); /* type: _14808  */
    wxNode_wxTextSizerWrapper* wrapper = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextSizerWrapper>(args[1]->ToObject()); /* type: _66827  */
    

    wxSizer* returnVal = self->CreateTextSizer(*message, *wrapper);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateTextSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47848
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxSizer* returnVal = self->CreateButtonSizer(flags);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateSeparatedSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47849
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    wxSizer* returnVal = self->CreateSeparatedSizer(sizer);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateSeparatedSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateSeparatedButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47850
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxSizer* returnVal = self->CreateSeparatedButtonSizer(flags);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateSeparatedButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateStdDialogButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47851
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxStdDialogButtonSizer* returnVal = self->CreateStdDialogButtonSizer(flags);

    return scope.Close(wxNode_wxStdDialogButtonSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateStdDialogButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_DoLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47852
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DoLayoutAdaptation();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::DoLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CanDoLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47853
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanDoLayoutAdaptation();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CanDoLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetContentWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47854
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetContentWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetContentWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_AddMainButtonId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47855
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    

    self->AddMainButtonId(id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::AddMainButtonId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetMainButtonIds(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47856
   */
  if(args.Length() == 0) {
    

    wxArrayInt returnVal = self->GetMainButtonIds();

    return scope.Close(wxNode_wxArrayInt::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetMainButtonIds).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsMainButtonId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47857
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    

    bool returnVal = self->IsMainButtonId(id);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsMainButtonId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47858
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int level = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetLayoutAdaptationLevel(level);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationLevel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47859
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetLayoutAdaptationLevel();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationLevel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationMode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47860
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxDialogLayoutAdaptationMode mode = (wxDialogLayoutAdaptationMode)args[0]->ToNumber()->Value(); /* type: _13271  */
    

    self->SetLayoutAdaptationMode(mode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationMode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationMode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47861
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetLayoutAdaptationMode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationMode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationDone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47862
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool adaptationDone = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetLayoutAdaptationDone(adaptationDone);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationDone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationDone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47863
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetLayoutAdaptationDone();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationDone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdapter(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47864
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxDialogLayoutAdapter::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxDialogLayoutAdapter* adapter = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDialogLayoutAdapter>(args[0]->ToObject()); /* type: _66826 * */
    

    wxDialogLayoutAdapter* returnVal = self->SetLayoutAdapter(adapter);

    return scope.Close(wxNode_wxDialogLayoutAdapter::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdapter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdapter(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47865
   */
  if(args.Length() == 0) {
    

    wxDialogLayoutAdapter* returnVal = self->GetLayoutAdapter();

    return scope.Close(wxNode_wxDialogLayoutAdapter::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdapter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsLayoutAdaptationEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47866
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsLayoutAdaptationEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsLayoutAdaptationEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_EnableLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47867
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->EnableLayoutAdaptation(enable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::EnableLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetModality(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _47868
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetModality();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetModality).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
