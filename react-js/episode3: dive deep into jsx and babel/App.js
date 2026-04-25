import React from "react";
import ReactDOM from "react-dom/client";

// hard way of doing things
const h1 = React.createElement("h1", { id: "heading" }, "I'm Heading 1");
console.log(h1);

// JSX: is something which look like html/xml.
// babel: JSX -> transpilation -> react element
const JSXh1 = <h1>I'm Heading from JSX</h1>
const age = 21;

// parentheses keep track of jsx from where it start or from where it end so, babel can compile.
const JSX = (
    <div>
        <h1 id="hello" className="container">Hello I'm Suraj Kumar. I'm {age} years old.</h1>
    </div>
)

// component
// class based component -> OLD way to writing react code.
// functional based components -> new way to writing code.
const Heading = () => {
    return (
        <h1 id="Hello"> Heading</h1>
    )
}
const Heading2 = () => {
    return <h1 id="Hello"> Heading</h1>
}
const Heading3 = () => (
    <div>
        <Heading2 />
        <Heading2></Heading2>
        {Heading2()}
        <h1 id="hello" className="container">Hello I'm Suraj Kumar. I'm {age} years old.</h1>
    </div>
)

const UserCard = () => {
    const cardStyle = {
        boxShadow: '0 4px 8px 0 rgba(0,0,0,0.2)',
        maxWidth: '300px',
        margin: '20px auto',
        textAlign: 'center',
        fontFamily: 'Arial, sans-serif',
        borderRadius: '10px',
        overflow: 'hidden',
        backgroundColor: '#fff'
    };

    const buttonStyle = {
        border: 'none',
        outline: '0',
        display: 'inline-block',
        padding: '12px',
        color: 'white',
        backgroundColor: '#000',
        textAlign: 'center',
        cursor: 'pointer',
        width: '100%',
        fontSize: '18px'
    };

    return (
        <div style={cardStyle}>
            <img
                src="https://placeholder.com"
                alt="John Doe"
                style={{ width: '100%' }}
            />

            <div style={{ padding: '20px' }}>
                <h2 style={{ margin: '10px 0' }}>John Doe</h2>
                <p style={{ color: 'grey', fontSize: '18px' }}>Senior Web Developer</p>
                <p style={{ fontSize: '14px', color: '#555' }}>
                    Passionate about building clean and functional user interfaces.
                </p>

                <div style={{ margin: '24px 0' }}>
                    <a href="#" style={{ textDecoration: 'none', fontSize: '22px', color: 'black', margin: '0 10px' }}>🔗</a>
                    <a href="#" style={{ textDecoration: 'none', fontSize: '22px', color: 'black', margin: '0 10px' }}>🐦</a>
                </div>

                <button style={buttonStyle}>
                    Contact
                </button>
            </div>
        </div>
    );
};


console.log(UserCard);

// pass a component
// root.render(<Heading2/>)
const Heading4 = () => <h1 id="Hello"> Heading</h1>
console.log(JSXh1);
const root = ReactDOM.createRoot(document.querySelector('body'));
root.render(<UserCard />);

// creating app component using three child component 
const Navbar = () => (
    <nav style={{
        display: 'flex',
        justifyContent: 'space-between',
        alignItems: 'center',
        padding: '0 20px',
        height: '60px',
        backgroundColor: '#fff',
        boxShadow: '0 2px 4px rgba(0,0,0,0.1)',
        position: 'sticky',
        top: 0,
        zIndex: 1000
    }}>
        <div style={{ fontWeight: 'bold', fontSize: '20px' }}>Brand</div>
        <ul style={{ display: 'flex', listStyle: 'none', gap: '20px' }}>
            <li><a href="#" style={{ textDecoration: 'none', color: '#333' }}>Home</a></li>
            <li><a href="#" style={{ textDecoration: 'none', color: '#333' }}>About</a></li>
            <li><a href="#" style={{ textDecoration: 'none', color: '#333' }}>Contact</a></li>
        </ul>
    </nav>
);


const Footer = () => (
    <footer style={{
        backgroundColor: '#222',
        color: '#fff',
        textAlign: 'center',
        padding: '30px 20px',
        marginTop: 'auto'
    }}>
        <p style={{ margin: 0 }}>&copy; 2024 Your Project. Built with React.</p>
        <div style={{ marginTop: '10px' }}>
            <a href="#" style={{ color: '#aaa', fontSize: '14px', margin: '0 5px' }}>Privacy Policy</a>
            <a href="#" style={{ color: '#aaa', fontSize: '14px', margin: '0 5px' }}>Terms of Service</a>
        </div>
    </footer>
);


const Container = ({ children }) => (
    <main style={{
        maxWidth: '1200px',
        margin: '0 auto',
        padding: '40px 20px',
        minHeight: 'calc(100vh - 160px)', // Pushes footer to bottom
        display: 'grid',
        gridTemplateColumns: 'repeat(auto-fit, minmax(300px, 1fr))',
        gap: '20px'
    }}>
        {children}
    </main>
);

const App = () => {
    return (
        <div 
        style={{
            height: '100%',
            width: '100%'
        }}
        >
            <Navbar/>
            <Container/>
            <Footer/>
        </div>
    )
}
const root = ReactDOM.createRoot(document.querySelector('#root'));
root.render(<App />);