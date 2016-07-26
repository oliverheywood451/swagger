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
package WWW::SwaggerClient::Object::BuyerAddress;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by the swagger code generator program. Do not edit the class manually.
# REF: https://github.com/swagger-api/swagger-codegen
#

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
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('swagger_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use swagger_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->swagger_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::SwaggerClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'BuyerAddress',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'shipping' => {
    	datatype => 'boolean',
    	base_name => 'Shipping',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'billing' => {
    	datatype => 'boolean',
    	base_name => 'Billing',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'company_name' => {
    	datatype => 'string',
    	base_name => 'CompanyName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'first_name' => {
    	datatype => 'string',
    	base_name => 'FirstName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'last_name' => {
    	datatype => 'string',
    	base_name => 'LastName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'street1' => {
    	datatype => 'string',
    	base_name => 'Street1',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'street2' => {
    	datatype => 'string',
    	base_name => 'Street2',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'city' => {
    	datatype => 'string',
    	base_name => 'City',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'state' => {
    	datatype => 'string',
    	base_name => 'State',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'zip' => {
    	datatype => 'string',
    	base_name => 'Zip',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'country' => {
    	datatype => 'string',
    	base_name => 'Country',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'phone' => {
    	datatype => 'string',
    	base_name => 'Phone',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'address_name' => {
    	datatype => 'string',
    	base_name => 'AddressName',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'xp' => {
    	datatype => 'object',
    	base_name => 'xp',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->swagger_types( {
    'shipping' => 'boolean',
    'billing' => 'boolean',
    'company_name' => 'string',
    'first_name' => 'string',
    'last_name' => 'string',
    'street1' => 'string',
    'street2' => 'string',
    'city' => 'string',
    'state' => 'string',
    'zip' => 'string',
    'country' => 'string',
    'phone' => 'string',
    'address_name' => 'string',
    'xp' => 'object'
} );

__PACKAGE__->attribute_map( {
    'shipping' => 'Shipping',
    'billing' => 'Billing',
    'company_name' => 'CompanyName',
    'first_name' => 'FirstName',
    'last_name' => 'LastName',
    'street1' => 'Street1',
    'street2' => 'Street2',
    'city' => 'City',
    'state' => 'State',
    'zip' => 'Zip',
    'country' => 'Country',
    'phone' => 'Phone',
    'address_name' => 'AddressName',
    'xp' => 'xp'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
