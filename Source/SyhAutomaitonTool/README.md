1.介绍：



2.添加新的自动化元素
	2.1.方法一：添加可用Json配置的自动化元素，该方法需要修改3个文件，添加2个文件。
		首先添加自动化元素.h和.cpp文件，继承Element/Core/Interface/AutoExecElements.h文件，并实现相关操作；
		其次修改SyhAutomationToolTypeBase.h中的代码，详情查看具体文件；
		再次修改Element/AutoExecElementsFactory.cpp中的文件，用于生成自动化元素；
		最后修改Json/AutomationJson.h中的文件，详情查看具体文件

	2.2.方法二：添加从命令行直接启动的元素
