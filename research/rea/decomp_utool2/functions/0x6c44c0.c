// rea decompile_all
// name: FUN_006c44c0
// address: 0x6c44c0
// body: available
// range: 0x6c44c0-0x6c456c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006c44c0(int *param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 **local_1c;
  undefined4 *local_18;
  void *local_14;
  int local_c;
  
  puVar2 = &DAT_00c8aa48;
  if (param_2 == '\0') {
    puVar2 = &DAT_00c8a9a0;
  }
  piVar3 = (int *)FUN_0063a920(&local_18,puVar2);
  puVar2 = local_18;
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((0 < local_c) && (local_18 != (undefined4 *)0x0)) {
    local_1c = &local_18;
    uVar4 = FUN_00447770(&local_1c);
    if (uVar4 < (uint)puVar2[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(local_14);
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_18 + 1;
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  return param_1;
}

