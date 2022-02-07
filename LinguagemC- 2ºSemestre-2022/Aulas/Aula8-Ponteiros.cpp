<?xml version="1.0" encoding="utf-8"?>
<configuration>
  <!--nlog日志配置-->
  <configSections>
    <section name="nlog" type="NLog.Config.ConfigSectionHandler, NLog" />
  </configSections>
  <!--NLog日志开源组件，请参照http://nlog-project.org/官方文档-->
  <nlog xmlns="http://www.nlog-project.org/schemas/NLog.xsd" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
    <!--设置文件异步写入，文件最大保存天数20天，单个日志文件最大5*1024*1024=5M,编码格式utf-8,支持多进程同时写入,日志目录"${basedir} | D:\Logs\AnyDataRecovery_${shortdate}.log"-->
    <targets async="true">
      <target name="debugger" xsi:type="Debugger" layout="${date:format=HH\:mm\:ss.fff}: ${message}" />
      <target name="error_file" xsi:type="File" fileName="${basedir}\Logs\${shortdate}.log" archiveFileName="${basedir}\Logs\${shortdate}.{###}.log" archiveAboveSize="5242880" archiveNumbering="Sequence" encoding="utf-8" maxArchiveFiles="7" concurrentWrites="true" layout="${date:format=HH\:mm\:ss} | ${level:uppercase=false} ${newline} ${message} ${onexception:${exception:format=tostring} ${newline} ${stacktrace} ${newline}" />
    </targets>
    <rules>
      <logger name="*" minlevel="Debug" writeTo="debugger" />
      <logger name="*" minlevel="Info" writeTo="error_file" />
    </rules>
  </nlog>
  <!--客户端配置-->
  <appSettings>
    <!--操作系统版本-->
    <add key="ComputerVersion" value="0" />

    <!--启用PE扫描, 0不启用,1启用-->
    <add key="EnablePEScan" value="0" />

    <!--仅扫描存在数据,0不启用,1启用-->
    <add key="OnlyScanExistData" value="0" />

    <!--32位最大可用内存,单位G,支持小数,默认值为1.3G-->
    <add key="Max32BitMemory" value="1.3" />
  </appSet