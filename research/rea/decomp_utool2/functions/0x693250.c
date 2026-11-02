// rea decompile_all
// name: FUN_00693250
// address: 0x693250
// body: available
// range: 0x693250-0x6933ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00693250(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *_Memory;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined **local_44;
  int local_40;
  void **local_3c;
  void *local_38 [4];
  void *local_28;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721b77;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  if (*param_2 == param_2[1]) {
    *param_1 = &DAT_00bfe12c;
    return param_1;
  }
  ExceptionList = &local_10;
  FUN_0062cb00(0x100);
  iVar3 = local_14;
  local_8 = 0;
  iVar7 = param_2[1];
  iVar8 = *param_2;
  iVar2 = FUN_00693140(uVar1);
  if (iVar7 - iVar8 < iVar2) {
    iVar2 = iVar7 - iVar8;
  }
  FUN_00622b10(iVar2);
  iVar7 = 0;
  iVar8 = 0;
  if (0 < *(int *)(iVar3 + 0xac)) {
    do {
      local_18 = *(undefined4 *)(*(int *)(iVar3 + 0xa4) + iVar8 * 4);
      iVar3 = FUN_004a07b0();
      if (*param_2 < iVar7 + iVar3) {
        if (param_2[1] <= iVar7) break;
        iVar5 = param_2[1] - iVar7;
        iVar6 = *param_2 - iVar7;
        iVar2 = iVar6;
        if (iVar6 < iVar5) {
          iVar2 = iVar5;
        }
        FUN_004a0690(&local_44,iVar6,iVar2);
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + iVar3;
      iVar3 = local_14;
    } while (iVar8 < *(int *)(local_14 + 0xac));
  }
  FUN_00622880(param_1);
  local_44 = juce::MemoryOutputStream::vftable;
  if (((local_3c != local_38) && (local_3c != (void **)0x0)) && (local_3c[1] != local_28)) {
    if (local_28 == (void *)0x0) {
      FID_conflict__free(*local_3c);
      *local_3c = (void *)0x0;
      local_3c[1] = (void *)0x0;
    }
    else {
      if (*local_3c == (void *)0x0) {
        FID_conflict__free((void *)0x0);
        pvVar4 = (void *)FUN_004c554b(local_28);
      }
      else {
        pvVar4 = (void *)FUN_004c553b(*local_3c,local_28);
      }
      *local_3c = pvVar4;
      local_3c[1] = local_28;
    }
  }
  FID_conflict__free(local_38[0]);
  _Memory = (int *)(local_40 + -8);
  local_44 = juce::OutputStream::vftable;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar7 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

