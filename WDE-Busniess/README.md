某C艹大作业
感觉写完之后用在游戏里挺好玩的
虽然感觉用在游戏里会略复杂
~~老师这个为继承类而继承类的这个设定太蠢了~~
优化改动

# Part 1
要求如下：必须用面向对象的方法(继承+多态)，实现WD电商网交易系统的基本功能。
系统面向两类用户：买家 和 卖家。
##### 有基类User类，属性如下：id、userName、password、balance等(根据需要自行添加)有如下操作（根据需要可用虚函数实现）：
1.	查看用户个人信息: 查看自己的基本信息
2.	查看商品列表:获取当前待售商品的信息，含商品Id、名称、库存、单价及卖家姓名；
3.	系统登陆
4.	系统注销

买家和卖家需登陆系统后才能进行操作，该系统运行期间允许用户反复登陆和登出。

##### 买家类，继承自User类，除已定义的操作外（属性根据需要可自行添加），还需完成以下操作（根据需要可用虚函数实现）：
1.	余额充值：对余额进行充值;
2.	购买商品：用户id选择商品，根据数量进行付款，买卖双方金额需有相应变化，库存亦要体现其变化，用户余额不足或库存不足则交易失败。

会员类，~~继承自买家类。会员拥有买家所有属性及操作，但还~~ 作为买家类的一部分存在，拥有一些特定的属性：level（等级）、token（代币）
##### 额外操作：
1. 代币充值操作：自定义换算比例，可将token转换为余额；

##### 还需买家类的若干虚函数操作进行覆写：
1. 查看用户信息；
2. 购物商品：除正常操作外，交易成功可获取一定数额token,不同等级的会员有不同的购物折扣。

##### 卖家类，继承自User类，除User类定义的操作外（属性根据需要可自行添加），还需完成以下操作：
1.	查询库存信息：查看当前自己拥有商品基本信息(商品数量为0时，从列表中删除)；
2.	进货：可以设置商品属性，设置其数量及余额。
- 系统中可能涉及的对象有买家，卖家，会员，商品。
- 商品类为抽象类，包括id、name、amount、price、owner等基本属性（可根据需求自行添加属性）,需要有用于计价的纯虚函数；

##### 商品类至少要有以下子类：食品类、电子产品类和生活用品类，要体现以下计价方式：
1.	食品类应至少有以下额外属性：有效期、生产日期、降价因子和降价期等（注意生产日期、将假期和有效期的大小关系），要求食品在生产日期~降价期内价格不变，在降价期~有效期内价格减少，有效期以外的食品不予出售（可根据返回值为负来判断）；
2.	电子商品类至少要有以下额外属性：生产日期，有效期，降价因子等，要求商品价格是能根据时间变化，可自行定义降价函数（价格变化要尽可能合理），有效期以外商品不予出售；
3.	生活用品类有额外属性：有效期等，有效期以外商品不予出售。

注意事项:
- 所有买家信息，卖家信息，商品信息，不强求以文本形式存储，可在程序内部自行定义；
- 必须使用容器类作为保存数据的内部数据结构，可自行选择合适的容器类；
- 提供字符操作界面，提供图形界面的将适当加分。

# Part 2

在程序一的基础上，添加以下功能：
1.	在User类中重载“查看商品列表”操作，使之可根据商品名称进行搜索，获取符合要求的全部商品列表信息；
2. 在卖家类重载“获取个人商品列表”操作，使之可根据商品名称进行搜索，获取符合要求的个人商品列表信息

要求如下：
- 必须在程序一的代码基础上修改完成；
- 采用文本文件或二进制文件来保存商品、卖家和买家信息，具体格式可自行定义；
- 为商品、买家、卖家等类信息重载流操作符<<和>>，以便从文件中读取和写入信息；
- 必须处理读文件时的异常；
- 文件名可以由程序内部自行指定，不需要用户手动设置；
- 提供字符操作界面，提供图形界面的将适当加分。

# Part 3
描述：实现远程操作功能。
要求如下：
- 必须在程序二的代码基础上来修改完成。
- 完成程序一和程序二的功能。各类用户的登录和操作在client端完成，功能实现由server端完成并把结果发送给client端，client端显示执行结果。
- Server端要求能够处理多个client端的请求。（检查程序要求至少3个client端同时登录，可采用UDP方式实现）
注意事项:
- 必须使用Socket作为远程通信技术。
- 提供字符操作界面，提供图形界面的将适当加分。
