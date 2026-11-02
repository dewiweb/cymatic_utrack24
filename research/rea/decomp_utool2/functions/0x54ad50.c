// rea decompile_all
// name: FUN_0054ad50
// address: 0x54ad50
// body: available
// range: 0x54ad50-0x54ae5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0054ad50(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070fbc4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar6 = 0;
  local_11 = 0;
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x20)) {
    bVar8 = *(int *)(in_ECX + 0x20) != 0;
    do {
      if (bVar8) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x18) + uVar6 * 4);
      }
      else {
        iVar7 = 0;
      }
      piVar4 = (int *)FUN_00410a10();
      if (*piVar4 == *param_1) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_0045c1e0();
      }
      piVar4 = (int *)(local_1c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      if (local_18 == 0) {
        operator_new(0x80);
        local_8 = 0;
        puVar5 = (undefined4 *)FUN_0053e120();
        local_8 = 0xffffffff;
        puVar2 = *(undefined4 **)(iVar7 + 8);
        if ((puVar2 != puVar5) &&
           (*(undefined4 **)(iVar7 + 8) = puVar5, puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)();
        }
        local_11 = 1;
      }
      uVar6 = uVar6 + 1;
      bVar8 = uVar6 < *(uint *)(in_ECX + 0x20);
      uVar3 = local_11;
    } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x20));
  }
  ExceptionList = local_10;
  return uVar3;
}

