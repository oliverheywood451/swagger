=begin
#OrderCloud

#A full ecommerce backend as a service.

OpenAPI spec version: 0.1
Contact: ordercloud@four51.com
Generated by: https://github.com/swagger-api/swagger-codegen.git

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=end

require "uri"

module SwaggerClient
  class ApprovalRuleApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Object]
    def create(buyer_id, approval_rule, opts = {})
      data, _status_code, _headers = create_with_http_info(buyer_id, approval_rule, opts)
      return data
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Array<(Object, Fixnum, Hash)>] Object data, response status code and response headers
    def create_with_http_info(buyer_id, approval_rule, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.create ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.create" if buyer_id.nil?
      # verify the required parameter 'approval_rule' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule' when calling ApprovalRuleApi.create" if approval_rule.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = @api_client.object_to_http_body(approval_rule)
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:POST, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Object')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#create\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param [Hash] opts the optional parameters
    # @return [nil]
    def delete(buyer_id, approval_rule_id, opts = {})
      delete_with_http_info(buyer_id, approval_rule_id, opts)
      return nil
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param [Hash] opts the optional parameters
    # @return [Array<(nil, Fixnum, Hash)>] nil, response status code and response headers
    def delete_with_http_info(buyer_id, approval_rule_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.delete ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.delete" if buyer_id.nil?
      # verify the required parameter 'approval_rule_id' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule_id' when calling ApprovalRuleApi.delete" if approval_rule_id.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules/{approvalRuleID}".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s).sub('{' + 'approvalRuleID' + '}', approval_rule_id.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:DELETE, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names)
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#delete\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param [Hash] opts the optional parameters
    # @return [Object]
    def get(buyer_id, approval_rule_id, opts = {})
      data, _status_code, _headers = get_with_http_info(buyer_id, approval_rule_id, opts)
      return data
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param [Hash] opts the optional parameters
    # @return [Array<(Object, Fixnum, Hash)>] Object data, response status code and response headers
    def get_with_http_info(buyer_id, approval_rule_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.get ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.get" if buyer_id.nil?
      # verify the required parameter 'approval_rule_id' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule_id' when calling ApprovalRuleApi.get" if approval_rule_id.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules/{approvalRuleID}".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s).sub('{' + 'approvalRuleID' + '}', approval_rule_id.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Object')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :search Word or phrase to search for.
    # @option opts [String] :search_on Comma-delimited list of fields to search on.
    # @option opts [String] :sort_by Comma-delimited list of fields to sort by.
    # @option opts [Integer] :page Page of results to return. Default: 1
    # @option opts [Integer] :page_size Number of results to return per page. Default: 20, max: 100.
    # @return [Object]
    def list(buyer_id, opts = {})
      data, _status_code, _headers = list_with_http_info(buyer_id, opts)
      return data
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param [Hash] opts the optional parameters
    # @option opts [String] :search Word or phrase to search for.
    # @option opts [String] :search_on Comma-delimited list of fields to search on.
    # @option opts [String] :sort_by Comma-delimited list of fields to sort by.
    # @option opts [Integer] :page Page of results to return. Default: 1
    # @option opts [Integer] :page_size Number of results to return per page. Default: 20, max: 100.
    # @return [Array<(Object, Fixnum, Hash)>] Object data, response status code and response headers
    def list_with_http_info(buyer_id, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.list ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.list" if buyer_id.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s)

      # query parameters
      query_params = {}
      query_params[:'search'] = opts[:'search'] if !opts[:'search'].nil?
      query_params[:'searchOn'] = opts[:'search_on'] if !opts[:'search_on'].nil?
      query_params[:'sortBy'] = opts[:'sort_by'] if !opts[:'sort_by'].nil?
      query_params[:'page'] = opts[:'page'] if !opts[:'page'].nil?
      query_params[:'pageSize'] = opts[:'page_size'] if !opts[:'page_size'].nil?

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Object')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#list\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param partial_approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Object]
    def patch(buyer_id, approval_rule_id, partial_approval_rule, opts = {})
      data, _status_code, _headers = patch_with_http_info(buyer_id, approval_rule_id, partial_approval_rule, opts)
      return data
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param partial_approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Array<(Object, Fixnum, Hash)>] Object data, response status code and response headers
    def patch_with_http_info(buyer_id, approval_rule_id, partial_approval_rule, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.patch ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.patch" if buyer_id.nil?
      # verify the required parameter 'approval_rule_id' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule_id' when calling ApprovalRuleApi.patch" if approval_rule_id.nil?
      # verify the required parameter 'partial_approval_rule' is set
      fail ArgumentError, "Missing the required parameter 'partial_approval_rule' when calling ApprovalRuleApi.patch" if partial_approval_rule.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules/{approvalRuleID}".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s).sub('{' + 'approvalRuleID' + '}', approval_rule_id.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = @api_client.object_to_http_body(partial_approval_rule)
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:PATCH, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Object')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#patch\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Object]
    def update(buyer_id, approval_rule_id, approval_rule, opts = {})
      data, _status_code, _headers = update_with_http_info(buyer_id, approval_rule_id, approval_rule, opts)
      return data
    end

    # 
    # 
    # @param buyer_id ID of the buyer.
    # @param approval_rule_id ID of the approval rule.
    # @param approval_rule 
    # @param [Hash] opts the optional parameters
    # @return [Array<(Object, Fixnum, Hash)>] Object data, response status code and response headers
    def update_with_http_info(buyer_id, approval_rule_id, approval_rule, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug "Calling API: ApprovalRuleApi.update ..."
      end
      # verify the required parameter 'buyer_id' is set
      fail ArgumentError, "Missing the required parameter 'buyer_id' when calling ApprovalRuleApi.update" if buyer_id.nil?
      # verify the required parameter 'approval_rule_id' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule_id' when calling ApprovalRuleApi.update" if approval_rule_id.nil?
      # verify the required parameter 'approval_rule' is set
      fail ArgumentError, "Missing the required parameter 'approval_rule' when calling ApprovalRuleApi.update" if approval_rule.nil?
      # resource path
      local_var_path = "/buyers/{buyerID}/approvalrules/{approvalRuleID}".sub('{format}','json').sub('{' + 'buyerID' + '}', buyer_id.to_s).sub('{' + 'approvalRuleID' + '}', approval_rule_id.to_s)

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}

      # HTTP header 'Accept' (if needed)
      local_header_accept = []
      local_header_accept_result = @api_client.select_header_accept(local_header_accept) and header_params['Accept'] = local_header_accept_result

      # HTTP header 'Content-Type'
      local_header_content_type = []
      header_params['Content-Type'] = @api_client.select_header_content_type(local_header_content_type)

      # form parameters
      form_params = {}

      # http body (model)
      post_body = @api_client.object_to_http_body(approval_rule)
      auth_names = ['auth']
      data, status_code, headers = @api_client.call_api(:PUT, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Object')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ApprovalRuleApi#update\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
