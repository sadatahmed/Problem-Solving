# Problem-Solving-Competitive

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>To-Do App</title>

    <link rel="stylesheet" href="style.css">

</head>

<body>
    <section class="container">
        <div class="header">
            <h1>To Do Apps</h1>
        </div>

        <div class="body-container">
            <div class="margin">
                <form action="" class="form">
                    <label for="">Add New Task</label>
                    <input type="text" id="newTask">
                    <input type="submit" value="Add Task" id="submitBtn">
                </form>

                <div class="incomplete-task">
                    <h2>Incomplete Task</h2>
                    <ul id="incompleteTask">
                        <li>
                            <input type="checkbox" class="checkbox">
                            <label for="">Task 1</label>
                        </li>
                        <li>
                            <input type="checkbox" class="checkbox">
                            <label for="">Task 1</label>
                        </li>
                        <li>
                            <input type="checkbox" class="checkbox">
                            <label for="">Task 1</label>
                        </li>
                    </ul>
                </div>

                <div class="complete-task">
                    <h2>Complete Task</h2>
                    <ul id="completeTask">
                        <li>
                            Task 1 <button class="delete">Delete</button>
                        </li>
                        <li>
                            Task 1 <button class="delete">Delete</button>
                        </li>
                        <li>
                            Task 1 <button class="delete" type="button">Delete</button>
                        </li>
                    </ul>
                </div>
            </div>
        </div>
    </section>



    <script>
        const newTask = document.querySelector("#newTask");

const submitBtn = document.querySelector("#submitBtn");
const form = document.querySelector("form");
const incompleteTask = document.querySelector("#incompleteTask");
const completeTask = document.querySelector("#completeTask");

//createTask
let createTask = (task) => {
let li = document.createElement("li");
let checkbox = document.createElement("input");
const label = document.createElement("label");

checkbox.type = "checkbox";
checkbox.className = "checkbox";
label.innerText = task;

li.appendChild(checkbox);
li.appendChild(label);

return li;
};

let addTask = (event) => {
event.preventDefault();

let li = createTask(newTask.value);
incompleteTask.appendChild(li);
newTask.value = "";

//bind the checkbox for incomplete to complete conversion================>
bindIncompleteTask(li, completeTasks);
};

let completeTasks = function () {
let li = this.parentNode;
let deleteBtn = document.createElement("button");
deleteBtn.innerText = "Delete";
deleteBtn.className = "delete";
li.appendChild(deleteBtn);

let checkbox = li.querySelector('input[type = "checkbox"]');
checkbox.remove();
completeTask.appendChild(li);

bindCompleteTask(li, deleteTask);
};

let deleteTask = function () {
let li = this.parentNode;
let ul = li.parentNode;
ul.removeChild(li);
};

let bindIncompleteTask = (taskItem, checkboxClick) => {
let checkbox = taskItem.querySelector('input[type = "checkbox"]');
checkbox.onchange = checkboxClick;
};

let bindCompleteTask = (taskItem, deleteButtonClick) => {
let deleteButton = taskItem.querySelector(".delete");
deleteButton.onclick = deleteButtonClick;
};

form.addEventListener("submit", addTask);

    </script>

</body>

</html>
