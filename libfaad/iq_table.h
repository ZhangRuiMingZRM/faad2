/*
** FAAD - Freeware Advanced Audio Decoder
** Copyright (C) 2002 M. Bakker
**  
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software 
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
**
** $Id: iq_table.h,v 1.1 2002/09/08 18:14:37 menno Exp $
**/

#ifndef IQ_TABLE_H__
#define IQ_TABLE_H__

#ifdef __cplusplus
extern "C" {
#endif

/* !!!DON'T CHANGE IQ_TABLE_SIZE!!! */
#define IQ_TABLE_SIZE  1026

#ifndef FIXED_POINT

#ifdef _MSC_VER
#pragma warning(disable:4305)
#pragma warning(disable:4244)
#endif

static real_t iq_table[] =
{
    0.0000000000,
    1.0000000000,
    2.5198420998,
    4.3267487109,
    6.3496042079,
    8.5498797334,
    10.9027235570,
    13.3905182794,
    16.0000000000,
    18.7207544075,
    21.5443469003,
    24.4637809963,
    27.4731418213,
    30.5673509404,
    33.7419916985,
    36.9931811150,
    40.3174735966,
    43.7117870412,
    47.1733450958,
    50.6996313257,
    54.2883523319,
    57.9374077040,
    61.6448652744,
    65.4089405366,
    69.2279793748,
    73.1004434553,
    77.0248977786,
    81.0000000000,
    85.0244912125,
    89.0971879449,
    93.2169751786,
    97.3828002241,
    101.5936673260,
    105.8486328899,
    110.1468012434,
    114.4873208566,
    118.8693809602,
    123.2922085109,
    127.7550654584,
    132.2572462776,
    136.7980757341,
    141.3769068557,
    145.9931190852,
    150.6461165966,
    155.3353267543,
    160.0601987021,
    164.8202020667,
    169.6148257665,
    174.4435769119,
    179.3059797911,
    184.2015749320,
    189.1299182326,
    194.0905801545,
    199.0831449737,
    204.1072100830,
    209.1623853419,
    214.2482924705,
    219.3645644828,
    224.5108451564,
    229.6867885365,
    234.8920584701,
    240.1263281692,
    245.3892798002,
    250.6806040975,
    256.0000000000,
    261.3471743083,
    266.7218413611,
    272.1237227299,
    277.5525469304,
    283.0080491495,
    288.4899709866,
    293.9980602090,
    299.5320705195,
    305.0917613358,
    310.6768975818,
    316.2872494882,
    321.9225924034,
    327.5827066139,
    333.2673771724,
    338.9763937351,
    344.7095504051,
    350.4666455847,
    356.2474818330,
    362.0518657308,
    367.8796077506,
    373.7305221334,
    379.6044267700,
    385.5011430873,
    391.4204959402,
    397.3623135070,
    403.3264271901,
    409.3126715201,
    415.3208840636,
    421.3509053358,
    427.4025787150,
    433.4757503618,
    439.5702691405,
    445.6859865441,
    451.8227566217,
    457.9804359091,
    464.1588833613,
    470.3579602882,
    476.5775302922,
    482.8174592083,
    489.0776150459,
    495.3578679332,
    501.6580900633,
    507.9781556420,
    514.3179408377,
    520.6773237328,
    527.0561842769,
    533.4544042413,
    539.8718671753,
    546.3084583636,
    552.7640647857,
    559.2385750758,
    565.7318794845,
    572.2438698415,
    578.7744395198,
    585.3234834006,
    591.8908978393,
    598.4765806331,
    605.0804309888,
    611.7023494920,
    618.3422380776,
    625.0000000000,
    631.6755398055,
    638.3687633048,
    645.0795775462,
    651.8078907899,
    658.5536124831,
    665.3166532354,
    672.0969247951,
    678.8943400262,
    685.7088128862,
    692.5402584041,
    699.3885926590,
    706.2537327602,
    713.1355968262,
    720.0341039659,
    726.9491742592,
    733.8807287386,
    740.8286893712,
    747.7929790411,
    754.7735215322,
    761.7702415115,
    768.7830645130,
    775.8119169219,
    782.8567259587,
    789.9174196648,
    796.9939268870,
    804.0861772639,
    811.1941012115,
    818.3176299096,
    825.4566952887,
    832.6112300164,
    839.7811674856,
    846.9664418012,
    854.1669877685,
    861.3827408814,
    868.6136373104,
    875.8596138918,
    883.1206081164,
    890.3965581189,
    897.6874026669,
    904.9930811514,
    912.3135335758,
    919.6487005467,
    926.9985232641,
    934.3629435117,
    941.7419036483,
    949.1353465979,
    956.5432158417,
    963.9654554089,
    971.4020098686,
    978.8528243212,
    986.3178443907,
    993.7970162163,
    1001.2902864449,
    1008.7976022234,
    1016.3189111915,
    1023.8541614739,
    1031.4033016737,
    1038.9662808647,
    1046.5430485854,
    1054.1335548314,
    1061.7377500496,
    1069.3555851309,
    1076.9870114047,
    1084.6319806319,
    1092.2904449995,
    1099.9623571140,
    1107.6476699961,
    1115.3463370744,
    1123.0583121801,
    1130.7835495416,
    1138.5220037785,
    1146.2736298969,
    1154.0383832838,
    1161.8162197020,
    1169.6070952851,
    1177.4109665328,
    1185.2277903054,
    1193.0575238198,
    1200.9001246442,
    1208.7555506939,
    1216.6237602266,
    1224.5047118380,
    1232.3983644575,
    1240.3046773436,
    1248.2236100803,
    1256.1551225723,
    1264.0991750417,
    1272.0557280230,
    1280.0247423603,
    1288.0061792024,
    1296.0000000000,
    1304.0061665011,
    1312.0246407478,
    1320.0553850728,
    1328.0983620955,
    1336.1535347188,
    1344.2208661255,
    1352.3003197751,
    1360.3918594003,
    1368.4954490040,
    1376.6110528559,
    1384.7386354892,
    1392.8781616980,
    1401.0295965338,
    1409.1929053025,
    1417.3680535619,
    1425.5550071182,
    1433.7537320236,
    1441.9641945733,
    1450.1863613025,
    1458.4201989843,
    1466.6656746263,
    1474.9227554684,
    1483.1914089801,
    1491.4716028579,
    1499.7633050227,
    1508.0664836175,
    1516.3811070048,
    1524.7071437644,
    1533.0445626906,
    1541.3933327903,
    1549.7534232806,
    1558.1248035861,
    1566.5074433375,
    1574.9013123686,
    1583.3063807145,
    1591.7226186094,
    1600.1499964846,
    1608.5884849662,
    1617.0380548732,
    1625.4986772154,
    1633.9703231917,
    1642.4529641876,
    1650.9465717736,
    1659.4511177036,
    1667.9665739122,
    1676.4929125137,
    1685.0301057998,
    1693.5781262378,
    1702.1369464690,
    1710.7065393070,
    1719.2868777356,
    1727.8779349075,
    1736.4796841426,
    1745.0920989258,
    1753.7151529063,
    1762.3488198950,
    1770.9930738636,
    1779.6478889428,
    1788.3132394207,
    1796.9890997413,
    1805.6754445031,
    1814.3722484576,
    1823.0794865074,
    1831.7971337056,
    1840.5251652535,
    1849.2635564999,
    1858.0122829390,
    1866.7713202096,
    1875.5406440938,
    1884.3202305150,
    1893.1100555371,
    1901.9100953633,
    1910.7203263343,
    1919.5407249276,
    1928.3712677557,
    1937.2119315653,
    1946.0626932359,
    1954.9235297784,
    1963.7944183344,
    1972.6753361744,
    1981.5662606973,
    1990.4671694285,
    1999.3780400196,
    2008.2988502465,
    2017.2295780088,
    2026.1702013285,
    2035.1206983489,
    2044.0810473338,
    2053.0512266659,
    2062.0312148464,
    2071.0209904936,
    2080.0205323417,
    2089.0298192403,
    2098.0488301532,
    2107.0775441570,
    2116.1159404408,
    2125.1639983049,
    2134.2216971598,
    2143.2890165253,
    2152.3659360297,
    2161.4524354089,
    2170.5484945052,
    2179.6540932666,
    2188.7692117462,
    2197.8938301007,
    2207.0279285901,
    2216.1714875766,
    2225.3244875237,
    2234.4869089955,
    2243.6587326558,
    2252.8399392674,
    2262.0305096911,
    2271.2304248850,
    2280.4396659037,
    2289.6582138977,
    2298.8860501122,
    2308.1231558868,
    2317.3695126545,
    2326.6251019409,
    2335.8899053637,
    2345.1639046317,
    2354.4470815443,
    2363.7394179907,
    2373.0408959490,
    2382.3514974860,
    2391.6712047559,
    2401.0000000000,
    2410.3378655461,
    2419.6847838074,
    2429.0407372823,
    2438.4057085534,
    2447.7796802872,
    2457.1626352330,
    2466.5545562227,
    2475.9554261700,
    2485.3652280695,
    2494.7839449968,
    2504.2115601072,
    2513.6480566352,
    2523.0934178943,
    2532.5476272760,
    2542.0106682495,
    2551.4825243609,
    2560.9631792328,
    2570.4526165636,
    2579.9508201270,
    2589.4577737714,
    2598.9734614194,
    2608.4978670675,
    2618.0309747849,
    2627.5727687136,
    2637.1232330677,
    2646.6823521328,
    2656.2501102653,
    2665.8264918923,
    2675.4114815110,
    2685.0050636878,
    2694.6072230582,
    2704.2179443264,
    2713.8372122643,
    2723.4650117115,
    2733.1013275747,
    2742.7461448270,
    2752.3994485079,
    2762.0612237221,
    2771.7314556399,
    2781.4101294962,
    2791.0972305902,
    2800.7927442847,
    2810.4966560063,
    2820.2089512442,
    2829.9296155502,
    2839.6586345385,
    2849.3959938845,
    2859.1416793251,
    2868.8956766580,
    2878.6579717413,
    2888.4285504930,
    2898.2073988909,
    2907.9945029718,
    2917.7898488313,
    2927.5934226236,
    2937.4052105607,
    2947.2251989123,
    2957.0533740053,
    2966.8897222234,
    2976.7342300070,
    2986.5868838523,
    2996.4476703115,
    3006.3165759920,
    3016.1935875562,
    3026.0786917212,
    3035.9718752584,
    3045.8731249931,
    3055.7824278041,
    3065.6997706236,
    3075.6251404365,
    3085.5585242804,
    3095.4999092450,
    3105.4492824719,
    3115.4066311543,
    3125.3719425365,
    3135.3452039137,
    3145.3264026318,
    3155.3155260867,
    3165.3125617243,
    3175.3174970403,
    3185.3303195795,
    3195.3510169356,
    3205.3795767511,
    3215.4159867169,
    3225.4602345719,
    3235.5123081028,
    3245.5721951437,
    3255.6398835758,
    3265.7153613275,
    3275.7986163735,
    3285.8896367348,
    3295.9884104787,
    3306.0949257178,
    3316.2091706107,
    3326.3311333606,
    3336.4608022160,
    3346.5981654700,
    3356.7432114599,
    3366.8959285672,
    3377.0563052172,
    3387.2243298788,
    3397.3999910641,
    3407.5832773283,
    3417.7741772695,
    3427.9726795281,
    3438.1787727870,
    3448.3924457710,
    3458.6136872466,
    3468.8424860221,
    3479.0788309468,
    3489.3227109112,
    3499.5741148464,
    3509.8330317244,
    3520.0994505573,
    3530.3733603973,
    3540.6547503364,
    3550.9436095064,
    3561.2399270783,
    3571.5436922624,
    3581.8548943078,
    3592.1735225026,
    3602.4995661730,
    3612.8330146838,
    3623.1738574377,
    3633.5220838752,
    3643.8776834744,
    3654.2406457510,
    3664.6109602577,
    3674.9886165844,
    3685.3736043574,
    3695.7659132398,
    3706.1655329312,
    3716.5724531671,
    3726.9866637191,
    3737.4081543945,
    3747.8369150361,
    3758.2729355221,
    3768.7162057659,
    3779.1667157159,
    3789.6244553551,
    3800.0894147012,
    3810.5615838063,
    3821.0409527566,
    3831.5275116724,
    3842.0212507077,
    3852.5221600504,
    3863.0302299216,
    3873.5454505757,
    3884.0678123003,
    3894.5973054159,
    3905.1339202756,
    3915.6776472653,
    3926.2284768030,
    3936.7863993390,
    3947.3514053559,
    3957.9234853677,
    3968.5026299205,
    3979.0888295917,
    3989.6820749901,
    4000.2823567557,
    4010.8896655596,
    4021.5039921036,
    4032.1253271203,
    4042.7536613729,
    4053.3889856548,
    4064.0312907898,
    4074.6805676315,
    4085.3368070638,
    4096.0000000000,
    4106.6701373831,
    4117.3472101855,
    4128.0312094089,
    4138.7221260843,
    4149.4199512713,
    4160.1246760588,
    4170.8362915639,
    4181.5547889326,
    4192.2801593392,
    4203.0123939861,
    4213.7514841039,
    4224.4974209512,
    4235.2501958144,
    4246.0098000075,
    4256.7762248721,
    4267.5494617770,
    4278.3295021186,
    4289.1163373202,
    4299.9099588321,
    4310.7103581313,
    4321.5175267219,
    4332.3314561342,
    4343.1521379251,
    4353.9795636778,
    4364.8137250016,
    4375.6546135320,
    4386.5022209304,
    4397.3565388837,
    4408.2175591050,
    4419.0852733324,
    4429.9596733298,
    4440.8407508861,
    4451.7284978156,
    4462.6229059575,
    4473.5239671759,
    4484.4316733599,
    4495.3460164231,
    4506.2669883035,
    4517.1945809640,
    4528.1287863914,
    4539.0695965968,
    4550.0170036156,
    4560.9709995068,
    4571.9315763535,
    4582.8987262626,
    4593.8724413645,
    4604.8527138130,
    4615.8395357856,
    4626.8328994828,
    4637.8327971284,
    4648.8392209693,
    4659.8521632753,
    4670.8716163390,
    4681.8975724760,
    4692.9300240243,
    4703.9689633444,
    4715.0143828193,
    4726.0662748543,
    4737.1246318771,
    4748.1894463371,
    4759.2607107062,
    4770.3384174777,
    4781.4225591672,
    4792.5131283116,
    4803.6101174696,
    4814.7135192213,
    4825.8233261683,
    4836.9395309335,
    4848.0621261609,
    4859.1911045158,
    4870.3264586842,
    4881.4681813733,
    4892.6162653110,
    4903.7707032459,
    4914.9314879474,
    4926.0986122052,
    4937.2720688295,
    4948.4518506510,
    4959.6379505206,
    4970.8303613092,
    4982.0290759079,
    4993.2340872279,
    5004.4453882001,
    5015.6629717753,
    5026.8868309241,
    5038.1169586365,
    5049.3533479223,
    5060.5959918105,
    5071.8448833497,
    5083.1000156077,
    5094.3613816714,
    5105.6289746470,
    5116.9027876595,
    5128.1828138531,
    5139.4690463907,
    5150.7614784539,
    5162.0601032433,
    5173.3649139777,
    5184.6759038949,
    5195.9930662506,
    5207.3163943194,
    5218.6458813939,
    5229.9815207850,
    5241.3233058217,
    5252.6712298510,
    5264.0252862380,
    5275.3854683656,
    5286.7517696346,
    5298.1241834635,
    5309.5027032884,
    5320.8873225631,
    5332.2780347590,
    5343.6748333647,
    5355.0777118863,
    5366.4866638472,
    5377.9016827880,
    5389.3227622665,
    5400.7498958574,
    5412.1830771527,
    5423.6222997611,
    5435.0675573082,
    5446.5188434364,
    5457.9761518049,
    5469.4394760894,
    5480.9088099822,
    5492.3841471923,
    5503.8654814448,
    5515.3528064816,
    5526.8461160606,
    5538.3454039558,
    5549.8506639579,
    5561.3618898731,
    5572.8790755240,
    5584.4022147491,
    5595.9313014028,
    5607.4663293552,
    5619.0072924923,
    5630.5541847159,
    5642.1069999431,
    5653.6657321070,
    5665.2303751559,
    5676.8009230538,
    5688.3773697797,
    5699.9597093284,
    5711.5479357096,
    5723.1420429485,
    5734.7420250850,
    5746.3478761746,
    5757.9595902874,
    5769.5771615087,
    5781.2005839386,
    5792.8298516920,
    5804.4649588987,
    5816.1058997031,
    5827.7526682643,
    5839.4052587560,
    5851.0636653664,
    5862.7278822983,
    5874.3979037688,
    5886.0737240093,
    5897.7553372658,
    5909.4427377983,
    5921.1359198811,
    5932.8348778025,
    5944.5396058651,
    5956.2500983854,
    5967.9663496940,
    5979.6883541351,
    5991.4161060672,
    6003.1495998623,
    6014.8888299063,
    6026.6337905987,
    6038.3844763527,
    6050.1408815952,
    6061.9030007664,
    6073.6708283203,
    6085.4443587241,
    6097.2235864585,
    6109.0085060174,
    6120.7991119082,
    6132.5953986513,
    6144.3973607806,
    6156.2049928426,
    6168.0182893975,
    6179.8372450182,
    6191.6618542904,
    6203.4921118132,
    6215.3280121982,
    6227.1695500700,
    6239.0167200659,
    6250.8695168361,
    6262.7279350432,
    6274.5919693627,
    6286.4616144826,
    6298.3368651034,
    6310.2177159382,
    6322.1041617124,
    6333.9961971640,
    6345.8938170431,
    6357.7970161124,
    6369.7057891466,
    6381.6201309327,
    6393.5400362700,
    6405.4654999698,
    6417.3965168555,
    6429.3330817625,
    6441.2751895383,
    6453.2228350423,
    6465.1760131457,
    6477.1347187317,
    6489.0989466952,
    6501.0686919430,
    6513.0439493936,
    6525.0247139769,
    6537.0109806350,
    6549.0027443210,
    6561.0000000000,
    6573.0027426484,
    6585.0109672541,
    6597.0246688165,
    6609.0438423464,
    6621.0684828657,
    6633.0985854079,
    6645.1341450177,
    6657.1751567510,
    6669.2216156747,
    6681.2735168671,
    6693.3308554176,
    6705.3936264265,
    6717.4618250051,
    6729.5354462759,
    6741.6144853722,
    6753.6989374383,
    6765.7887976291,
    6777.8840611107,
    6789.9847230597,
    6802.0907786636,
    6814.2022231205,
    6826.3190516394,
    6838.4412594396,
    6850.5688417513,
    6862.7017938151,
    6874.8401108821,
    6886.9837882140,
    6899.1328210829,
    6911.2872047712,
    6923.4469345719,
    6935.6120057882,
    6947.7824137335,
    6959.9581537318,
    6972.1392211169,
    6984.3256112330,
    6996.5173194347,
    7008.7143410863,
    7020.9166715624,
    7033.1243062477,
    7045.3372405367,
    7057.5554698343,
    7069.7789895548,
    7082.0077951229,
    7094.2418819728,
    7106.4812455489,
    7118.7258813051,
    7130.9757847053,
    7143.2309512230,
    7155.4913763416,
    7167.7570555538,
    7180.0279843624,
    7192.3041582795,
    7204.5855728270,
    7216.8722235361,
    7229.1641059476,
    7241.4612156120,
    7253.7635480891,
    7266.0710989478,
    7278.3838637670,
    7290.7018381344,
    7303.0250176474,
    7315.3533979125,
    7327.6869745455,
    7340.0257431713,
    7352.3696994244,
    7364.7188389480,
    7377.0731573946,
    7389.4326504259,
    7401.7973137127,
    7414.1671429346,
    7426.5421337804,
    7438.9222819480,
    7451.3075831438,
    7463.6980330837,
    7476.0936274921,
    7488.4943621024,
    7500.9002326569,
    7513.3112349065,
    7525.7273646110,
    7538.1486175390,
    7550.5749894679,
    7563.0064761834,
    7575.4430734804,
    7587.8847771619,
    7600.3315830400,
    7612.7834869349,
    7625.2404846758,
    7637.7025721001,
    7650.1697450538,
    7662.6419993914,
    7675.1193309757,
    7687.6017356782,
    7700.0892093785,
    7712.5817479647,
    7725.0793473331,
    7737.5820033885,
    7750.0897120437,
    7762.6024692201,
    7775.1202708469,
    7787.6431128620,
    7800.1709912110,
    7812.7039018478,
    7825.2418407347,
    7837.7848038416,
    7850.3327871468,
    7862.8857866366,
    7875.4437983052,
    7888.0068181548,
    7900.5748421957,
    7913.1478664460,
    7925.7258869318,
    7938.3088996870,
    7950.8969007534,
    7963.4898861807,
    7976.0878520263,
    7988.6907943555,
    8001.2987092412,
    8013.9115927643,
    8026.5294410131,
    8039.1522500838,
    8051.7800160802,
    8064.4127351138,
    8077.0504033037,
    8089.6930167764,
    8102.3405716663,
    8114.9930641151,
    8127.6504902721,
    8140.3128462940,
    8152.9801283453,
    8165.6523325976,
    8178.3294552300,
    8191.0114924292,
    8203.6984403890,
    8216.3902953107,
    8229.0870534031,
    8241.7887108821,
    8254.4952639709,
    8267.2067089000,
    8279.9230419073,
    8292.6442592376,
    8305.3703571432,
    8318.1013318835,
    8330.8371797251,
    8343.5778969415,
    8356.3234798136,
    8369.0739246292,
    8381.8292276834,
    8394.5893852780,
    8407.3543937222,
    8420.1242493321,
    8432.8989484305,
    8445.6784873475,
    8458.4628624202,
    8471.2520699922,
    8484.0461064144,
    8496.8449680444,
    8509.6486512468,
    8522.4571523928,
    8535.2704678607,
    8548.0885940353,
    8560.9115273086,
    8573.7392640788,
    8586.5718007514,
    8599.4091337382,
    8612.2512594579,
    8625.0981743359,
    8637.9498748040,
    8650.8063573010,
    8663.6676182722,
    8676.5336541692,
    8689.4044614507,
    8702.2800365815,
    8715.1603760331,
    8728.0454762838,
    8740.9353338178,
    8753.8299451264,
    8766.7293067070,
    8779.6334150636,
    8792.5422667064,
    8805.4558581523,
    8818.3741859245,
    8831.2972465524,
    8844.2250365719,
    8857.1575525253,
    8870.0947909611,
    8883.0367484340,
    8895.9834215053,
    8908.9348067421,
    8921.8909007182,
    8934.8517000133,
    8947.8172012135,
    8960.7874009109,
    8973.7622957040,
    8986.7418821972,
    8999.7261570012,
    9012.7151167328,
    9025.7087580148,
    9038.7070774762,
    9051.7100717521,
    9064.7177374833,
    9077.7300713171,
    9090.7470699065,
    9103.7687299106,
    9116.7950479945,
    9129.8260208291,
    9142.8616450914,
    9155.9019174644,
    9168.9468346367,
    9181.9963933031,
    9195.0505901642,
    9208.1094219263,
    9221.1728853017,
    9234.2409770084,
    9247.3136937704,
    9260.3910323173,
    9273.4729893846,
    9286.5595617135,
    9299.6507460510,
    9312.7465391496,
    9325.8469377679,
    9338.9519386698,
    9352.0615386252,
    9365.1757344094,
    9378.2945228036,
    9391.4179005944,
    9404.5458645741,
    9417.6784115407,
    9430.8155382977,
    9443.9572416540,
    9457.1035184244,
    9470.2543654290,
    9483.4097794934,
    9496.5697574489,
    9509.7342961321,
    9522.9033923851,
    9536.0770430556,
    9549.2552449966,
    9562.4379950666,
    9575.6252901295,
    9588.8171270546,
    9602.0135027165,
    9615.2144139955,
    9628.4198577767,
    9641.6298309511,
    9654.8443304146,
    9668.0633530688,
    9681.2868958202,
    9694.5149555808,
    9707.7475292679,
    9720.9846138040,
    9734.2262061168,
    9747.4723031393,
    9760.7229018097,
    9773.9779990712,
    9787.2375918726,
    9800.5016771674,
    9813.7702519147,
    9827.0433130783,
    9840.3208576275,
    9853.6028825365,
    9866.8893847847,
    9880.1803613565,
    9893.4758092415,
    9906.7757254342,
    9920.0801069342,
    9933.3889507462,
    9946.7022538799,
    9960.0200133500,
    9973.3422261761,
    9986.6688893829,
    10000.0000000000,
    10013.3355550619,
    10026.6755516082,
    10040.0199866833,
    10053.3688573365,
    10066.7221606221,
    10080.0798935991,
    10093.4420533317,
    10106.8086368886,
    10120.1796413436,
    10133.5550637751,
    10146.9349012666,
    10160.3191509062,
    10173.7078097869,
    10187.1008750065,
    10200.4983436674,
    10213.9002128770,
    10227.3064797472,
    10240.7171413949,
    10254.1321949415,
    10267.5516375131,
    10280.9754662408,
    10294.4036782600,
    10307.8362707111,
    10321.2732407388,
    10334.7145854928
};

#else

static real_t iq_table[] =
{
    0x0,
    0x80,
    0x142,
    0x229,
    0x32C,
    0x446,
    0x573,
    0x6B1,
    0x7FF,
    0x95C,
    0xAC5,
    0xC3B,
    0xDBC,
    0xF48,
    0x10DE,
    0x127F,
    0x1428,
    0x15DB,
    0x1796,
    0x1959,
    0x1B24,
    0x1CF7,
    0x1ED2,
    0x20B4,
    0x229D,
    0x248C,
    0x2683,
    0x287F,
    0x2A83,
    0x2C8C,
    0x2E9B,
    0x30B0,
    0x32CB,
    0x34EC,
    0x3712,
    0x393E,
    0x3B6F,
    0x3DA5,
    0x3FE0,
    0x4220,
    0x4466,
    0x46B0,
    0x48FF,
    0x4B52,
    0x4DAA,
    0x5007,
    0x5268,
    0x54CE,
    0x5738,
    0x59A7,
    0x5C19,
    0x5E90,
    0x610B,
    0x638A,
    0x660D,
    0x6894,
    0x6B1F,
    0x6DAE,
    0x7041,
    0x72D7,
    0x7572,
    0x7810,
    0x7AB1,
    0x7D57,
    0x7FFF,
    0x82AC,
    0x855C,
    0x880F,
    0x8AC6,
    0x8D81,
    0x903E,
    0x92FF,
    0x95C4,
    0x988B,
    0x9B56,
    0x9E24,
    0xA0F6,
    0xA3CA,
    0xA6A2,
    0xA97C,
    0xAC5A,
    0xAF3B,
    0xB21F,
    0xB506,
    0xB7F0,
    0xBADD,
    0xBDCD,
    0xC0C0,
    0xC3B5,
    0xC6AE,
    0xC9A9,
    0xCCA8,
    0xCFA9,
    0xD2AC,
    0xD5B3,
    0xD8BC,
    0xDBC8,
    0xDED7,
    0xE1E9,
    0xE4FD,
    0xE814,
    0xEB2D,
    0xEE49,
    0xF168,
    0xF489,
    0xF7AD,
    0xFAD4,
    0xFDFD,
    0x10128,
    0x10456,
    0x10787,
    0x10ABA,
    0x10DEF,
    0x11127,
    0x11461,
    0x1179E,
    0x11ADD,
    0x11E1F,
    0x12163,
    0x124A9,
    0x127F2,
    0x12B3D,
    0x12E8A,
    0x131D9,
    0x1352B,
    0x1387F,
    0x13BD6,
    0x13F2F,
    0x1428A,
    0x145E7,
    0x14946,
    0x14CA8,
    0x1500C,
    0x15372,
    0x156DA,
    0x15A45,
    0x15DB1,
    0x16120,
    0x16491,
    0x16804,
    0x16B79,
    0x16EF0,
    0x1726A,
    0x175E5,
    0x17963,
    0x17CE2,
    0x18064,
    0x183E7,
    0x1876D,
    0x18AF5,
    0x18E7F,
    0x1920B,
    0x19598,
    0x19928,
    0x19CBA,
    0x1A04E,
    0x1A3E3,
    0x1A77B,
    0x1AB15,
    0x1AEB0,
    0x1B24E,
    0x1B5EE,
    0x1B98F,
    0x1BD32,
    0x1C0D7,
    0x1C47F,
    0x1C828,
    0x1CBD3,
    0x1CF7F,
    0x1D32E,
    0x1D6DE,
    0x1DA91,
    0x1DE45,
    0x1E1FB,
    0x1E5B3,
    0x1E96D,
    0x1ED28,
    0x1F0E6,
    0x1F4A5,
    0x1F866,
    0x1FC28,
    0x1FFED,
    0x203B3,
    0x2077B,
    0x20B45,
    0x20F11,
    0x212DE,
    0x216AD,
    0x21A7E,
    0x21E50,
    0x22225,
    0x225FB,
    0x229D2,
    0x22DAC,
    0x23187,
    0x23564,
    0x23942,
    0x23D23,
    0x24104,
    0x244E8,
    0x248CD,
    0x24CB4,
    0x2509D,
    0x25487,
    0x25873,
    0x25C60,
    0x2604F,
    0x26440,
    0x26832,
    0x26C26,
    0x2701C,
    0x27413,
    0x2780C,
    0x27C07,
    0x28003,
    0x28400,
    0x287FF,
    0x28C00,
    0x29003,
    0x29407,
    0x2980C,
    0x29C13,
    0x2A01C,
    0x2A426,
    0x2A832,
    0x2AC3F,
    0x2B04E,
    0x2B45E,
    0x2B870,
    0x2BC83,
    0x2C098,
    0x2C4AF,
    0x2C8C7,
    0x2CCE0,
    0x2D0FB,
    0x2D517,
    0x2D935,
    0x2DD55,
    0x2E176,
    0x2E598,
    0x2E9BC,
    0x2EDE1,
    0x2F208,
    0x2F630,
    0x2FA5A,
    0x2FE85,
    0x302B2,
    0x306E0,
    0x30B0F,
    0x30F40,
    0x31373,
    0x317A7,
    0x31BDC,
    0x32013,
    0x3244B,
    0x32884,
    0x32CBF,
    0x330FC,
    0x33539,
    0x33979,
    0x33DB9,
    0x341FB,
    0x3463F,
    0x34A83,
    0x34ECA,
    0x35311,
    0x3575A,
    0x35BA4,
    0x35FF0,
    0x3643D,
    0x3688B,
    0x36CDB,
    0x3712C,
    0x3757F,
    0x379D2,
    0x37E28,
    0x3827E,
    0x386D6,
    0x38B2F,
    0x38F8A,
    0x393E6,
    0x39843,
    0x39CA1,
    0x3A101,
    0x3A562,
    0x3A9C5,
    0x3AE28,
    0x3B28E,
    0x3B6F4,
    0x3BB5C,
    0x3BFC5,
    0x3C42F,
    0x3C89B,
    0x3CD08,
    0x3D176,
    0x3D5E5,
    0x3DA56,
    0x3DEC8,
    0x3E33B,
    0x3E7B0,
    0x3EC26,
    0x3F09D,
    0x3F515,
    0x3F98F,
    0x3FE0A,
    0x40286,
    0x40703,
    0x40B82,
    0x41002,
    0x41483,
    0x41906,
    0x41D89,
    0x4220E,
    0x42694,
    0x42B1C,
    0x42FA4,
    0x4342E,
    0x438B9,
    0x43D46,
    0x441D3,
    0x44662,
    0x44AF2,
    0x44F83,
    0x45415,
    0x458A9,
    0x45D3E,
    0x461D4,
    0x4666B,
    0x46B03,
    0x46F9D,
    0x47438,
    0x478D4,
    0x47D71,
    0x4820F,
    0x486AF,
    0x48B50,
    0x48FF1,
    0x49494,
    0x49939,
    0x49DDE,
    0x4A285,
    0x4A72C,
    0x4ABD5,
    0x4B07F,
    0x4B52B,
    0x4B9D7,
    0x4BE85,
    0x4C333,
    0x4C7E3,
    0x4CC94,
    0x4D146,
    0x4D5FA,
    0x4DAAE,
    0x4DF64,
    0x4E41B,
    0x4E8D2,
    0x4ED8B,
    0x4F246,
    0x4F701,
    0x4FBBD,
    0x5007B,
    0x50539,
    0x509F9,
    0x50EBA,
    0x5137C,
    0x5183F,
    0x51D03,
    0x521C9,
    0x5268F,
    0x52B57,
    0x53020,
    0x534E9,
    0x539B4,
    0x53E80,
    0x5434D,
    0x5481B,
    0x54CEB,
    0x551BB,
    0x5568C,
    0x55B5F,
    0x56033,
    0x56507,
    0x569DD,
    0x56EB4,
    0x5738C,
    0x57865,
    0x57D3F,
    0x5821A,
    0x586F6,
    0x58BD4,
    0x590B2,
    0x59592,
    0x59A72,
    0x59F54,
    0x5A436,
    0x5A91A,
    0x5ADFF,
    0x5B2E5,
    0x5B7CB,
    0x5BCB3,
    0x5C19C,
    0x5C686,
    0x5CB71,
    0x5D05D,
    0x5D54B,
    0x5DA39,
    0x5DF28,
    0x5E418,
    0x5E90A,
    0x5EDFC,
    0x5F2EF,
    0x5F7E4,
    0x5FCD9,
    0x601D0,
    0x606C7,
    0x60BBF,
    0x610B9,
    0x615B4,
    0x61AAF,
    0x61FAC,
    0x624A9,
    0x629A8,
    0x62EA8,
    0x633A8,
    0x638AA,
    0x63DAC,
    0x642B0,
    0x647B5,
    0x64CBA,
    0x651C1,
    0x656C9,
    0x65BD1,
    0x660DB,
    0x665E6,
    0x66AF1,
    0x66FFE,
    0x6750C,
    0x67A1A,
    0x67F2A,
    0x6843A,
    0x6894C,
    0x68E5F,
    0x69372,
    0x69887,
    0x69D9C,
    0x6A2B3,
    0x6A7CA,
    0x6ACE3,
    0x6B1FC,
    0x6B716,
    0x6BC32,
    0x6C14E,
    0x6C66B,
    0x6CB8A,
    0x6D0A9,
    0x6D5C9,
    0x6DAEA,
    0x6E00C,
    0x6E52F,
    0x6EA53,
    0x6EF78,
    0x6F49E,
    0x6F9C5,
    0x6FEED,
    0x70416,
    0x7093F,
    0x70E6A,
    0x71396,
    0x718C2,
    0x71DF0,
    0x7231E,
    0x7284E,
    0x72D7E,
    0x732AF,
    0x737E2,
    0x73D15,
    0x74249,
    0x7477E,
    0x74CB4,
    0x751EB,
    0x75722,
    0x75C5B,
    0x76195,
    0x766CF,
    0x76C0B,
    0x77147,
    0x77685,
    0x77BC3,
    0x78102,
    0x78642,
    0x78B83,
    0x790C5,
    0x79608,
    0x79B4C,
    0x7A091,
    0x7A5D6,
    0x7AB1D,
    0x7B064,
    0x7B5AC,
    0x7BAF6,
    0x7C040,
    0x7C58B,
    0x7CAD7,
    0x7D024,
    0x7D571,
    0x7DAC0,
    0x7E010,
    0x7E560,
    0x7EAB1,
    0x7F004,
    0x7F557,
    0x7FAAB,
    0x7FFFF,
    0x80555,
    0x80AAC,
    0x81003,
    0x8155C,
    0x81AB5,
    0x8200F,
    0x8256B,
    0x82AC7,
    0x83023,
    0x83581,
    0x83AE0,
    0x8403F,
    0x845A0,
    0x84B01,
    0x85063,
    0x855C6,
    0x85B2A,
    0x8608E,
    0x865F4,
    0x86B5A,
    0x870C2,
    0x8762A,
    0x87B93,
    0x880FD,
    0x88668,
    0x88BD3,
    0x89140,
    0x896AD,
    0x89C1B,
    0x8A18A,
    0x8A6FA,
    0x8AC6B,
    0x8B1DD,
    0x8B74F,
    0x8BCC3,
    0x8C237,
    0x8C7AC,
    0x8CD22,
    0x8D298,
    0x8D810,
    0x8DD88,
    0x8E302,
    0x8E87C,
    0x8EDF7,
    0x8F373,
    0x8F8EF,
    0x8FE6D,
    0x903EB,
    0x9096A,
    0x90EEA,
    0x9146B,
    0x919ED,
    0x91F6F,
    0x924F2,
    0x92A77,
    0x92FFC,
    0x93581,
    0x93B08,
    0x9408F,
    0x94618,
    0x94BA1,
    0x9512B,
    0x956B6,
    0x95C41,
    0x961CE,
    0x9675B,
    0x96CE9,
    0x97278,
    0x97807,
    0x97D98,
    0x98329,
    0x988BB,
    0x98E4E,
    0x993E2,
    0x99977,
    0x99F0C,
    0x9A4A2,
    0x9AA39,
    0x9AFD1,
    0x9B56A,
    0x9BB03,
    0x9C09D,
    0x9C639,
    0x9CBD4,
    0x9D171,
    0x9D70E,
    0x9DCAD,
    0x9E24C,
    0x9E7EC,
    0x9ED8C,
    0x9F32E,
    0x9F8D0,
    0x9FE73,
    0xA0417,
    0xA09BC,
    0xA0F61,
    0xA1507,
    0xA1AAE,
    0xA2056,
    0xA25FF,
    0xA2BA8,
    0xA3152,
    0xA36FD,
    0xA3CA9,
    0xA4255,
    0xA4803,
    0xA4DB1,
    0xA5360,
    0xA590F,
    0xA5EC0,
    0xA6471,
    0xA6A23,
    0xA6FD6,
    0xA7589,
    0xA7B3E,
    0xA80F3,
    0xA86A9,
    0xA8C5F,
    0xA9217,
    0xA97CF,
    0xA9D88,
    0xAA342,
    0xAA8FC,
    0xAAEB8,
    0xAB474,
    0xABA31,
    0xABFEE,
    0xAC5AD,
    0xACB6C,
    0xAD12C,
    0xAD6EC,
    0xADCAE,
    0xAE270,
    0xAE833,
    0xAEDF7,
    0xAF3BB,
    0xAF980,
    0xAFF46,
    0xB050D,
    0xB0AD5,
    0xB109D,
    0xB1666,
    0xB1C30,
    0xB21FA,
    0xB27C6,
    0xB2D92,
    0xB335E,
    0xB392C,
    0xB3EFA,
    0xB44C9,
    0xB4A99,
    0xB506A,
    0xB563B,
    0xB5C0D,
    0xB61E0,
    0xB67B3,
    0xB6D88,
    0xB735D,
    0xB7932,
    0xB7F09,
    0xB84E0,
    0xB8AB8,
    0xB9091,
    0xB966A,
    0xB9C45,
    0xBA220,
    0xBA7FB,
    0xBADD8,
    0xBB3B5,
    0xBB993,
    0xBBF71,
    0xBC551,
    0xBCB31,
    0xBD112,
    0xBD6F3,
    0xBDCD5,
    0xBE2B8,
    0xBE89C,
    0xBEE81,
    0xBF466,
    0xBFA4C,
    0xC0032,
    0xC061A,
    0xC0C02,
    0xC11EB,
    0xC17D4,
    0xC1DBE,
    0xC23A9,
    0xC2995,
    0xC2F82,
    0xC356F,
    0xC3B5D,
    0xC414B,
    0xC473B,
    0xC4D2B,
    0xC531B,
    0xC590D,
    0xC5EFF,
    0xC64F2,
    0xC6AE6,
    0xC70DA,
    0xC76CF,
    0xC7CC5,
    0xC82BB,
    0xC88B2,
    0xC8EAA,
    0xC94A3,
    0xC9A9C,
    0xCA096,
    0xCA691,
    0xCAC8C,
    0xCB288,
    0xCB885,
    0xCBE83,
    0xCC481,
    0xCCA80,
    0xCD07F,
    0xCD680,
    0xCDC81,
    0xCE283,
    0xCE885,
    0xCEE88,
    0xCF48C,
    0xCFA91,
    0xD0096,
    0xD069C,
    0xD0CA3,
    0xD12AA,
    0xD18B2,
    0xD1EBB,
    0xD24C4,
    0xD2ACE,
    0xD30D9,
    0xD36E4,
    0xD3CF1,
    0xD42FE,
    0xD490B,
    0xD4F19,
    0xD5528,
    0xD5B38,
    0xD6148,
    0xD6759,
    0xD6D6B,
    0xD737D,
    0xD7991,
    0xD7FA4,
    0xD85B9,
    0xD8BCE,
    0xD91E4,
    0xD97FA,
    0xD9E11,
    0xDA429,
    0xDAA42,
    0xDB05B,
    0xDB675,
    0xDBC8F,
    0xDC2AB,
    0xDC8C7,
    0xDCEE3,
    0xDD500,
    0xDDB1E,
    0xDE13D,
    0xDE75C,
    0xDED7C,
    0xDF39D,
    0xDF9BE,
    0xDFFE0,
    0xE0603,
    0xE0C26,
    0xE124A,
    0xE186F,
    0xE1E95,
    0xE24BB,
    0xE2AE1,
    0xE3109,
    0xE3731,
    0xE3D59,
    0xE4383,
    0xE49AD,
    0xE4FD7,
    0xE5603,
    0xE5C2F,
    0xE625C,
    0xE6889,
    0xE6EB7,
    0xE74E6,
    0xE7B15,
    0xE8145,
    0xE8776,
    0xE8DA7,
    0xE93D9,
    0xE9A0B,
    0xEA03F,
    0xEA673,
    0xEACA7,
    0xEB2DD,
    0xEB913,
    0xEBF49,
    0xEC580,
    0xECBB8,
    0xED1F1,
    0xED82A,
    0xEDE64,
    0xEE49E,
    0xEEAD9,
    0xEF115,
    0xEF752,
    0xEFD8F,
    0xF03CD,
    0xF0A0B,
    0xF104A,
    0xF168A,
    0xF1CCA,
    0xF230B,
    0xF294D,
    0xF2F8F,
    0xF35D2,
    0xF3C15,
    0xF425A,
    0xF489E,
    0xF4EE4,
    0xF552A,
    0xF5B71,
    0xF61B8,
    0xF6800,
    0xF6E49,
    0xF7492,
    0xF7ADC,
    0xF8127,
    0xF8772,
    0xF8DBE,
    0xF940B,
    0xF9A58,
    0xFA0A6,
    0xFA6F4,
    0xFAD43,
    0xFB393,
    0xFB9E3,
    0xFC034,
    0xFC686,
    0xFCCD8,
    0xFD32B,
    0xFD97F,
    0xFDFD3,
    0xFE628,
    0xFEC7D,
    0xFF2D3,
    0xFF92A,
    0xFFF81,
    0x1005D9,
    0x100C31,
    0x10128B,
    0x1018E4,
    0x101F3F,
    0x10259A,
    0x102BF6,
    0x103252,
    0x1038AF,
    0x103F0C,
    0x10456B,
    0x104BC9,
    0x105229,
    0x105889,
    0x105EEA,
    0x10654B,
    0x106BAD,
    0x10720F,
    0x107873,
    0x107ED6,
    0x10853B,
    0x108BA0,
    0x109205,
    0x10986C,
    0x109ED3,
    0x10A53A,
    0x10ABA2,
    0x10B20B,
    0x10B874,
    0x10BEDE,
    0x10C549,
    0x10CBB4,
    0x10D220,
    0x10D88C,
    0x10DEF9,
    0x10E567,
    0x10EBD5,
    0x10F244,
    0x10F8B3,
    0x10FF23,
    0x110594,
    0x110C05,
    0x111277,
    0x1118EA,
    0x111F5D,
    0x1125D1,
    0x112C45,
    0x1132BA,
    0x11392F,
    0x113FA6,
    0x11461C,
    0x114C94,
    0x11530C,
    0x115984,
    0x115FFD,
    0x116677,
    0x116CF2,
    0x11736D,
    0x1179E8,
    0x118064,
    0x1186E1,
    0x118D5E,
    0x1193DC,
    0x119A5B,
    0x11A0DA,
    0x11A75A,
    0x11ADDA,
    0x11B45B,
    0x11BADD,
    0x11C15F,
    0x11C7E2,
    0x11CE65,
    0x11D4E9,
    0x11DB6E,
    0x11E1F3,
    0x11E879,
    0x11EEFF,
    0x11F586,
    0x11FC0E,
    0x120296,
    0x12091E,
    0x120FA8,
    0x121632,
    0x121CBC,
    0x122347,
    0x1229D3,
    0x12305F,
    0x1236EC,
    0x123D79,
    0x124407,
    0x124A96,
    0x125125,
    0x1257B5,
    0x125E45,
    0x1264D6,
    0x126B68,
    0x1271FA,
    0x12788D,
    0x127F20,
    0x1285B4,
    0x128C48,
    0x1292DD,
    0x129973,
    0x12A009,
    0x12A6A0,
    0x12AD38,
    0x12B3D0,
    0x12BA68,
    0x12C101,
    0x12C79B,
    0x12CE35,
    0x12D4D0,
    0x12DB6C,
    0x12E208,
    0x12E8A4,
    0x12EF41,
    0x12F5DF,
    0x12FC7E,
    0x13031C,
    0x1309BC,
    0x13105C,
    0x1316FD,
    0x131D9E,
    0x132440,
    0x132AE2,
    0x133185,
    0x133829,
    0x133ECD,
    0x134571,
    0x134C17,
    0x1352BC,
    0x135963,
    0x13600A,
    0x1366B1,
    0x136D59,
    0x137402,
    0x137AAB,
    0x138155,
    0x1387FF,
    0x138EAA,
    0x139556,
    0x139C02,
    0x13A2AF,
    0x13A95C,
    0x13B00A,
    0x13B6B8,
    0x13BD67,
    0x13C416,
    0x13CAC7,
    0x13D177,
    0x13D828,
    0x13DEDA,
    0x13E58C,
    0x13EC3F,
    0x13F2F3,
    0x13F9A7,
    0x14005B,
    0x140710,
    0x140DC6,
    0x14147C,
    0x141B33,
    0x1421EB,
    0x1428A2,
    0x142F5B
};

#endif

#ifdef __cplusplus
}
#endif
#endif
