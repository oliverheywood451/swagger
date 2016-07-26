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

use_ok('WWW::SwaggerClient::PaymentApi');

my $api = WWW::SwaggerClient::PaymentApi->new();
isa_ok($api, 'WWW::SwaggerClient::PaymentApi');

#
# create test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment = undef; # replace NULL with a proper value
    my $result = $api->create(buyer_id => $buyer_id, order_id => $order_id, payment => $payment);
}

#
# create_transaction test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $transaction = undef; # replace NULL with a proper value
    my $result = $api->create_transaction(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, transaction => $transaction);
}

#
# delete test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $result = $api->delete(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id);
}

#
# delete_transaction test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $transaction_id = undef; # replace NULL with a proper value
    my $result = $api->delete_transaction(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, transaction_id => $transaction_id);
}

#
# get test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $result = $api->get(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id);
}

#
# list test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $search = undef; # replace NULL with a proper value
    my $search_on = undef; # replace NULL with a proper value
    my $sort_by = undef; # replace NULL with a proper value
    my $page = undef; # replace NULL with a proper value
    my $page_size = undef; # replace NULL with a proper value
    my $result = $api->list(buyer_id => $buyer_id, order_id => $order_id, search => $search, search_on => $search_on, sort_by => $sort_by, page => $page, page_size => $page_size);
}

#
# patch test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $partial_payment = undef; # replace NULL with a proper value
    my $result = $api->patch(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, partial_payment => $partial_payment);
}

#
# patch_transaction test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $transaction_id = undef; # replace NULL with a proper value
    my $partial_transaction = undef; # replace NULL with a proper value
    my $result = $api->patch_transaction(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, transaction_id => $transaction_id, partial_transaction => $partial_transaction);
}

#
# update test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $payment = undef; # replace NULL with a proper value
    my $result = $api->update(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, payment => $payment);
}

#
# update_transaction test
#
{
    my $buyer_id = undef; # replace NULL with a proper value
    my $order_id = undef; # replace NULL with a proper value
    my $payment_id = undef; # replace NULL with a proper value
    my $transaction_id = undef; # replace NULL with a proper value
    my $transaction = undef; # replace NULL with a proper value
    my $result = $api->update_transaction(buyer_id => $buyer_id, order_id => $order_id, payment_id => $payment_id, transaction_id => $transaction_id, transaction => $transaction);
}


1;
