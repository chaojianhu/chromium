// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

window.indexedDB = window.indexedDB || window.webkitIndexedDB;
window.IDBTransaction = window.IDBTransaction || window.webkitIDBTransaction;

function result(message) {
  var div = document.createElement('div');
  div.id = "result";
  div.innerText = message;
  document.body.appendChild(div);
}

function unexpectedErrorCallback()
{
  result('fail - unexpected error callback');
}

function unexpectedAbortCallback()
{
  result('fail - unexpected abort callback');
}

function unexpectedCompleteCallback()
{
  result('fail - unexpected complete callback');
}
