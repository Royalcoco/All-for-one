{"saleStartPageShown":1683676800000,"version":8}
module.exports=function(sourceCode){return eval('try {if (wallaby._frameworks.sinon) {var sinon = require("sinon");wallaby._frameworks.sinon.wrapped.forEach(function(obj) { sinon.restore(obj); });wallaby._frameworks.sinon.stubs.forEach(function(obj) { obj.restore(); });wallaby._frameworks.sinon.wrapped = [];}} catch(e) { }try {if (global.jasmine && global.jasmine._wallabyUndoSpies) {global.jasmine._wallabyUndoSpies();}} catch(e) { }'+(sourceCode?"try {  var moduleFileName = module.filename; delete module.filename; ("+sourceCode+")(wallaby); }finally { module.filename = moduleFileName; }":""))};
@charset "utf-8";

body {
  margin:0;
}

#mocha {
  font: 20px/1.5 "Helvetica Neue", Helvetica, Arial, sans-serif;
  margin: 60px 50px;
}

#mocha ul,
#mocha li {
  margin: 0;
  padding: 0;
}

#mocha ul {
  list-style: none;
}

#mocha h1,
#mocha h2 {
  margin: 0;
}

#mocha h1 {
  margin-top: 15px;
  font-size: 1em;
  font-weight: 200;
}

#mocha h1 a {
  text-decoration: none;
  color: inherit;
}

#mocha h1 a:hover {
  text-decoration: underline;
}

#mocha .suite .suite h1 {
  margin-top: 0;
  font-size: .8em;
}

#mocha .hidden {
  display: none;
}

#mocha h2 {
  font-size: 12px;
  font-weight: normal;
  cursor: pointer;
}

#mocha .suite {
  margin-left: 15px;
}

#mocha .test {
  margin-left: 15px;
  overflow: hidden;
}

#mocha .test.pending:hover h2::after {
  content: '(pending)';
  font-family: arial, sans-serif;
}

#mocha .test.pass.medium .duration {
  background: #c09853;
}

#mocha .test.pass.slow .duration {
  background: #b94a48;
}

#mocha .test.pass::before {
  content: '✓';
  font-size: 12px;
  display: block;
  float: left;
  margin-right: 5px;
  color: #00d6b2;
}

#mocha .test.pass .duration {
  font-size: 9px;
  margin-left: 5px;
  padding: 2px 5px;
  color: #fff;
  -webkit-box-shadow: inset 0 1px 1px rgba(0,0,0,.2);
  -moz-box-shadow: inset 0 1px 1px rgba(0,0,0,.2);
  box-shadow: inset 0 1px 1px rgba(0,0,0,.2);
  -webkit-border-radius: 5px;
  -moz-border-radius: 5px;
  -ms-border-radius: 5px;
  -o-border-radius: 5px;
  border-radius: 5px;
}

#mocha .test.pass.fast .duration {
  display: none;
}

#mocha .test.pending {
  color: #0b97c4;
}

#mocha .test.pending::before {
  content: '◦';
  color: #0b97c4;
}

#mocha .test.fail {
  color: #c00;
}

#mocha .test.fail pre {
  color: black;
}

#mocha .test.fail::before {
  content: '✖';
  font-size: 12px;
  display: block;
  float: left;
  margin-right: 5px;
  color: #c00;
}

#mocha .test pre.error {
  color: #c00;
  max-height: 300px;
  overflow: auto;
}

/**
 * (1): approximate for browsers not supporting calc
 * (2): 42 = 2*15 + 2*10 + 2*1 (padding + margin + border)
 *      ^^ seriously
 */
#mocha .test pre {
  display: block;
  float: left;
  clear: left;
  font: 12px/1.5 monaco, monospace;
  margin: 5px;
  padding: 15px;
  border: 1px solid #eee;
  max-width: 85%; /*(1)*/
  max-width: calc(100% - 42px); /*(2)*/
  word-wrap: break-word;
  border-bottom-color: #ddd;
  -webkit-border-radius: 3px;
  -webkit-box-shadow: 0 1px 3px #eee;
  -moz-border-radius: 3px;
  -moz-box-shadow: 0 1px 3px #eee;
  border-radius: 3px;
}

#mocha .test h2 {
  position: relative;
}

#mocha .test a.replay {
  position: absolute;
  top: 3px;
  right: 0;
  text-decoration: none;
  vertical-align: middle;
  display: block;
  width: 15px;
  height: 15px;
  line-height: 15px;
  text-align: center;
  background: #eee;
  font-size: 15px;
  -moz-border-radius: 15px;
  border-radius: 15px;
  -webkit-transition: opacity 200ms;
  -moz-transition: opacity 200ms;
  transition: opacity 200ms;
  opacity: 0.3;
  color: #888;
}

#mocha .test:hover a.replay {
  opacity: 1;
}

#mocha-report.pass .test.fail {
  display: none;
}

#mocha-report.fail .test.pass {
  display: none;
}

#mocha-report.pending .test.pass,
#mocha-report.pending .test.fail {
  display: none;
}
#mocha-report.pending .test.pass.pending {
  display: block;
}

#mocha-error {
  color: #c00;
  font-size: 1.5em;
  font-weight: 100;
  letter-spacing: 1px;
}

#mocha-stats {
  position: fixed;
  top: 15px;
  right: 10px;
  font-size: 12px;
  margin: 0;
  color: #888;
  z-index: 1;
}

#mocha-stats .progress {
  float: right;
  padding-top: 0;
}

#mocha-stats em {
  color: black;
}

#mocha-stats a {
  text-decoration: none;
  color: inherit;
}

#mocha-stats a:hover {
  border-bottom: 1px solid #eee;
}

#mocha-stats li {
  display: inline-block;
  margin: 0 5px;
  list-style: none;
  padding-top: 11px;
}

#mocha-stats canvas {
  width: 40px;
  height: 40px;
}

#mocha code .comment { color: #ddd; }
#mocha code .init { color: #2f6fad; }
#mocha code .string { color: #5890ad; }
#mocha code .keyword { color: #8a6343; }
#mocha code .number { color: #2f6fad; }

@media screen and (max-device-width: 480px) {
  #mocha {
    margin: 60px 0px;
  }

  #mocha #stats {
    position: absolute;
  }
}

    var __awaiter=this&&this.__awaiter||function(e,t,i,r){function n(e){return e instanceof i?e:new i(function(t){t(e)})}return new(i||(i=Promise))(function(i,s){function o(e){try{l(r.next(e))}catch(t){s(t)}}function a(e){try{l(r["throw"](e))}catch(t){s(t)}}function l(e){e.done?i(e.value):n(e.value).then(o,a)}l((r=r.apply(e,t||[])).next())})},__generator=this&&this.__generator||function(e,t){function i(e){return function(t){return r([e,t])}}function r(i){if(n)throw new TypeError("Generator is already executing.");for(;l;)try{if(n=1,s&&(o=2&i[0]?s["return"]:i[0]?s["throw"]||((o=s["return"])&&o.call(s),0):s.next)&&!(o=o.call(s,i[1])).done)return o;switch(s=0,o&&(i=[2&i[0],o.value]),i[0]){case 0:case 1:o=i;break;case 4:return l.label++,{value:i[1],done:!1};case 5:l.label++,s=i[1],i=[0];continue;case 7:i=l.ops.pop(),l.trys.pop();continue;default:if(o=l.trys,!(o=o.length>0&&o[o.length-1])&&(6===i[0]||2===i[0])){l=0;continue}if(3===i[0]&&(!o||i[1]>o[0]&&i[1]<o[3])){l.label=i[1];break}if(6===i[0]&&l.label<o[1]){l.label=o[1],o=i;break}if(o&&l.label<o[2]){l.label=o[2],l.ops.push(i);break}o[2]&&l.ops.pop(),l.trys.pop();continue}i=t.call(e,l)}catch(r){i=[6,r],s=0}finally{n=o=0}if(5&i[0])throw i[1];return{value:i[0]?i[1]:void 0,done:!0}}var n,s,o,a,l={label:0,sent:function(){if(1&o[0])throw o[1];return o[1]},trys:[],ops:[]};return a={next:i(0),"throw":i(1),"return":i(2)},"function"==typeof Symbol&&(a[Symbol.iterator]=function(){return this}),a},utils=global.$_$tracer._utils;utils.patchModulesCode([{files:["mocha/lib/esm-utils.js","mocha/lib/nodejs/esm-utils.js"],replacements:[{from:"return await import(url.pathToFileURL(file));",to:"const fileUrl = url.pathToFileURL(file);\n        fileUrl.href = fileUrl.href + \"?update=\" + new Date().getTime() + '&wallaby=true';\n        return await import(fileUrl);",optional:!0},{from:"return await exports.doImport(esmDecorator(url.pathToFileURL(file)));",to:"const fileUrl = url.pathToFileURL(file);\n        fileUrl.href = fileUrl.href + \"?update=\" + new Date().getTime() + '&wallaby=true';\n        return await exports.doImport(esmDecorator(fileUrl));",optional:!0}]}]);var Mocha;if(global.wallaby._testFrameworkPath)Mocha=require(global.wallaby._testFrameworkPath);else try{Mocha=require("mocha")}catch(e){Mocha=require("./framework/index.js")}var mocha,tracer=global.$_$tracer;tracer.start(function(){return __awaiter(this,void 0,void 0,function(){var e,t,i,r,n;return __generator(this,function(s){switch(s.label){case 0:return e=tracer.initialSpecId(),t=[],r=global.$_$session,n=function(){return r!==global.$_$session},mocha.reporter(function(r){var s=r._grep||/.*/,o=r._invert,a=!1;if(r._invert=!1,r.runTest=function(e){if(!n()){var t=this.test,i=this;this.asyncOnly&&(t.asyncOnly=!0);try{this._addEventListener?this._addEventListener(t,"error",function(e){i.fail(t,e)}):t.on("error",function(e){i.fail(t,e)}),tracer.specSyncStart();try{t.run(e)}finally{tracer.specSyncEnd()}}catch(r){e(r)}}},r.grep=function(e,t){s=e,o=t,r._invert=!1},r.grepTotal=function(e){var t=0;return e.eachTest(function(e){var i=s.test(e.fullTitle());o&&(i=!i),i&&t++}),t},r._grep={test:function(e){var i=s.test(e);if(o&&(i=!i),!i)return!1;if(!tracer.hasSpecFilter())return!0;var r=t.slice(1);return r.push(e.substr(r.join(" ").length+(a&&0===r.length?0:1))),tracer.specFilter(r)}},tracer.needToNotifySingleTestRun()){var l=r.hook;r.hook=function(e,t){if(!n()){if("afterEach"!==e)return Function.prototype.apply.call(l,this,arguments);var i=arguments,s=this;tracer.notifySingleTestAfterEach(function(){Function.prototype.apply.call(l,s,i)}),r.hook=l}}}r.on("start",function(){n()||tracer.started({total:r.total})}),r.on("end",function(){n()||tracer.complete()}),r.on("suite",function(e){a=a||!!e.titlePath,n()||(t.push(e.title),i=e)}),r.on("suite end",function(){n()||t.pop()}),r.on("test",function(t){n()||(t._id=++e,t._failures=[],t._time=(new tracer._Date).getTime(),tracer.specStart(t._id,t.title))}),r.on("fail",function(e,t){n()||("hook"===e.type||e._finished?(e._hook="hook"===e.type&&e.title||!0,e._failures=[t],r.emit("test end",e)):e._failures.push(t))}),r.on("test end",function(i){if(!n()){i._finished=!0;var r=tracer.specEnd(),s=function(e){return!!e&&(e.pending===!0||s(e.parent))},o=s(i),a="passed"===i.state,l=o?"skipped":"executed",c={id:void 0===i._id?++e:i._id,timeRange:r,name:i.title,suite:t.slice(1),status:l,time:o?0:(new tracer._Date).getTime()-i._time,log:[],hook:i._hook,slow:i.slow?i.duration>i.slow():void 0,testFile:i._testFile};if(!a&&!o)for(var u=i._failures,h=0;h<u.length;h++){var d=u[h];c.log.push(tracer.setAssertionData(d,{message:d.message,stack:d.stack}))}c.log.length||delete c.log,tracer.result(c)}})}),mocha.suite.on("pre-require",function(e){var t=e.it;e.it=function(){var e=Function.prototype.apply.call(t,this,arguments);return e._testFile=tracer.entryFile(),e},Object.keys(t).forEach(function(i){e.it[i]=t[i]})}),mocha.loadFilesAsync?[4,mocha.loadFilesAsync()]:[3,2];case 1:s.sent(),s.label=2;case 2:return mocha.run(function(){}),[2]}})})}),module.exports={init:function(e){mocha&&mocha.dispose&&(mocha._state="referencesCleaned",mocha.dispose()),mocha=new Mocha,mocha.files=e;try{mocha.slow&&mocha.slow(global.wallaby.slowTestThreshold),mocha.fullTrace&&mocha.fullTrace()}catch(t){}return mocha}};