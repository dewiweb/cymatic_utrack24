// rea decompile_all
// name: FUN_00518eb0
// address: 0x518eb0
// body: available
// range: 0x518eb0-0x5192b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00518eb0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709963;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xe0) == 0) {
    FUN_006906c0(uVar3);
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 0xe0) + 0x84);
    EnterCriticalSection(lpCriticalSection);
    if (0 < *(int *)(in_ECX + 0xf0)) {
      FUN_006906c0(uVar3);
      if (*(int *)(in_ECX + 0xe0) != 0) {
        FUN_00690c60();
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  cVar2 = FUN_005b2750();
  if ((cVar2 != '\0') && ((iVar1 = *(int *)(in_ECX + 0x154), iVar1 == 5 || (iVar1 == 4)))) {
    if (iVar1 == 5) {
      operator_new(0x7c);
      local_8 = 0;
      uVar4 = FUN_0051cc80(4);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX);
    }
    if ((*(byte *)(in_ECX + 0x158) & 1) != 0) {
      operator_new(0x90);
      local_8 = 1;
      uVar4 = FUN_00521b60(2,4);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_00);
    }
    if ((*(byte *)(in_ECX + 0x158) & 0xc) != 0) {
      operator_new(0x98);
      local_8 = 2;
      uVar4 = FUN_0051e7e0(5,4);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_01);
    }
  }
  cVar2 = FUN_005b2750();
  if ((cVar2 != '\0') && ((iVar1 = *(int *)(in_ECX + 0x154), iVar1 == 5 || (iVar1 == 3)))) {
    if (iVar1 == 5) {
      operator_new(0x7c);
      local_8 = 3;
      uVar4 = FUN_0051cc80(3);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_02);
    }
    if ((*(byte *)(in_ECX + 0x158) & 1) != 0) {
      operator_new(0x90);
      local_8 = 4;
      uVar4 = FUN_00521b60(2,3);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_03);
    }
    if ((*(byte *)(in_ECX + 0x158) & 0xc) != 0) {
      operator_new(0x98);
      local_8 = 5;
      uVar4 = FUN_0051e7e0(5,3);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_04);
    }
  }
  cVar2 = FUN_005b2750();
  if ((cVar2 != '\0') && ((iVar1 = *(int *)(in_ECX + 0x154), iVar1 == 5 || (iVar1 == 1)))) {
    if (iVar1 == 5) {
      operator_new(0x7c);
      local_8 = 6;
      uVar4 = FUN_0051cc80(1);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_05);
    }
    if ((*(byte *)(in_ECX + 0x158) & 1) != 0) {
      operator_new(0x90);
      local_8 = 7;
      uVar4 = FUN_00521b60(2,1);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_06);
    }
    if ((*(byte *)(in_ECX + 0x158) & 4) != 0) {
      operator_new(0x98);
      local_8 = 8;
      uVar4 = FUN_0051e7e0(4,1);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_07);
    }
    if ((*(byte *)(in_ECX + 0x158) & 8) != 0) {
      operator_new(0x98);
      local_8 = 9;
      uVar4 = FUN_0051e7e0(3,1);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_08);
    }
  }
  cVar2 = FUN_005b2750();
  if ((cVar2 != '\0') && ((iVar1 = *(int *)(in_ECX + 0x154), iVar1 == 5 || (iVar1 == 2)))) {
    if (iVar1 == 5) {
      operator_new(0x7c);
      local_8 = 10;
      uVar4 = FUN_0051cc80(2);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_09);
    }
    if ((*(byte *)(in_ECX + 0x158) & 1) != 0) {
      operator_new(0x90);
      local_8 = 0xb;
      uVar4 = FUN_00521b60(2,2);
      local_8 = 0xffffffff;
      FUN_006e0040(uVar4,extraout_ECX_10);
    }
  }
  if ((*(byte *)(in_ECX + 0x158) & 2) != 0) {
    operator_new(0x90);
    local_8 = 0xc;
    uVar4 = FUN_00521b60(1,5);
    local_8 = 0xffffffff;
    FUN_006e0040(uVar4,extraout_ECX_11);
  }
  FUN_00518cd0();
  ExceptionList = local_10;
  return;
}

