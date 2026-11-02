// rea decompile_all
// name: FUN_00434c90
// address: 0x434c90
// body: available
// range: 0x434c90-0x434d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00434c90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *in_ECX;
  int iVar3;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_2;
  FUN_00411870(param_2);
  iVar3 = 0;
  if (3 < param_2) {
    do {
      iVar1 = iVar3 * 8;
      if ((undefined8 *)(*in_ECX + iVar1) != (undefined8 *)0x0) {
        *(undefined8 *)(*in_ECX + iVar1) = (&DAT_00c145c0)[iVar3];
      }
      puVar2 = (undefined8 *)(*in_ECX + 8 + iVar1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = (&DAT_00c145c8)[iVar3];
      }
      puVar2 = (undefined8 *)(iVar1 + 0x10 + *in_ECX);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = (&DAT_00c145d0)[iVar3];
      }
      puVar2 = (undefined8 *)(iVar1 + 0x18 + *in_ECX);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = (&DAT_00c145d8)[iVar3];
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < param_2 + -3);
  }
  for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
    puVar2 = (undefined8 *)(*in_ECX + iVar3 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = (&DAT_00c145c0)[iVar3];
    }
  }
  return;
}

