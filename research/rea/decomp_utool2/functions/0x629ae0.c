// rea decompile_all
// name: FUN_00629ae0
// address: 0x629ae0
// body: available
// range: 0x629ae0-0x629b5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629ae0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  
  *in_ECX = 0;
  in_ECX[6] = 0x1f;
  in_ECX[5] = 4;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  puVar4 = in_ECX + 1;
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*in_ECX;
  }
  iVar3 = (int)in_ECX[6] >> 5;
  while( true ) {
    if (iVar3 < 0) {
      in_ECX[6] = 0xffffffff;
      return;
    }
    uVar1 = puVar4[iVar3];
    if (uVar1 != 0) break;
    iVar3 = iVar3 + -1;
  }
  iVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  in_ECX[6] = iVar3 * 0x20 + iVar2;
  return;
}

