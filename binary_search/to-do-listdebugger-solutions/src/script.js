var task_count = 1;
    const save_task = () => {
        let text = $('#task-content').val().trim();
        let text_slug = slug(text);
        let first_del = slug('first delete');
        let last_del = slug('last delete');
        let all_del = slug('all delete');

        if (text != '') {
            if (text_slug == first_del) {
                if ($('.saved-tasks').find('.inner-tasks').length >= 1) {
                    $('.inner-tasks').eq(0).remove();
                } else {
                    alert('No task found');
                }
            } else if (text_slug == last_del) {
                if ($('.saved-tasks').find('.inner-tasks').length >= 1) {
                    last_task = $('.saved-tasks').find('.inner-tasks').length;
                    $('.inner-tasks').eq(last_task - 1).remove();
                } else {
                    alert('No task found');
                }
            } else if (text_slug == all_del) {
                if ($('.saved-tasks').find('.inner-tasks').length >= 1) {
                    $('.saved-tasks').html('');
                } else {
                    alert('No task found');
                }
            } else {
                $('.saved-tasks').append(`<div class="col-lg-4 my-2 inner-tasks single-task${task_count}"> <div class="card"> <div class="card-body"> <p class="card-text">${text}</p> <button class="btn btn-danger delete-task${task_count}" onclick="delete_task(this)">Remove</button> </div> </div> </div>`);
                task_count++;
            }
        } else {
            alert('Add some task')
        }
        $('#task-content').val('');
    }
    const delete_task = (_this) => {
        $(_this).parent().parent().parent().remove();
    }

    var slug = (str) => {
        return str.toLowerCase().replace(/[^\w ]+/g, '').replace(/ +/g, '-');
    }