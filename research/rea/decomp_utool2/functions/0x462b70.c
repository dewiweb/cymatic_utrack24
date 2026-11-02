// rea decompile_all
// name: FUN_00462b70
// address: 0x462b70
// body: available
// range: 0x462b70-0x462c5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00462b70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  void *local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00700dc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 == 1) {
    FUN_00462c60(FUN_00426f1d,param_2);
    ExceptionList = local_10;
    return;
  }
  if (0 < iVar1) {
    FUN_0040ec60(in_ECX + 0x24);
    iVar4 = 0;
    local_8 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)((int)local_28 + iVar4 * 4);
        local_14 = iVar2;
        if ((iVar4 == 0) || (iVar3 = FUN_00447770(&local_14), -1 < iVar3)) {
          iVar3 = *(int *)(iVar2 + 0xc);
          while (0 < iVar3) {
            iVar3 = iVar3 + -1;
            if ((*(int *)(iVar2 + 0xc) <= iVar3) && (iVar3 = *(int *)(iVar2 + 0xc) + -1, iVar3 < 0))
            break;
            FUN_00426f1d(param_2);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FID_conflict__free(local_28);
  }
  ExceptionList = local_10;
  return;
}

