// rea decompile_all
// name: FUN_005cdce0
// address: 0x5cdce0
// body: available
// range: 0x5cdce0-0x5cde07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cdce0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  void *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071b209;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[9] == 0) {
    local_1c = (void *)0x0;
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    (**(code **)(*in_ECX + 4))(&local_1c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar3 = 0;
    if (0 < local_14) {
      do {
        FUN_005cd980(*(undefined4 *)((int)local_1c + iVar3 * 4));
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
    if (local_18 != 0) {
      FID_conflict__free(local_1c);
      local_1c = (void *)0x0;
      local_18 = 0;
    }
    local_14 = 0;
    if ((0 < in_ECX[9]) && (iVar3 = *(int *)in_ECX[7], iVar3 != 0)) {
      piVar2 = (int *)(*(int *)(iVar3 + 4) + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = in_ECX[0x2c];
      in_ECX[0x2c] = *(int *)(iVar3 + 4);
      UNLOCK();
      piVar2 = (int *)(iVar1 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar2);
        }
      }
      while (0 < local_14) {
        local_14 = local_14 + -1;
        piVar2 = *(int **)((int)local_1c + local_14 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x18))(1);
        }
      }
    }
    FID_conflict__free(local_1c);
  }
  ExceptionList = local_10;
  return;
}

