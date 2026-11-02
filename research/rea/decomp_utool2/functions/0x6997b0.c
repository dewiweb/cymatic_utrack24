// rea decompile_all
// name: FUN_006997b0
// address: 0x6997b0
// body: available
// range: 0x6997b0-0x6998eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00699877) */
/* WARNING: Removing unreachable block (ram,0x00699883) */

void FUN_006997b0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined1 *local_18;
  undefined2 local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0072209a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = &DAT_00bfe12c;
  local_8 = 0;
  if (*(char *)(in_ECX + 0x98) == '\0') {
    piVar2 = (int *)(*(int *)(in_ECX + 0x9c) + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_18 = *(undefined1 **)(in_ECX + 0x9c);
    LOCK();
    UNLOCK();
  }
  else if ((0.0 <= *(double *)(in_ECX + 0x90)) && (*(double *)(in_ECX + 0x90) <= 1.0)) {
    FUN_0045d120(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    local_14[0] = 0x25;
    FUN_00621830(local_14);
  }
  iVar1 = FUN_006e9580();
  (**(code **)(*(int *)(iVar1 + 0x5c) + 4))(param_1);
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return;
}

