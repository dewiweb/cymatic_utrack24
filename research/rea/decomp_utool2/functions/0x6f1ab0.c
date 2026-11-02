// rea decompile_all
// name: FUN_006f1ab0
// address: 0x6f1ab0
// body: available
// range: 0x6f1ab0-0x6f1d7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006f1c7a) */
/* WARNING: Removing unreachable block (ram,0x006f1d50) */
/* WARNING: Removing unreachable block (ram,0x006f1d5b) */

void FUN_006f1ab0(int *param_1,int param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  undefined3 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  int *piStack_68;
  uint local_44;
  undefined4 local_40;
  int local_28;
  int local_24;
  undefined4 local_20;
  char *local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072983f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 != '\0') {
    local_1c = pcVar1;
    if (param_3 != '\0') {
      piStack_68 = (int *)0x6f1af8;
      puVar4 = operator_new(0x10);
      *puVar4 = juce::CodeDocumentInsertAction::vftable;
      puVar4[1] = in_ECX;
      iVar6 = *param_1;
      puVar4[2] = iVar6;
      piVar5 = (int *)(iVar6 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      puVar4[3] = param_2;
      piStack_68 = (int *)0x6f1b28;
      FUN_0063ba90();
      ExceptionList = local_10;
      return;
    }
    piStack_68 = (int *)0x6f1b4e;
    FUN_006f2c40();
    if (local_44 < (uint)in_ECX[2]) {
      local_14 = *(int *)(*in_ECX + local_44 * 4);
    }
    else {
      local_14 = 0;
    }
    piVar5 = (int *)(pcVar1 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8._1_3_ = 0;
    uVar3 = local_8._1_3_;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    local_18 = pcVar1;
    if (local_14 != 0) {
      local_1c = (char *)local_40;
      piStack_68 = &local_28;
      local_20 = FUN_00637a90();
      local_8._0_1_ = 2;
      FUN_006379a0(&piStack_68,0,local_1c);
      FUN_00637730();
      piStack_68 = (int *)0x6f1bc8;
      puVar4 = (undefined4 *)FUN_00637730();
      local_1c = (char *)*puVar4;
      *puVar4 = pcVar1;
      piVar5 = (int *)(local_24 + -8);
      local_18 = local_1c;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          piStack_68 = (int *)0x6f1bf5;
          FID_conflict__free(piVar5);
        }
      }
      piVar5 = (int *)(local_28 + -8);
      uVar3 = local_8._1_3_;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar6 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar6 == 0) {
          piStack_68 = (int *)0x6f1c19;
          FID_conflict__free(piVar5);
          uVar3 = local_8._1_3_;
        }
      }
    }
    local_8._1_3_ = uVar3;
    in_ECX[0x1b] = -1;
    piVar5 = piRam00000000;
    local_8 = CONCAT31(local_8._1_3_,3);
    piStack_68 = (int *)0x6f1c4c;
    FUN_004b4110();
    piStack_68 = piRam00000000;
    if (local_14 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(local_14 + 4);
    }
    piRam00000000[1] = iVar6;
    FUN_004b6b80(local_44);
    iVar6 = piVar5[1];
    if ((int)local_44 < in_ECX[2]) {
      do {
        iVar2 = *(int *)(*in_ECX + local_44 * 4);
        local_44 = local_44 + 1;
        *(int *)(iVar2 + 4) = iVar6;
        iVar6 = iVar6 + *(int *)(iVar2 + 8);
      } while ((int)local_44 < in_ECX[2]);
    }
    FUN_006f1d90();
    FUN_0044ec90();
    iVar6 = 0;
    if (0 < in_ECX[5]) {
      do {
        if (param_2 <= *(int *)(*(int *)(in_ECX[3] + iVar6 * 4) + 4)) {
          piStack_68 = (int *)0x6f1ce6;
          FUN_006f2c40();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < in_ECX[5]);
    }
    iVar6 = in_ECX[0x1e];
    while (0 < iVar6) {
      iVar6 = iVar6 + -1;
      if ((in_ECX[0x1e] <= iVar6) && (iVar6 = in_ECX[0x1e] + -1, iVar6 < 0)) break;
      piStack_68 = param_1;
      FUN_00410536();
    }
    piStack_68 = (int *)0x6f1d23;
    FID_conflict__free((void *)0x0);
    piVar5 = (int *)(local_1c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar6 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        piStack_68 = (int *)0x6f1d47;
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

