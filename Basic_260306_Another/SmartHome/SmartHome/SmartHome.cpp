#include <iostream>

using namespace std;

class Appliance      // 가전제품 클래스
{
private:
    string name;   // 가전제품의 이름

    double Electrical_Energy;  // 가전제품이 사용하는 전력량

    bool IsOn = true;   // 현재 가전제품이 켜져있는지 확인하는 변수
                        // 무조건 true로 시작(true == on, false == off)

public:
    void SetApplianceInfo()      // 전자제품의 정보를 초기화하는 함수
    {
        cout << "가전제품의 이름을 입력해주세요 : ";
        cin >> name;
        cout << name << "의 전력량을 입력해주세요 : ";
        cin >> Electrical_Energy;
    }

    Appliance()   // 생성자로 이름과 전력량을 초기화
    {
        SetApplianceInfo();
    }

    void ChangeOnOff()   // 현재 가전제품의 On, Off를 변경하는 함수
    {
        IsOn = !IsOn;
    }

    bool GetIsOn()   // 현재 가전제품의 On, Off 상태를 get하는 함수
    {
        return IsOn;
    }

    double GetElectrical_Energy()   // 현재 가전제품의 전력량을 get하는 함수
    {
        if (IsOn)   // 가전제품이 On상태라면 
        {
            return Electrical_Energy;
        }
        else      // 가전제품이 off상태라면
        {
            return 0.0;
        }
    }

    void printf()
    {
        cout << name << "  " << Electrical_Energy << "  " << boolalpha << IsOn << endl;
    }
};

class Room
{
private:
    string RoomName;        // 방의 이름

    Appliance* Appliances[10] = { nullptr };   // 방에는 최대 10개의 가전제품이 있다고 임의로 설정 

    int ApplianceCount = 0;     // 현재 등록되어있는 가전제품들의 갯수

    double TotalPower = 0.0; // 방 안에 있는 가전제품들의 총 전력량을 계산

public:
    void SetRoomInfo()
    {
        cout << "방 이름을 입력해주세요 : ";
        cin >> RoomName;
    }

    Room()
    {
        SetRoomInfo();
    }

    double GetTotalPower()
    {
        return TotalPower;
    }

    void AddAppliance()
    {
        if (ApplianceCount == 10)
        {
            cout << "현재 방에는 가전제품이 다 등록되어 있습니다. 더이상 등록할 수 없습니다." << endl;
        }
        else
        {
            Appliances[ApplianceCount] = new Appliance;
        }

    }
};


class House
{
private:
    Room* Rooms[5] = { nullptr };  // 집에는 최대 5개의 방이 있다고 임의로 설정

    int RoomCount = 0;  // 현재 등록된 방의 갯수

public:

    House()
    {   
        cout << "집에는 몇개의 방이 있는지 입력해주세요 : ";
        cin >> RoomCount;

        for (int i = 0; i < RoomCount; i++)
        {
            cout << i + 1 << "번째 ";
            Rooms[i] = new Room;
        }
    }

    void AddRoom()
    {
        if (RoomCount == 5)     // 이미 등록된 방이 5개라면 
        {
            cout << "집에는 방이 다 등록되어 있습니다. 더이상 등록할 수 없습니다!" << endl;
            return;
        }
        else   // 아직 방이 남아있다면
        {
            Rooms[RoomCount] = new Room;    // 새롭게 방을 추가
        }
    }

    double GetTotalPower()
    {
        double TotalPower = 0.0;

        for (int i = 0; i < RoomCount; i++)
        {
            TotalPower += Rooms[i]->GetTotalPower();
        }

        return TotalPower;
    }

};



int main()
{
    House SmartHouse;



    return 0;
}