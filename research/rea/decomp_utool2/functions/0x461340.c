// rea decompile_all
// name: FUN_00461340
// address: 0x461340
// body: available
// range: 0x461340-0x46141e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00461340(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *local_24;
  void *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00700ae8;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX != (undefined4 *)0x0) {
    LOCK();
    in_ECX[1] = in_ECX[1] + 1;
    UNLOCK();
  }
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  uVar3 = in_ECX[8];
  puVar4 = in_ECX;
  local_24 = in_ECX;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    if ((uVar3 < (uint)in_ECX[8]) &&
       (puVar4 = (undefined4 *)0x0, *(int *)(in_ECX[6] + uVar3 * 4) != 0)) {
      FUN_00461340(uVar5);
      puVar4 = extraout_ECX;
    }
  }
  FUN_00462b70(puVar4,&local_24);
  puVar4 = local_24;
  if ((0 < local_18) && (local_24 != (undefined4 *)0x0)) {
    local_14 = &local_24;
    uVar5 = FUN_00447770(&local_14);
    if (uVar5 < (uint)puVar4[0xb]) {
      FUN_00410320(uVar5);
    }
  }
  FID_conflict__free(local_20);
  if (local_24 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_24 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_24)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

