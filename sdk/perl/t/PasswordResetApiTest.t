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
# NOTE: This class is auto generated by Swagger Codegen
# Please update the test cases below to test the API endpoints.
# Ref: https://github.com/swagger-api/swagger-codegen
#
use Test::More tests => 1; #TODO update number of test cases
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::SwaggerClient::PasswordResetApi');

my $api = WWW::SwaggerClient::PasswordResetApi->new();
isa_ok($api, 'WWW::SwaggerClient::PasswordResetApi');

#
# reset_password test
#
{
    my $verification_code = undef; # replace NULL with a proper value
    my $password_reset = undef; # replace NULL with a proper value
    my $result = $api->reset_password(verification_code => $verification_code, password_reset => $password_reset);
}

#
# send_verification_code test
#
{
    my $password_reset_request = undef; # replace NULL with a proper value
    my $result = $api->send_verification_code(password_reset_request => $password_reset_request);
}


1;
