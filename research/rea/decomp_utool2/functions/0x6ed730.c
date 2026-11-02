// rea decompile_all
// name: FUN_006ed730
// address: 0x6ed730
// body: available
// range: 0x6ed730-0x6eda0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ed730(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int local_64 [4];
  char local_54;
  int local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char local_40;
  int local_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char local_2c;
  void *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729202;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ee820(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  in_ECX[0xbf] = 0;
  if ((*(uint *)(param_1 + 0x10) >> 5 & 1) != 0) {
    local_8 = 0;
    piVar2 = (int *)in_ECX[0xe];
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      if (piVar2 != (int *)0x0) {
        FUN_004912c0();
      }
      in_ECX[0xe] = 0;
      if ((*(byte *)(in_ECX + 0x1a) & 2) != 0) {
        FUN_006cec20();
      }
    }
    local_8 = 0xffffffff;
    piVar2 = (int *)(**(code **)(in_ECX[0x1e] + 8))(local_18);
    if (*piVar2 == piVar2[1]) {
      local_40 = '\0';
      local_50 = 0;
      iStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_3c = 0;
      iStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      local_2c = '\0';
      local_8 = 2;
      uVar3 = FUN_006f03a0(local_64,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      FUN_006f1ef0(uVar3,&local_50,&local_3c);
      if ((local_54 != '\0') && (local_54 = '\0', local_64[0] != 0)) {
        FUN_00415ff0(local_64);
      }
      if (iStack_4c < iStack_38) {
        FUN_006f0a50(&local_50,0);
        FUN_006f0a50(&local_3c,1);
      }
      if ((local_2c != '\0') && (local_2c = '\0', local_3c != 0)) {
        FUN_00415ff0(&local_3c);
      }
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != 0)) {
        FUN_00415ff0(&local_50);
      }
    }
    local_28 = (void *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    puStack_1c = (undefined4 *)0x0;
    local_8 = 3;
    iVar4 = FUN_006e9580();
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_004b0700(iVar4);
    }
    puVar1 = puStack_1c;
    if (puStack_1c != puVar5) {
      if (puVar5 != (undefined4 *)0x0) {
        LOCK();
        puVar5[1] = puVar5[1] + 1;
        UNLOCK();
      }
      puVar1 = puVar5;
      if (puStack_1c != (undefined4 *)0x0) {
        LOCK();
        piVar2 = puStack_1c + 1;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          puVar1 = (undefined4 *)*puStack_1c;
          puStack_1c = puVar5;
          (*(code *)*puVar1)(1);
          puVar1 = puStack_1c;
        }
      }
    }
    puStack_1c = puVar1;
    (**(code **)(*in_ECX + 0xcc))(&local_28,param_1);
    puVar5 = operator_new(0xc);
    local_8._0_1_ = 5;
    *puVar5 = juce::ModalCallbackFunction::ComponentCaller1<juce::CodeEditorComponent>::vftable;
    puVar5[1] = FUN_006eda10;
    local_14 = puVar5 + 2;
    iVar4 = FUN_0040de70(in_ECX);
    puVar5[2] = iVar4;
    if (iVar4 != 0) {
      LOCK();
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      UNLOCK();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    uVar3 = FUN_006d1110();
    FUN_006a0120(uVar3,puVar5,0);
    if (puStack_1c != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puStack_1c + 1;
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puStack_1c)(1);
      }
    }
    FUN_004b00e0();
    FID_conflict__free(local_28);
    ExceptionList = local_10;
    return;
  }
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 6;
    DAT_00c8a67c = FUN_006cb960();
  }
  if (*(int *)(*(int *)(DAT_00c8a67c + 0x20) + 8) != 100) {
    FUN_0063eb10(100);
  }
  uVar3 = FUN_006f03a0(local_64,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  local_8 = 7;
  FUN_006f0a50(uVar3,*(byte *)(param_1 + 0x10) & 1);
  if ((local_54 != '\0') && (local_54 = 0, local_64[0] != 0)) {
    FUN_00415ff0(local_64);
  }
  ExceptionList = local_10;
  return;
}

