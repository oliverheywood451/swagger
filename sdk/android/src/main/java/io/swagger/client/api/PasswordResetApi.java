/**
 * OrderCloud
 * A full ecommerce backend as a service.
 *
 * OpenAPI spec version: 0.1
 * Contact: ordercloud@four51.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package io.swagger.client.api;

import io.swagger.client.ApiInvoker;
import io.swagger.client.ApiException;
import io.swagger.client.Pair;

import io.swagger.client.model.*;

import java.util.*;

import com.android.volley.Response;
import com.android.volley.VolleyError;

import io.swagger.client.model.PasswordReset;
import io.swagger.client.model.PasswordResetRequest;

import org.apache.http.HttpEntity;
import org.apache.http.entity.mime.MultipartEntityBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.TimeoutException;

public class PasswordResetApi {
  String basePath = "https://api.ordercloud.io/v1";
  ApiInvoker apiInvoker = ApiInvoker.getInstance();

  public void addHeader(String key, String value) {
    getInvoker().addDefaultHeader(key, value);
  }

  public ApiInvoker getInvoker() {
    return apiInvoker;
  }

  public void setBasePath(String basePath) {
    this.basePath = basePath;
  }

  public String getBasePath() {
    return basePath;
  }

  /**
  * 
  * 
   * @param verificationCode Verification code of the forgotten password.
   * @param passwordReset 
   * @return void
  */
  public void resetPassword (String verificationCode, PasswordReset passwordReset) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
     Object postBody = passwordReset;
  
      // verify the required parameter 'verificationCode' is set
      if (verificationCode == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'verificationCode' when calling resetPassword",
      new ApiException(400, "Missing the required parameter 'verificationCode' when calling resetPassword"));
      }
  
      // verify the required parameter 'passwordReset' is set
      if (passwordReset == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'passwordReset' when calling resetPassword",
      new ApiException(400, "Missing the required parameter 'passwordReset' when calling resetPassword"));
      }
  

  // create path and map variables
  String path = "/password/reset/{verificationCode}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "verificationCode" + "\\}", apiInvoker.escapeString(verificationCode.toString()));

  // query params
  List<Pair> queryParams = new ArrayList<Pair>();
      // header params
      Map<String, String> headerParams = new HashMap<String, String>();
      // form params
      Map<String, String> formParams = new HashMap<String, String>();



      String[] contentTypes = {
  
      };
      String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

      if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
  

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
      } else {
      // normal form params
        }

      String[] authNames = new String[] { "auth" };

      try {
        String localVarResponse = apiInvoker.invokeAPI (basePath, path, "PUT", queryParams, postBody, headerParams, formParams, contentType, authNames);
        if(localVarResponse != null){
           return ;
        } else {
           return ;
        }
      } catch (ApiException ex) {
         throw ex;
      } catch (InterruptedException ex) {
         throw ex;
      } catch (ExecutionException ex) {
         if(ex.getCause() instanceof VolleyError) {
	    VolleyError volleyError = (VolleyError)ex.getCause();
	    if (volleyError.networkResponse != null) {
	       throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
	    }
         }
         throw ex;
      } catch (TimeoutException ex) {
         throw ex;
      }
  }

      /**
   * 
   * 
   * @param verificationCode Verification code of the forgotten password.   * @param passwordReset 
  */
  public void resetPassword (String verificationCode, PasswordReset passwordReset, final Response.Listener<String> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = passwordReset;

  
    // verify the required parameter 'verificationCode' is set
    if (verificationCode == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'verificationCode' when calling resetPassword",
         new ApiException(400, "Missing the required parameter 'verificationCode' when calling resetPassword"));
    }
    
    // verify the required parameter 'passwordReset' is set
    if (passwordReset == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'passwordReset' when calling resetPassword",
         new ApiException(400, "Missing the required parameter 'passwordReset' when calling resetPassword"));
    }
    

    // create path and map variables
    String path = "/password/reset/{verificationCode}".replaceAll("\\{format\\}","json").replaceAll("\\{" + "verificationCode" + "\\}", apiInvoker.escapeString(verificationCode.toString()));

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

      String[] authNames = new String[] { "auth" };

    try {
      apiInvoker.invokeAPI(basePath, path, "PUT", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
              responseListener.onResponse(localVarResponse);
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
  /**
  * 
  * 
   * @param passwordResetRequest 
   * @return void
  */
  public void sendVerificationCode (PasswordResetRequest passwordResetRequest) throws TimeoutException, ExecutionException, InterruptedException, ApiException {
     Object postBody = passwordResetRequest;
  
      // verify the required parameter 'passwordResetRequest' is set
      if (passwordResetRequest == null) {
      VolleyError error = new VolleyError("Missing the required parameter 'passwordResetRequest' when calling sendVerificationCode",
      new ApiException(400, "Missing the required parameter 'passwordResetRequest' when calling sendVerificationCode"));
      }
  

  // create path and map variables
  String path = "/password/reset".replaceAll("\\{format\\}","json");

  // query params
  List<Pair> queryParams = new ArrayList<Pair>();
      // header params
      Map<String, String> headerParams = new HashMap<String, String>();
      // form params
      Map<String, String> formParams = new HashMap<String, String>();



      String[] contentTypes = {
  
      };
      String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

      if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
  

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
      } else {
      // normal form params
        }

      String[] authNames = new String[] { "auth" };

      try {
        String localVarResponse = apiInvoker.invokeAPI (basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType, authNames);
        if(localVarResponse != null){
           return ;
        } else {
           return ;
        }
      } catch (ApiException ex) {
         throw ex;
      } catch (InterruptedException ex) {
         throw ex;
      } catch (ExecutionException ex) {
         if(ex.getCause() instanceof VolleyError) {
	    VolleyError volleyError = (VolleyError)ex.getCause();
	    if (volleyError.networkResponse != null) {
	       throw new ApiException(volleyError.networkResponse.statusCode, volleyError.getMessage());
	    }
         }
         throw ex;
      } catch (TimeoutException ex) {
         throw ex;
      }
  }

      /**
   * 
   * 
   * @param passwordResetRequest 
  */
  public void sendVerificationCode (PasswordResetRequest passwordResetRequest, final Response.Listener<String> responseListener, final Response.ErrorListener errorListener) {
    Object postBody = passwordResetRequest;

  
    // verify the required parameter 'passwordResetRequest' is set
    if (passwordResetRequest == null) {
       VolleyError error = new VolleyError("Missing the required parameter 'passwordResetRequest' when calling sendVerificationCode",
         new ApiException(400, "Missing the required parameter 'passwordResetRequest' when calling sendVerificationCode"));
    }
    

    // create path and map variables
    String path = "/password/reset".replaceAll("\\{format\\}","json");

    // query params
    List<Pair> queryParams = new ArrayList<Pair>();
    // header params
    Map<String, String> headerParams = new HashMap<String, String>();
    // form params
    Map<String, String> formParams = new HashMap<String, String>();



    String[] contentTypes = {
      
    };
    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";

    if (contentType.startsWith("multipart/form-data")) {
      // file uploading
      MultipartEntityBuilder localVarBuilder = MultipartEntityBuilder.create();
      

      HttpEntity httpEntity = localVarBuilder.build();
      postBody = httpEntity;
    } else {
      // normal form params
          }

      String[] authNames = new String[] { "auth" };

    try {
      apiInvoker.invokeAPI(basePath, path, "POST", queryParams, postBody, headerParams, formParams, contentType, authNames,
        new Response.Listener<String>() {
          @Override
          public void onResponse(String localVarResponse) {
              responseListener.onResponse(localVarResponse);
          }
      }, new Response.ErrorListener() {
          @Override
          public void onErrorResponse(VolleyError error) {
            errorListener.onErrorResponse(error);
          }
      });
    } catch (ApiException ex) {
      errorListener.onErrorResponse(new VolleyError(ex));
    }
  }
}
