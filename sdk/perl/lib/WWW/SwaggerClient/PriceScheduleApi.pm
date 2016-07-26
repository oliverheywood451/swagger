=begin comment

OrderCloud

A full ecommerce backend as a service.

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

=end comment

=cut

#
# NOTE: This class is auto generated by the swagger code generator program. 
# Do not edit the class manually.
# Ref: https://github.com/swagger-api/swagger-codegen
#
package WWW::SwaggerClient::PriceScheduleApi;

require 5.6.0;
use strict;
use warnings;
use utf8; 
use Exporter;
use Carp qw( croak );
use Log::Any qw($log);

use WWW::SwaggerClient::ApiClient;
use WWW::SwaggerClient::Configuration;

use base "Class::Data::Inheritable";

__PACKAGE__->mk_classdata('method_documentation' => {});

sub new {
    my $class   = shift;
    my (%self) = (
        'api_client' => WWW::SwaggerClient::ApiClient->instance,
        @_
    );

    #my $self = {
    #    #api_client => $options->{api_client}
    #    api_client => $default_api_client
    #}; 

    bless \%self, $class;

}


#
# create
#
# 
# 
# @param PriceSchedule $price_schedule  (required)
{
    my $params = {
    'price_schedule' => {
        data_type => 'PriceSchedule',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'create' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub create {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule' is set
    unless (exists $args{'price_schedule'}) {
      croak("Missing the required parameter 'price_schedule' when calling create");
    }

    # parse inputs
    my $_resource_path = '/priceschedules';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    my $_body_data;
    # body params
    if ( exists $args{'price_schedule'}) {
        $_body_data = $args{'price_schedule'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

#
# delete
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'delete' } = { 
    	summary => '',
        params => $params,
        returns => undef,
        };
}
# @return void
#
sub delete {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling delete");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'DELETE';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    return;
}

#
# delete_price_break
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
# @param int $quantity Quantity of the price schedule. (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    'quantity' => {
        data_type => 'int',
        description => 'Quantity of the price schedule.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'delete_price_break' } = { 
    	summary => '',
        params => $params,
        returns => undef,
        };
}
# @return void
#
sub delete_price_break {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling delete_price_break");
    }

    # verify the required parameter 'quantity' is set
    unless (exists $args{'quantity'}) {
      croak("Missing the required parameter 'quantity' when calling delete_price_break");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}/PriceBreaks';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'DELETE';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'quantity'}) {
        $query_params->{'quantity'} = $self->{api_client}->to_query_value($args{'quantity'});
    }

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    return;
}

#
# get
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'get' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub get {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling get");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

#
# list
#
# 
# 
# @param string $search Word or phrase to search for. (optional)
# @param string $search_on Comma-delimited list of fields to search on. (optional)
# @param string $sort_by Comma-delimited list of fields to sort by. (optional)
# @param int $page Page of results to return. Default: 1 (optional)
# @param int $page_size Number of results to return per page. Default: 20, max: 100. (optional)
{
    my $params = {
    'search' => {
        data_type => 'string',
        description => 'Word or phrase to search for.',
        required => '0',
    },
    'search_on' => {
        data_type => 'string',
        description => 'Comma-delimited list of fields to search on.',
        required => '0',
    },
    'sort_by' => {
        data_type => 'string',
        description => 'Comma-delimited list of fields to sort by.',
        required => '0',
    },
    'page' => {
        data_type => 'int',
        description => 'Page of results to return. Default: 1',
        required => '0',
    },
    'page_size' => {
        data_type => 'int',
        description => 'Number of results to return per page. Default: 20, max: 100.',
        required => '0',
    },
    };
    __PACKAGE__->method_documentation->{ 'list' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub list {
    my ($self, %args) = @_;

    # parse inputs
    my $_resource_path = '/priceschedules';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'GET';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # query params
    if ( exists $args{'search'}) {
        $query_params->{'search'} = $self->{api_client}->to_query_value($args{'search'});
    }

    # query params
    if ( exists $args{'search_on'}) {
        $query_params->{'searchOn'} = $self->{api_client}->to_query_value($args{'search_on'});
    }

    # query params
    if ( exists $args{'sort_by'}) {
        $query_params->{'sortBy'} = $self->{api_client}->to_query_value($args{'sort_by'});
    }

    # query params
    if ( exists $args{'page'}) {
        $query_params->{'page'} = $self->{api_client}->to_query_value($args{'page'});
    }

    # query params
    if ( exists $args{'page_size'}) {
        $query_params->{'pageSize'} = $self->{api_client}->to_query_value($args{'page_size'});
    }

    my $_body_data;
    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

#
# patch
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
# @param PriceSchedule $price_schedule  (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    'price_schedule' => {
        data_type => 'PriceSchedule',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'patch' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub patch {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling patch");
    }

    # verify the required parameter 'price_schedule' is set
    unless (exists $args{'price_schedule'}) {
      croak("Missing the required parameter 'price_schedule' when calling patch");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'PATCH';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # body params
    if ( exists $args{'price_schedule'}) {
        $_body_data = $args{'price_schedule'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

#
# save_price_break
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
# @param PriceBreak $price_break  (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    'price_break' => {
        data_type => 'PriceBreak',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'save_price_break' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub save_price_break {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling save_price_break");
    }

    # verify the required parameter 'price_break' is set
    unless (exists $args{'price_break'}) {
      croak("Missing the required parameter 'price_break' when calling save_price_break");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}/PriceBreaks';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'POST';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # body params
    if ( exists $args{'price_break'}) {
        $_body_data = $args{'price_break'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

#
# update
#
# 
# 
# @param string $price_schedule_id ID of the price schedule. (required)
# @param PriceSchedule $price_schedule  (required)
{
    my $params = {
    'price_schedule_id' => {
        data_type => 'string',
        description => 'ID of the price schedule.',
        required => '1',
    },
    'price_schedule' => {
        data_type => 'PriceSchedule',
        description => '',
        required => '1',
    },
    };
    __PACKAGE__->method_documentation->{ 'update' } = { 
    	summary => '',
        params => $params,
        returns => 'object',
        };
}
# @return object
#
sub update {
    my ($self, %args) = @_;

    # verify the required parameter 'price_schedule_id' is set
    unless (exists $args{'price_schedule_id'}) {
      croak("Missing the required parameter 'price_schedule_id' when calling update");
    }

    # verify the required parameter 'price_schedule' is set
    unless (exists $args{'price_schedule'}) {
      croak("Missing the required parameter 'price_schedule' when calling update");
    }

    # parse inputs
    my $_resource_path = '/priceschedules/{priceScheduleID}';
    $_resource_path =~ s/{format}/json/; # default format to json

    my $_method = 'PUT';
    my $query_params = {};
    my $header_params = {};
    my $form_params = {};

    # 'Accept' and 'Content-Type' header
    my $_header_accept = $self->{api_client}->select_header_accept();
    if ($_header_accept) {
        $header_params->{'Accept'} = $_header_accept;
    }
    $header_params->{'Content-Type'} = $self->{api_client}->select_header_content_type();

    # path params
    if ( exists $args{'price_schedule_id'}) {
        my $_base_variable = "{" . "priceScheduleID" . "}";
        my $_base_value = $self->{api_client}->to_path_value($args{'price_schedule_id'});
        $_resource_path =~ s/$_base_variable/$_base_value/g;
    }

    my $_body_data;
    # body params
    if ( exists $args{'price_schedule'}) {
        $_body_data = $args{'price_schedule'};
    }

    # authentication setting, if any
    my $auth_settings = [qw(auth )];

    # make the API Call
    my $response = $self->{api_client}->call_api($_resource_path, $_method,
                                           $query_params, $form_params,
                                           $header_params, $_body_data, $auth_settings);
    if (!$response) {
        return;
    }
    my $_response_object = $self->{api_client}->deserialize('object', $response);
    return $_response_object;
}

1;
