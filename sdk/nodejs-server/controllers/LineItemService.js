'use strict';

exports.create = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItem (LineItem)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.delete = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  **/
  // no response value expected for this operation
  res.end();
}

exports.get = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.list = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * search (String)
  * searchOn (String)
  * sortBy (String)
  * page (Integer)
  * pageSize (Integer)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.patch = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  * partialLineItem (LineItem)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.patchShippingAddress = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  * address (Address)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.setShippingAddress = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  * address (Address)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}

exports.update = function(args, res, next) {
  /**
   * parameters expected in the args:
  * buyerID (String)
  * orderID (String)
  * lineItemID (String)
  * lineItem (LineItem)
  **/
    var examples = {};
  examples['application/json'] = "{}";
  if(Object.keys(examples).length > 0) {
    res.setHeader('Content-Type', 'application/json');
    res.end(JSON.stringify(examples[Object.keys(examples)[0]] || {}, null, 2));
  }
  else {
    res.end();
  }
  
}
