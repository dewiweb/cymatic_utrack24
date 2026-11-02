// rea decompile_all
// name: FUN_0063dec0
// address: 0x63dec0
// body: available
// range: 0x63dec0-0x63df58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0063dec0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  int local_8;
  
  iVar1 = in_ECX[3];
  if (iVar1 != 0) {
    if (DAT_00c8a658 == (int *)0x0) {
      operator_new(0x28);
      DAT_00c8a658 = (int *)FUN_0063dab0();
      FUN_0063c010();
    }
    iVar2 = *DAT_00c8a658;
    if (iVar2 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x14));
      local_8 = iVar1;
      uVar4 = FUN_00447770(&local_8);
      if (uVar4 < *(uint *)(iVar2 + 0x10)) {
        FUN_00410320(uVar4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x14));
    }
  }
  (**(code **)(*in_ECX + 0x14))();
  puVar3 = (undefined4 *)in_ECX[3];
  if (puVar3 != (undefined4 *)0x0) {
    in_ECX[3] = 0;
    (**(code **)*puVar3)(1);
  }
  return in_ECX[1];
}

