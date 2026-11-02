// rea decompile_all
// name: FUN_0053f150
// address: 0x53f150
// body: available
// range: 0x53f150-0x53f276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0053f150(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 uVar4;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070e4e9;
  local_10 = ExceptionList;
  if (*(undefined **)(in_ECX + 0xc) == PTR_DAT_00c7ed54) {
    return 0;
  }
  ExceptionList = &local_10;
  iVar2 = FUN_0045c1e0(*(undefined4 *)(in_ECX + 0xc));
  if (iVar2 != 0) {
    piVar3 = (int *)(*(int *)(in_ECX + 0xc) + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    cVar1 = FUN_005b5020();
    if (cVar1 != '\0') {
      if (*(int *)(in_ECX + 0x10) == 0) {
        FUN_00636970();
        if ((*(int *)(in_ECX + 0x18) == local_1c) && (*(int *)(in_ECX + 0x1c) == local_18)) {
          ExceptionList = local_10;
          return 1;
        }
        *(undefined4 *)(in_ECX + 0x18) = 0;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
      }
      FUN_0053f050();
      local_8 = 0;
      if ((local_14 == (undefined4 *)0x0) || (cVar1 = FUN_00548d30(), cVar1 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_14 + 1;
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_14)();
        }
      }
      ExceptionList = local_10;
      return uVar4;
    }
    ExceptionList = local_10;
    return 0;
  }
  ExceptionList = local_10;
  return 0;
}

