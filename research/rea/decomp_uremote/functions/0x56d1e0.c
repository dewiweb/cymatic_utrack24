// rea decompile_all
// name: FUN_0056d1e0
// address: 0x56d1e0
// body: available
// range: 0x56d1e0-0x56d228 inclusive
// range: 0x56d233-0x56d3f4 inclusive
// range: 0x56d3f7-0x56d4b0 inclusive
// range: 0x56d4b6-0x56d889 inclusive
// range: 0x56d88c-0x56d8db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0056d1e0(undefined4 param_1,short *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined2 *local_10;
  undefined1 local_9;
  int local_8;
  
  *param_2 = 2;
  local_9 = 8;
  switch(*(undefined1 *)(in_ECX + 0x78)) {
  case 2:
    *param_2 = *param_2 + 3;
    break;
  case 0x44:
    *param_2 = *param_2 + 6;
    break;
  case 0x45:
    *param_2 = *param_2 + 1;
    break;
  case 0x4a:
    *param_2 = *param_2 + *(short *)(in_ECX + 0xca) + 10;
    break;
  case 0x83:
    *param_2 = *param_2 + 1;
    break;
  case 0x84:
    *param_2 = *param_2 + 6;
    break;
  case 0x85:
    *param_2 = *param_2 + 6;
    break;
  case 0x87:
    *param_2 = *param_2 + 8;
    break;
  case 0x88:
    *param_2 = *param_2 + 8;
    break;
  case 0xc1:
    *param_2 = *param_2 + 2 + (*(short *)(in_ECX + 0xca) + 0x19U & 0xfffe);
    break;
  case 0xc2:
    *param_2 = *param_2 + 2 + (*(short *)(in_ECX + 0xca) + 0xfU & 0xfffe);
    break;
  case 0xc3:
    *param_2 = *param_2 + *(short *)(in_ECX + 0xca) + 0xc;
    break;
  case 200:
    *param_2 = *param_2 + 2;
    break;
  case 0xc9:
    *param_2 = *param_2 + 4;
    break;
  case 0xf0:
    *param_2 = *param_2 + 6;
    local_9 = 9;
    break;
  case 0xf1:
    local_9 = 9;
    break;
  case 0xf2:
    *param_2 = *param_2 + *(short *)(in_ECX + 0xca) + 6;
    local_9 = 9;
    break;
  case 0xf3:
    *param_2 = *param_2 + 5;
    local_9 = 9;
    break;
  case 0xf4:
    *param_2 = *param_2 + *(short *)(in_ECX + 0xca) + 4;
    local_9 = 9;
  }
  local_8 = FUN_00532410(*param_2,local_9,*(byte *)(in_ECX + 0x74) >> 1 & 1,
                         *(byte *)(in_ECX + 0x74) & 1);
  if (local_8 == 0) {
    uVar2 = 0;
  }
  else {
    puVar1 = *(undefined1 **)(local_8 + 0x1c);
    *puVar1 = *(undefined1 *)(in_ECX + 0x78);
    puVar1[1] = 0;
    local_10 = (undefined2 *)(puVar1 + 2);
    switch(*(undefined1 *)(in_ECX + 0x78)) {
    case 2:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      puVar1[4] = *(undefined1 *)(in_ECX + 0x7e);
      break;
    case 0x44:
      *local_10 = *(undefined2 *)(in_ECX + 0x80);
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(in_ECX + 0x7c);
      break;
    case 0x45:
      *(undefined1 *)local_10 = *(undefined1 *)(in_ECX + 0x7c);
      break;
    case 0x4a:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
      break;
    case 0x83:
      *(undefined1 *)local_10 = *(undefined1 *)(in_ECX + 0x7c);
      break;
    case 0x84:
      *(undefined1 *)local_10 = *(undefined1 *)(in_ECX + 0x80);
      puVar1[3] = *(char *)(in_ECX + 0x84) != '\0';
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(in_ECX + 0x7c);
      break;
    case 0x85:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(in_ECX + 0x7e);
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(in_ECX + 0x80);
      break;
    case 0x87:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      break;
    case 0x88:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      break;
    case 0xc1:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      local_10 = local_10 + 1;
      FUN_00549850(&local_10,in_ECX + 0xb8);
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
      *(undefined2 *)((uint)((int)local_10 + 1) & 0xfffffffe) = 0;
      break;
    case 0xc2:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      *local_10 = *(undefined2 *)(in_ECX + 0x7e);
      local_10[1] = *(undefined2 *)(in_ECX + 0x7c);
      local_10 = local_10 + 2;
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
      *(undefined2 *)((uint)((int)local_10 + 1) & 0xfffffffe) = *(undefined2 *)(in_ECX + 0x82);
      break;
    case 0xc3:
      FUN_0056e9c0(&local_10,in_ECX + 0x88);
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      local_10 = local_10 + 1;
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
      break;
    case 200:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      break;
    case 0xc9:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(in_ECX + 0x7e);
      break;
    case 0xf0:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(in_ECX + 0x7e);
      *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(in_ECX + 0x80);
      break;
    case 0xf2:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(in_ECX + 0x7e);
      local_10 = (undefined2 *)(puVar1 + 6);
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
      break;
    case 0xf3:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(in_ECX + 0x7e);
      puVar1[6] = *(undefined1 *)(in_ECX + 0x80);
      break;
    case 0xf4:
      *local_10 = *(undefined2 *)(in_ECX + 0x7c);
      local_10 = (undefined2 *)(puVar1 + 4);
      FUN_0054b9f0(&local_10,in_ECX + 0xc4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

