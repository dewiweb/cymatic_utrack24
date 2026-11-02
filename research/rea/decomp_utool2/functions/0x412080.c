// rea decompile_all
// name: FUN_00412080
// address: 0x412080
// body: available
// range: 0x412080-0x41210e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00412080(uint param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)(param_1 - 1) / 2;
  while (in_EDX < iVar5) {
    iVar1 = in_EDX * 2 + 2;
    dVar2 = *(double *)(in_ECX + iVar1 * 8);
    dVar3 = *(double *)(in_ECX + -8 + iVar1 * 8);
    if (dVar3 <= dVar2) {
      uVar4 = (uint)(dVar3 < dVar2);
    }
    else {
      uVar4 = 0xffffffff;
    }
    iVar6 = in_EDX * 2 + 1;
    if (-1 < (int)uVar4) {
      iVar6 = iVar1;
    }
    *(undefined8 *)(in_ECX + in_EDX * 8) = *(undefined8 *)(in_ECX + iVar6 * 8);
    in_EDX = iVar6;
  }
  if ((in_EDX == iVar5) && ((param_1 & 1) == 0)) {
    *(undefined8 *)(in_ECX + in_EDX * 8) = *(undefined8 *)(in_ECX + -8 + param_1 * 8);
  }
  FUN_00412110();
  return;
}

