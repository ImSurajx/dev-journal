function getChai(kind: string | number) {
    if (typeof kind === 'string') {
        return `Making ${kind} chai...`;
    }
    return `Chai order: ${kind}`;
}

function serverChai(msg?: string) {
    if (msg) {
        return `Serving ${msg}`;
    }
    return `Serving default masala chai`;
}

function orderChai(size: 'small' | 'medium' | 'large' | number) {
    if (size === 'small') {
        return `small cutting chai...`
    }
    else if (size === 'medium' || size === 'large') {
        return `make extra chai`
    }
    return `chai order #${size}`;
}

class KhulhadChai {
    serve() {
        return `Serving Kulhad Chai`
    }
}

class Cutting {
    server() {
        return `Serving cutting Chai`;
    }
}

function serve(chai: KhulhadChai | Cutting) {
    if (chai instanceof KhulhadChai) {
        return chai.serve();
    }
}

// create your own types
type ChaiOrder = {
    type: string,
    sugar: number
}

function isChaiOrder(obj: any): obj is ChaiOrder {
    return (
        typeof obj === "object" &&
        obj !== null &&
        typeof obj.type === "string" &&
        typeof obj.sugar === "number"
    )
}

function serveOrder(item: ChaiOrder | string) {
    if (isChaiOrder(item)) {
        return `Serving ${item.type} chai with ${item.sugar} sugar`
    }
    return `Serving custom chai: ${item}`;
}

type MasalaChai = { type: 'masala'; spicelevel: number };
type GinggerChai = { type: 'ginger'; amount: number };
type ElaichiChai = { type: 'elaichi'; aroma: number };

type Chai = MasalaChai | GinggerChai | ElaichiChai;

function MakeChai(order: Chai) {
    switch (order.type) {
        case "masala":
            return 'Masala Chai';
        case "elaichi":
            return 'Elaichi Chai';
        case "ginger":
            return 'Ginger Chai';
    }
}

function brew(order: MasalaChai | GinggerChai){
    if("spicelevel" in order){

    }
}

function isStringArra(arr: unknown): arr is string[]{

}