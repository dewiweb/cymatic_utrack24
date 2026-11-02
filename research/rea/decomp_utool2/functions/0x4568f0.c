// rea decompile_all
// name: FUN_004568f0
// address: 0x4568f0
// body: available
// range: 0x4568f0-0x456b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004568f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  BOOL BVar5;
  int iVar6;
  undefined4 uVar7;
  int *_Memory;
  int in_ECX;
  uint uVar8;
  longlong lVar9;
  undefined **local_80;
  int local_7c;
  int *local_78;
  void *local_74;
  int local_6c;
  uint local_64;
  undefined **local_5c [2];
  undefined ***local_54;
  undefined1 local_50;
  void *local_4c;
  undefined8 local_48;
  uint local_40;
  undefined1 local_3c [28];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700422;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)FUN_00458890(local_18);
  BVar5 = GetFileAttributesExW((LPCWSTR)*puVar4,GetFileExInfoStandard,local_3c);
  if (BVar5 == 0) {
    local_48 = 0;
    local_48._0_4_ = 0;
    local_1c = (undefined4)local_48;
  }
  else {
    local_48 = CONCAT44(local_20,(undefined4)local_48);
  }
  FUN_0062cb00(local_1c);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_40 = *(uint *)(in_ECX + 0x30);
  if ((int)local_40 < 1) {
    cVar3 = FUN_00456d50(&local_80);
    if (cVar3 == '\0') goto LAB_00456ad8;
  }
  else {
    local_5c[0] = juce::OutputStream::vftable;
    FUN_0045c990(&DAT_00c129a8);
    local_54 = &local_80;
    local_5c[0] = juce::GZIPCompressorOutputStream::vftable;
    local_50 = 0;
    local_8._0_1_ = 2;
    local_4c = operator_new(0x8040);
    local_48 = CONCAT44(local_4c,(undefined4)local_48);
    local_8._0_1_ = 3;
    uVar8 = 0xffffffff;
    if (local_40 < 10) {
      uVar8 = local_40;
    }
    *(uint *)((int)local_4c + 0x38) = uVar8;
    *(undefined2 *)((int)local_4c + 0x3c) = 1;
    *(undefined1 *)((int)local_4c + 0x3e) = 0;
    _memset(local_4c,0,0x38);
    iVar6 = FUN_00619910(8,0xfffffff1,8,0,"1.2.3");
    *(bool *)((int)local_4c + 0x3d) = iVar6 == 0;
    local_8._0_1_ = 4;
    cVar3 = FUN_00456d50(local_5c);
    if (cVar3 == '\0') {
      FUN_00613c00();
      goto LAB_00456ad8;
    }
    local_8._0_1_ = 0;
    FUN_00613c00();
  }
  *(uint *)(in_ECX + 0x18) = local_64;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  lVar9 = (**(code **)(*param_1 + 0xc))();
  *(longlong *)(in_ECX + 0x28) = lVar9 - CONCAT44(param_3,param_2);
  pcVar1 = *(code **)(*param_1 + 0x24);
  if (pcVar1 == FUN_0062a8d0) {
    local_40 = 0x4034b50;
    (**(code **)(*param_1 + 0x10))(&local_40,4);
  }
  else {
    (*pcVar1)(0x4034b50);
  }
  FUN_00456e80(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 8);
  uVar7 = FUN_0045d1e0(uVar2);
  (**(code **)(*param_1 + 0x10))(uVar2,uVar7);
  if (local_64 != 0) {
    if (local_78 != (int *)0x0) {
      if (local_64 < (uint)local_78[1]) {
        *(undefined1 *)(local_64 + *local_78) = 0;
      }
      local_6c = *local_78;
    }
    (**(code **)(*param_1 + 0x10))(local_6c,local_64);
  }
LAB_00456ad8:
  local_80 = juce::MemoryOutputStream::vftable;
  FUN_00622b80();
  FID_conflict__free(local_74);
  _Memory = (int *)(local_7c + -8);
  local_80 = juce::OutputStream::vftable;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar6 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

