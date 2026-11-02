// rea decompile_all
// name: FUN_006d4090
// address: 0x6d4090
// body: available
// range: 0x6d4090-0x6d4262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d4090(char param_1,char param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727216;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 == '\0') {
    puVar1 = (undefined4 *)in_ECX[0x1e];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x1e] = 0;
      (**(code **)*puVar1)(1,uVar4);
    }
    puVar1 = (undefined4 *)in_ECX[0x1f];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x1f] = 0;
      (**(code **)*puVar1)(1);
    }
  }
  else if (param_2 == '\0') {
    puVar1 = (undefined4 *)in_ECX[0x1e];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x1e] = 0;
      (**(code **)*puVar1)(1);
    }
    if (in_ECX[0x1f] == 0) {
      operator_new(0x9c);
      local_8 = 1;
      puVar5 = (undefined4 *)FUN_006b0de0(in_ECX,in_ECX[0x36]);
      local_8 = 0xffffffff;
      puVar1 = (undefined4 *)in_ECX[0x1f];
      if ((puVar1 != puVar5) && (in_ECX[0x1f] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      if (in_ECX[0x1f] != 0) {
        FUN_006e5050(in_ECX[0x1f],0xffffffff);
      }
    }
  }
  else {
    puVar1 = (undefined4 *)in_ECX[0x1f];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[0x1f] = 0;
      (**(code **)*puVar1)(1);
    }
    if (in_ECX[0x1e] == 0) {
      operator_new(0x88);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_006d1800(in_ECX,in_ECX[0x36]);
      local_8 = 0xffffffff;
      puVar1 = (undefined4 *)in_ECX[0x1e];
      if ((puVar1 != puVar5) && (in_ECX[0x1e] = (int)puVar5, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      if (in_ECX[0x1e] != 0) {
        FUN_006e5050(in_ECX[0x1e],0xffffffff);
      }
      FUN_006d1c90(1);
    }
  }
  local_8 = 2;
  if (*(char *)((int)in_ECX + 0x71) == '\0') {
LAB_006d41fb:
    bVar2 = false;
  }
  else {
    if ((*(byte *)(in_ECX + 0x1a) & 1) == 0) {
      cVar3 = FUN_006e6420();
      if (cVar3 != '\0') goto LAB_006d41fb;
    }
    bVar2 = true;
  }
  local_8 = 0xffffffff;
  if ((bVar2) && ((*(byte *)(in_ECX + 0x1a) & 1) != 0)) {
    uVar7 = 0;
    uVar6 = (**(code **)(*in_ECX + 0xb4))(0);
    FUN_006e9aa0(uVar6,uVar7);
    FUN_006e9910(1);
  }
  if (in_ECX[0x20] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(in_ECX[0x20] + 8);
  }
  (**(code **)(*in_ECX + 0x8c))(uVar6);
  (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  return;
}

