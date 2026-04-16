// Union Types
let subs: number | string = '1M';
let apiRequestStatus: 'pending' | 'success' | 'error' = 'pending';
apiRequestStatus = "success";
let airlineSeat: 'aisle' | 'window' | 'middle' = 'aisle';
airlineSeat = 'aisle';


// Any
const orders = ['12', '20', '32', '45'];
let currentOrder: string | undefined;
for(let order of orders){
    if(order === '42'){
        currentOrder = order;
        break;
    }
}
console.log(currentOrder);
