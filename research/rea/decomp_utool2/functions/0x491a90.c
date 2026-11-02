// rea decompile_all
// name: FUN_00491a90
// address: 0x491a90
// body: available
// range: 0x491a90-0x491c23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00491a90(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  char cVar6;
  undefined **local_4c;
  undefined4 local_48;
  int local_44;
  char *local_40;
  undefined **local_3c;
  undefined4 local_38;
  char *local_30;
  int *local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702130;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar6 = '\x01';
  local_24 = 0;
  local_2c = *(int **)(*(int *)(in_ECX + 0x2c) + 0x150);
  local_1c = in_ECX;
  if (0 < local_2c[2]) {
    do {
      (**(code **)(**(int **)(*local_2c + local_24 * 4) + 0xc))(&local_28,uVar4);
      iVar2 = local_28;
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        local_11 = '\x01';
        local_3c = juce::RelativeCoordinatePositionerBase::DependencyFinderScope::vftable;
        local_38 = *(undefined4 *)(local_1c + 4);
        local_30 = &local_11;
        local_18 = &DAT_00bfe12c;
        local_8 = 1;
        FUN_00625030(&local_3c,&local_18);
        piVar5 = (int *)(local_18 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        cVar3 = local_11;
        local_3c = juce::Expression::Scope::vftable;
        local_12 = '\x01';
        local_48 = *(undefined4 *)(local_1c + 4);
        local_40 = &local_12;
        local_4c = juce::RelativeCoordinatePositionerBase::DependencyFinderScope::vftable;
        local_44 = local_1c;
        local_20 = &DAT_00bfe12c;
        local_8 = 3;
        FUN_00625030(&local_4c,&local_20);
        piVar5 = (int *)(local_20 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        local_8 = 0xffffffff;
        local_4c = juce::Expression::Scope::vftable;
        if (((local_12 == '\0') || (cVar3 == '\0')) || (cVar6 == '\0')) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_2c[2]);
  }
  ExceptionList = local_10;
  return cVar6;
}

