// rea decompile_all
// name: FUN_00418090
// address: 0x418090
// body: available
// range: 0x418090-0x418131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418090(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  
  iVar3 = (int)(param_1 - 1) / 2;
  iVar2 = in_EDX;
  while (iVar2 < iVar3) {
    iVar4 = *(int *)(in_ECX + 8 + iVar2 * 8);
    iVar5 = iVar2 * 2 + 2;
    iVar1 = *(int *)(in_ECX + -4 + iVar5 * 4);
    if (iVar1 != 0) {
      LOCK();
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      UNLOCK();
    }
    if (iVar4 != 0) {
      LOCK();
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      UNLOCK();
    }
    iVar4 = FUN_004175e0(iVar4,iVar1);
    if (iVar4 < 0) {
      iVar5 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(in_ECX + iVar2 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
    iVar2 = iVar5;
  }
  if ((iVar2 == iVar3) && ((param_1 & 1) == 0)) {
    *(undefined4 *)(in_ECX + iVar2 * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
  }
  FUN_004181e0(in_EDX,param_2,param_1);
  return;
}

