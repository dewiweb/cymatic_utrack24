// rea decompile_all
// name: FUN_0043a2c0
// address: 0x43a2c0
// body: available
// range: 0x43a2c0-0x43a3c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a2c0(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_34 [4];
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  byte local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined2 local_1e;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  undefined4 uStack_12;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_34;
  local_2f = (undefined1)*(undefined4 *)(param_1 + 0x10);
  local_30 = (undefined1)((uint)*(undefined4 *)(param_1 + 0x10) >> 8);
  local_2d = (undefined1)*(undefined4 *)(param_1 + 0x14);
  local_2e = (undefined1)((uint)*(undefined4 *)(param_1 + 0x14) >> 8);
  uVar3 = *(int *)(param_1 + 0x28) - 1;
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_2a = (undefined1)uVar1;
  local_2b = (undefined1)((uint)uVar1 >> 8);
  local_2c = (undefined1)((uint)uVar1 >> 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  local_27 = (undefined1)uVar1;
  local_28 = (undefined1)((uint)uVar1 >> 8);
  local_29 = (undefined1)((uint)uVar1 >> 0x10);
  local_25 = (undefined1)(*(uint *)(param_1 + 0x20) >> 4);
  local_26 = (undefined1)(*(uint *)(param_1 + 0x20) >> 0xc);
  local_24 = (*(char *)(param_1 + 0x20) << 3 | (char)*(undefined4 *)(param_1 + 0x24) - 1U) * '\x02'
             | (byte)(uVar3 >> 4);
  uStack_44 = 0x43a35f;
  bVar2 = __aullshr();
  uStack_1a = *(undefined4 *)(param_1 + 0x3c);
  uStack_16 = *(undefined4 *)(param_1 + 0x40);
  uStack_12 = *(undefined4 *)(param_1 + 0x44);
  local_23 = bVar2 & 0xf | (char)uVar3 << 4;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_1f = (undefined1)uVar1;
  local_20 = (undefined1)((uint)uVar1 >> 8);
  local_21 = (undefined1)((uint)uVar1 >> 0x10);
  local_22 = (undefined1)((uint)uVar1 >> 0x18);
  local_1e = (undefined2)*(undefined4 *)(param_1 + 0x38);
  uStack_1c = (undefined2)((uint)*(undefined4 *)(param_1 + 0x38) >> 0x10);
  uStack_44 = 0;
  uStack_48 = 4;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 8))();
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x28))(0x22);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x10))(&stack0xffffffc4,0x22);
  __security_check_cookie(CONCAT22(local_1e,CONCAT11(local_1f,local_20)) ^ (uint)&uStack_48);
  return;
}

