#include "SamiAddressApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAddressApi::SamiAddressApi() {

}

SamiAddressApi::~SamiAddressApi() {

}

void
createProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::createWithCompletion(String* buyerID, SamiAddress* address, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(address != null) {
    mBody = new String(address->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/buyers/{buyerID}/addresses");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiAddressApi::deleteWithCompletion(String* buyerID, String* addressID, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/buyers/{buyerID}/addresses/{addressID}");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));
  String s_addressID(L"{");
  s_addressID.Append(L"addressID");
  s_addressID.Append(L"}");
  url.Replace(s_addressID, stringify(addressID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteAssignmentProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiAddressApi::deleteAssignmentWithCompletion(String* buyerID, String* addressID, String* userID, String* userGroupID, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteAssignmentProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("userID"), userID);

    queryParams->Add(new String("userGroupID"), userGroupID);

  String* mBody = null;


  String url(L"/buyers/{buyerID}/addresses/{addressID}/assignments");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));
  String s_addressID(L"{");
  s_addressID.Append(L"addressID");
  s_addressID.Append(L"}");
  url.Replace(s_addressID, stringify(addressID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::getWithCompletion(String* buyerID, String* addressID, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/buyers/{buyerID}/addresses/{addressID}");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));
  String s_addressID(L"{");
  s_addressID.Append(L"addressID");
  s_addressID.Append(L"}");
  url.Replace(s_addressID, stringify(addressID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
listProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::listWithCompletion(String* buyerID, String* search, String* searchOn, String* sortBy, Integer* page, Integer* pageSize, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&listProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("search"), search);

    queryParams->Add(new String("searchOn"), searchOn);

    queryParams->Add(new String("sortBy"), sortBy);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("pageSize"), pageSize);

  String* mBody = null;


  String url(L"/buyers/{buyerID}/addresses");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
listAssignmentsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::listAssignmentsWithCompletion(String* buyerID, String* addressID, String* userID, String* userGroupID, String* level, Boolean* isShipping, Boolean* isBilling, Integer* page, Integer* pageSize, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&listAssignmentsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("addressID"), addressID);

    queryParams->Add(new String("userID"), userID);

    queryParams->Add(new String("userGroupID"), userGroupID);

    queryParams->Add(new String("level"), level);

    queryParams->Add(new String("isShipping"), isShipping);

    queryParams->Add(new String("isBilling"), isBilling);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("pageSize"), pageSize);

  String* mBody = null;


  String url(L"/buyers/{buyerID}/addresses/assignments");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
patchProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::patchWithCompletion(String* buyerID, String* addressID, SamiAddress* address, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&patchProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(address != null) {
    mBody = new String(address->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/buyers/{buyerID}/addresses/{addressID}");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));
  String s_addressID(L"{");
  s_addressID.Append(L"addressID");
  s_addressID.Append(L"}");
  url.Replace(s_addressID, stringify(addressID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "PATCH", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
saveAssignmentProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiAddressApi::saveAssignmentWithCompletion(String* buyerID, SamiAddressAssignment* assignment, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&saveAssignmentProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(assignment != null) {
    mBody = new String(assignment->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/buyers/{buyerID}/addresses/assignments");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiObject* out = null;
    jsonToValue(out, pJson, L"SamiObject*", L"SamiObject");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiObject* 
SamiAddressApi::updateWithCompletion(String* buyerID, String* addressID, SamiAddress* address, void (* success)(SamiObject*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(address != null) {
    mBody = new String(address->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/buyers/{buyerID}/addresses/{addressID}");

  String s_buyerID(L"{");
  s_buyerID.Append(L"buyerID");
  s_buyerID.Append(L"}");
  url.Replace(s_buyerID, stringify(buyerID, L"String*"));
  String s_addressID(L"{");
  s_addressID.Append(L"addressID");
  s_addressID.Append(L"}");
  url.Replace(s_addressID, stringify(addressID, L"String*"));

  client->execute(SamiAddressApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
