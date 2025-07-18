#pragma once

#include "Comm/ITableGame.h"
#include "common/macros.h"
#include "common/nndef.h"

using namespace nndef;

namespace majong
{
    namespace config
    {
        class GameConfig
        {
            DISALLOW_COPY_AND_ASSIGN(GameConfig)

        private:
            //
            explicit GameConfig();

        public:
            //
            static GameConfig *Create()
            {
                return new GameConfig();
            }

            ~GameConfig();

        public:
            //
            bool loadConfigFile(const char *strPath);
            //
            void printConfigFile(GameInitParam const &sInitParams);
            //
            void loadRoomConfig(const void *p);
            //
            void printRoomConfig();

        public:
            //
            int getNNRatioByNNType(E_NN_TYPE nntype);
            //
            inline int getReadyTime()
            {
                return nReadyTime;
            }
            //
            inline int getCardTime()
            {
                return nCardTime ;
            }
            //
            inline int getBetTime()
            {
                return nBetTime;
            }
            //
            inline void setBetTime(long value)
            {
                nBetTime = value;
            }
            inline void setInitBetTime(int room_type, int index)
            {
                auto it = mBetTime.find(room_type);
                if(it != mBetTime.end())
                {
                    if(it->second.size() > (unsigned int)index && index >= 0)
                    {
                        nBetTime = it->second[index];
                    }
                }
            }
            inline void setRobotAllAction(const RoomSo::RobotAllAction *pRobotAction)
            {
                if(pRobotAction != nullptr)
                {
                    robotAction = *pRobotAction;
                }
            }
            inline RoomSo::RobotAllAction &getRobotAllAction()
            {
                return robotAction;
            }
            //
            inline int getOpenTime()
            {
                return nOpenTime;
            }
            //
            inline int getDelayTime()
            {
                return nDelayTime;
            }
            //
            inline int getRoomTimeout()
            {
                return nRoomTimeout;
            }
            //
            inline int getEndTime()
            {
                return nEndTime;
            }
            //
            inline int getMaxBet()
            {
                return nMaxBet;
            }
            //
            inline int getMaxBanker()
            {
                return nMaxBanker;
            }
            //
            inline int getNotReady()
            {
                return nNotReady;
            }
            //
            inline RoomSo::E_Type getRoomType()
            {
                return eRoomType;
            }
            //
            inline int getPayType()
            {
                return iPayType;
            }
            //
            inline int getMinBegin()
            {
                return nMinBegin;
            }
            //
            inline int getMaxRound()
            {
                return nMaxRound;
            }
            //
            inline int getBaseRatio()
            {
                return nBaseRatio;
            }
            //
            inline int getWinMaxRatio()
            {
                return nWinMaxRatio;
            }
            //
            inline int getBankerPoint()
            {
                return nBankerPoint;
            }
            //
            inline int getMinSit()
            {
                return nMinSit;
            }
            //
            inline int getMinLeft()
            {
                return nMinLeft;
            }
            //
            inline int getFrontBet()
            {
                return iFrontBet;
            }
            //
            inline void setFrontBet(int frontBet)
            {
                iFrontBet = frontBet;
            }
            //
            inline int getBlindNum()
            {
                return iBlindNum <= 0 ? 1 : iBlindNum;
            }
            //
            inline void setBlindNum(int blindNum)
            {
                iBlindNum = blindNum;
            }
            inline int getBlindLevel()
            {
                return iBlindLevel;
            }
            inline void setBlindLevel(int level)
            {
                iBlindLevel = level;
            }
            inline void setMaxSeatNum(int seatNum)
            {
                iMaxSeatNum = seatNum;
            }
            //
            inline int getMinTake()
            {
                return iMinTake;
            }
            inline void setMinTake(long value)
            {
                iMinTake = value;
            }
            //
            inline int getInitPoint()
            {
                return iInitPoint;
            }
            //
            inline int getBasePoint()
            {
                return iBasePoint;
            }
            //
            inline int getProfit()
            {
                return iProfit;
            }
            //
            inline int getNNRatioType()
            {
                return iNNRatioType;
            }
            //
            std::map<int, int> &getMapNNType()
            {
                return mNNType;
            }
            //
            std::vector<E_NN_TYPE> &getVecNNType()
            {
                return vNNType;
            }
            //
            std::map<int, int> &getGuessTypeMap()
            {
                return mGuessType;
            }
            //
            std::vector<int> &getVecGuessNum()
            {
                return vGuessNum;
            }
            //
            inline bool isEnterLimit()
            {
                return bEnterLimit;
            }
            //
            inline bool isRubCard()
            {
                return bRubCard;
            }
            //
            inline bool isBetLimit()
            {
                return bBetLimit;
            }
            //
            inline bool isAddBetLimit()
            {
                return bAddBetLimit;
            }
            //
            inline bool isRaiseBet()
            {
                return bRaiseBet;
            }
            //
            inline bool isKing()
            {
                return bKing;
            }
            //
            inline bool isAddBet()
            {
                return bAddBet;
            }
            //
            inline bool isDoubleBet()
            {
                return bDoubleBet;
            }
            //
            std::vector<int> &getVecUserID()
            {
                return vUserID;
            }
            //
            inline int getRewardInit()
            {
                return nRewardInit;
            }
            //
            inline int getSysInit()
            {
                return nSysInit;
            }
            //
            inline float getSysProfit()
            {
                return nSysProfit;
            }
            //
            inline float getSysRobotProfit()
            {
                return nSysRobotProfit;
            }
            //
            inline long getServiceFee()
            {
                return iServiceFee;
            }
            inline int getMaxSeatNum()
            {
                return iMaxSeatNum;
            }
            inline int getnVersion()
            {
                return nVersion;
            }
            inline int getAiGameRoundLimit()
            {
                return iAiGameRoundLimit;
            }

            long timestamp()
            {
                /* struct timeval tv;
                 gettimeofday(&tv, NULL);
                 return (tv.tv_sec*1000 + tv.tv_usec/1000); */
                return 0;
            }

        protected:
            //
            int nReadyTime;
            //
            int nCardTime;
            //
            int nBetTime;
            //
            std::map<int, std::vector<int>> mBetTime;
            //
            int nOpenTime;
            //
            int nDelayTime;
            //
            int nEndTime;
            //
            int nRoomTimeout;
            //
            int nNotReady;
            //
            int nMaxBet;
            //
            int nMaxBanker;
            //
            std::map<int, int> mDefaultNNType;
            //
            std::map<int, int> mNNType;
            //
            std::map<int, int> mGuessType;
            //
            std::vector<int> vGuessNum;
            //
            std::vector<E_NN_TYPE> vNNType;
            //
            std::vector<int> vUserID;
            //
            int nRewardInit;
            //
            int nSysInit;
            //
            float nSysProfit;
            //
            float nSysRobotProfit;

            int nVersion;

        protected:
            //最大回合数
            int nMaxRound;
            //
            int nMinBegin;
            //
            int nBaseRatio;
            //
            int nWinMaxRatio;
            //
            int nBankerPoint;
            //
            int nMinSit;
            //
            int nMinLeft;
            //
            int iInitPoint;
            //
            int iBasePoint;
            //
            int iProfit;
            //开局禁入
            bool bEnterLimit;
            //极速玩法
            bool bRubCard;
            //下注限制
            bool bBetLimit;
            //推注限制
            bool bAddBetLimit;
            //闲家买码
            bool bRaiseBet;
            //王癞玩法
            bool bKing;
            //显示推注
            bool bAddBet;
            //加倍玩法
            bool bDoubleBet;
            //服务费用
            long iServiceFee;
            //
            int iNNRatioType;
            //玩法类型
            int iPayType;
            //
            int iFrontBet;
            //盲目数量
            int iBlindNum;
             //盲目等级
            int iBlindLevel;
            //最小携带
            int iMinTake;
            //
            int iMaxSeatNum;
            //
            RoomSo::E_Type eRoomType;
            //
            RoomSo::RobotAllAction robotAction;

            int iAiGameRoundLimit;
        };
    };
};

