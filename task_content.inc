<div class="content">
	<div class="content_left" id="content_left">
		<ul class="tree">
		 <li><input type="checkbox" class="checkbox" id="c1" value="1" onclick="change(1)" checked> <div class="text" id="t1" onmousedown="menu(event,1)">Từ điển</div>
			<ul id="u1">
				<li><input type="checkbox" class="checkbox" id="c2" value="1" onclick="change(2)" checked> <div class="text" id="t2" onmousedown="menu(event,2)">Là danh sách</div>
				 <ul id="u2" style="display:block;">
					<li><input type="checkbox" class="checkbox" id="c3" value="0" onclick="change(3)"> <div class="text" id="t3" onmousedown="menu(event,3)">Các từ</div>
						<ul id="u3" style="display:none;"></ul>
					</li>
					<li><input type="checkbox" class="checkbox" id="c4" value="0" onclick="change(4)"> <div class="text" id="t4" onmousedown="menu(event,4)">Các ngữ</div>
						<ul id="u4" style="display:none;"></ul>
					</li>
				 </ul>
				</li>
				<li><input type="checkbox" class="checkbox" id="c5" value="0" onclick="change(5)"> <div class="text" id="t5" onmousedown="menu(event,5)">Được sắp xếp theo thứ tự chữ cái</div>
					<ul id="u5" style="display:none;"></ul>
				</li>
				<li><input type="checkbox" class="checkbox" id="c6" value="0" onclick="change(6)"> <div class="text" id="t6" onmousedown="menu(event,6)">Cung cấp các giải nghĩa</div>
					<ul id="u6" style="display:none;"></ul>
				</li>
			</ul>
		 </li>
		</ul>
		<div class="task_menu" id="task_menu" style="display:none">
			<div class="task_menu_button">Thêm</div><div class="task_menu_button">Sửa</div><div class="task_menu_button">Xóa</div><div class="task_menu_button" onclick="task_menu_close()">Đóng</div>
		</div>
	</div>
	<div class="content_center" id="content_center">
		<div>
			<div class="operator">1</div>
			<div class="detail_day">15/06/2022</div>
			<div class="detail_day">19/06/2022</div>
			<div class="detail_rate">100%</div>
		</div>
		<div id="tr1">
			<div>
				<div class="operator">2</div>
				<div class="detail_day">19/06/2022</div>
				<div class="detail_day">25/06/2022</div>
				<div class="detail_rate">50%</div>
			</div>
			<div id="tr2">
				<div>
					<div class="operator">3</div>
					<div class="detail_day">10/06/2022</div>
					<div class="detail_day">19/06/2022</div>
					<div class="detail_rate">0%</div>
				</div>
				<div id="tr3" style="display:none">
				</div>
				<div>
					<div class="operator">4</div>
					<div class="detail_day">10/06/2022</div>
					<div class="detail_day">19/06/2022</div>
					<div class="detail_rate">0%</div>
				</div>
				<div id="tr4" style="display:none">
				</div>
			</div>
			<div>
				<div class="operator">5</div>
				<div class="detail_day">10/06/2022</div>
				<div class="detail_day">19/06/2022</div>
				<div class="detail_rate">0%</div>
			</div>
			<div id="tr5" style="display:none">
			</div>
			<div>
				<div class="operator">6</div>
				<div class="detail_day">10/06/2022</div>
				<div class="detail_day">19/06/2022</div>
				<div class="detail_rate">0%</div>
			</div>
			<div id="tr6" style="display:none">
			</div>
		</div>
	</div>
	<div class="content_right" id="content_right" onscroll="div_scroll()">
		<table cellspacing="0" cellpadding="0" width="720px">
			<tr>
				<td width="720px">
					<div style="height:20px">
						<div class="blank" style="width:80px;"></div>
						<div class="duration" style="width:198px;">
							<div class="process" style="width:196px">100%</div>
						</div>
					</div>
					<div id="d1">
						<div style="height:20px">
							<div class="blank" style="width:240px;"></div>
							<div class="duration" style="width:398px;">
								<div class="process" style="width:200px">50%</div>
							</div>
						</div>
						<div id="d2">
							<div style="height:20px">
								<div class="blank" style="width:80px;"></div>
								<div class="duration" style="width:198px;"></div>
							</div>
							<div style="height:20px">
								<div class="blank" style="width:240px;"></div>
								<div class="duration" style="width:396px;"></div>
							</div>
						</div>
						<div style="height:20px">
							<div class="blank" style="width:80px;"></div>
							<div class="duration" style="width:198px;"></div>
						</div>
						<div style="height:20px">
							<div class="blank" style="width:240px;"></div>
							<div class="duration" style="width:398px;"></div>
						</div>
					</div>
				</td>
			</tr>
		</table>
	</div>
</div>