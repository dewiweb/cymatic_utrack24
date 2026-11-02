// rea decompile_all
// name: FUN_006c6110
// address: 0x6c6110
// body: available
// range: 0x6c6110-0x6c6216 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6110(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_ECX;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725dcf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006cfeb0(param_1 + 4);
  local_8 = 0;
  *in_ECX = juce::Drawable::vftable;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  piVar3 = (int *)(*(int *)(param_1 + 8) + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = in_ECX[2];
  in_ECX[2] = *(int *)(param_1 + 8);
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  if (puVar2 == (undefined4 *)0x0) {
    local_2c = 0x3f800000;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
  }
  else {
    local_2c = *puVar2;
    uStack_28 = puVar2[1];
    uStack_24 = puVar2[2];
    uStack_20 = puVar2[3];
    local_1c = puVar2[4];
    local_18 = puVar2[5];
  }
  local_44 = local_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  uStack_38 = uStack_20;
  local_34 = local_1c;
  local_30 = local_18;
  FUN_006cf510(&local_44);
  ExceptionList = local_10;
  return;
}

