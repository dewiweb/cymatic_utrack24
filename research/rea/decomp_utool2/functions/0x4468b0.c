// rea decompile_all
// name: FUN_004468b0
// address: 0x4468b0
// body: available
// range: 0x4468b0-0x446bd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004468b0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *_Memory;
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  code *pcVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  void *local_20;
  void *local_1c;
  LPCRITICAL_SECTION local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fefa3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(in_ECX + 0x28) + 0x28))(0,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_14 = operator_new(0x30);
  local_8 = 0;
  FUN_0041b050(in_ECX + 0x36c);
  iVar3 = FUN_00606050(*(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x80),
                       *(undefined4 *)(in_ECX + 0x18));
  local_8 = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x20);
  if ((iVar1 != iVar3) && (*(int *)(in_ECX + 0x20) = iVar3, iVar1 != 0)) {
    FUN_00605fc0();
    FUN_004bfe14(iVar1,0x30);
  }
  pcVar5 = LeaveCriticalSection_exref;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_00604e40(in_ECX + 0x36c);
    iVar1 = *(int *)(in_ECX + 0x1c);
    lpCriticalSection = (LPCRITICAL_SECTION)(iVar1 + 0x24);
    local_18 = lpCriticalSection;
    EnterCriticalSection(lpCriticalSection);
    local_8 = 1;
    if (*(char *)(iVar1 + 0x95) != '\0') {
      FUN_00638d70();
    }
    pcVar5 = LeaveCriticalSection_exref;
    local_8 = 0xffffffff;
    LeaveCriticalSection(lpCriticalSection);
  }
  uVar4 = FUN_00637250();
  local_8 = 2;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_3c = 0x1b;
  local_38 = 0;
  local_34 = 0;
  FUN_006e6ce0(uVar4,0,&local_3c,&local_30);
  local_8 = 0xffffffff;
  local_1c = local_14;
  local_20 = local_14;
  _Memory = (int *)((int)local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_006d0e00(in_ECX + 0x8e8);
  cVar2 = FUN_006d1aa0(0);
  if (cVar2 == '\0') {
    FUN_0048c530();
    FUN_006ca6c0((int *)(in_ECX + 0x188),0);
    (**(code **)(*(int *)(in_ECX + 0x188) + 0x28))(1);
    FUN_006cc500(2,1);
  }
  if (0 < *(int *)(in_ECX + 0x8f0)) {
    local_24 = operator_new(0x34);
    local_8 = 3;
    iVar3 = FUN_0062f660(*(undefined4 *)(in_ECX + 0x8f0));
    local_8 = 0xffffffff;
    iVar1 = *(int *)(in_ECX + 0x8f8);
    if ((iVar1 != iVar3) && (*(int *)(in_ECX + 0x8f8) = iVar3, iVar1 != 0)) {
      FUN_0041be30(iVar1);
    }
    iVar1 = *(int *)(in_ECX + 0x8f0);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      local_24 = operator_new(0x14);
      local_8 = 4;
      uVar4 = FUN_00446dd0(in_ECX);
      local_8 = 0xffffffff;
      FUN_0062f560(uVar4,1);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  iVar1 = DAT_00c8a668;
  if (*(int *)(in_ECX + 8) == 0) {
    *(undefined4 *)(in_ECX + 4) = 0x14;
    *(undefined4 *)(in_ECX + 8) = 0x14;
    local_8 = 5;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
  }
  else {
    if (DAT_00c8a668 == 0) goto LAB_00446bbd;
    iVar3 = *(int *)(in_ECX + 0x10);
    *(undefined4 *)(in_ECX + 4) = 0x14;
    *(undefined4 *)(in_ECX + 8) = 0x14;
    if (((iVar3 == 0) || (0x13 < *(int *)(iVar3 + 4))) &&
       ((*(int *)(in_ECX + 0xc) == 0 || (*(int *)(*(int *)(in_ECX + 0xc) + 4) < 0x15))))
    goto LAB_00446bbd;
    if (*(int *)(in_ECX + 0xc) == 0) {
      *(int *)(iVar1 + 0x4c) = iVar3;
    }
    else {
      *(int *)(*(int *)(in_ECX + 0xc) + 0x10) = iVar3;
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc) = *(undefined4 *)(in_ECX + 0xc);
    }
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_00463c00(in_ECX);
LAB_00446bbd:
  (*pcVar5)(&DAT_00c8a930);
  ExceptionList = local_10;
  return;
}

