// rea decompile_all
// name: FUN_00454650
// address: 0x454650
// body: available
// range: 0x454650-0x45484a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00454650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *in_ECX;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007001c8;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00454850(&local_18);
  local_8 = 0;
  puVar2 = local_18;
  while ((puVar2 != (undefined4 *)0x0 &&
         (cVar4 = FUN_004542d0(&DAT_00c1785c,&local_11), cVar4 != '\0'))) {
    FUN_00454850(&local_1c);
    puVar3 = local_1c;
    local_8._0_1_ = 1;
    if (local_1c == (undefined4 *)0x0) {
      uVar6 = FUN_00622070(uVar5);
      local_8 = CONCAT31(local_8._1_3_,2);
      uVar10 = extraout_ECX;
      FUN_00637690(uVar6);
      piVar7 = (int *)FUN_006377c0(uVar10);
      if (*(char *)*in_ECX == '\0') {
        piVar8 = (int *)(*piVar7 + -8);
        if (piVar8 != &DAT_00bfe124) {
          LOCK();
          *piVar8 = *piVar8 + 1;
          UNLOCK();
        }
        LOCK();
        iVar1 = *in_ECX;
        *in_ECX = *piVar7;
        UNLOCK();
        piVar7 = (int *)(iVar1 + -8);
        if (piVar7 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar7);
          }
        }
      }
      piVar7 = (int *)(local_20 + -8);
      *param_1 = 0;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      piVar7 = local_24 + -2;
      if (piVar7 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar7);
        }
      }
      if (puVar2 != (undefined4 *)0x0) {
        piVar7 = puVar2 + 1;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      ExceptionList = local_10;
      return param_1;
    }
    local_24 = operator_new(0x10);
    local_24[1] = 0;
    *local_24 = juce::Expression::Helpers::BinaryTerm::vftable;
    local_24[2] = puVar2;
    if (local_11 == '+') {
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = puVar2[1] + 1;
      }
      local_24[3] = puVar3;
      puVar3[1] = puVar3[1] + 1;
      *local_24 = juce::Expression::Helpers::Add::vftable;
    }
    else {
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = puVar2[1] + 1;
      }
      local_24[3] = puVar3;
      puVar3[1] = puVar3[1] + 1;
      *local_24 = juce::Expression::Helpers::Subtract::vftable;
    }
    puVar9 = puVar2;
    if ((puVar2 != local_24) &&
       (local_24[1] = local_24[1] + 1, puVar9 = local_24, local_18 = local_24,
       puVar2 != (undefined4 *)0x0)) {
      piVar7 = puVar2 + 1;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    local_8 = (uint)local_8._1_3_ << 8;
    piVar7 = puVar3 + 1;
    *piVar7 = *piVar7 + -1;
    puVar2 = puVar9;
    if (*piVar7 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  *param_1 = puVar2;
  ExceptionList = local_10;
  return param_1;
}

