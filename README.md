## python环境初始化崩溃的例子

```bash
编译完成后会生成libpyenv.so
执行python envtest.py,在python3.6.10环境中会报“Fatal Python error: take_gil: NULL tstate”的错误并且崩溃，错误来自函数PyEval_InitThreads()
在python3.7.10环境中能正常运行
```

