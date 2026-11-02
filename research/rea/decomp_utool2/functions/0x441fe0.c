// rea decompile_all
// name: FUN_00441fe0
// address: 0x441fe0
// body: available
// range: 0x441fe0-0x442072 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441fe0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined1 *puVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)in_ECX[1];
  iVar1 = *in_ECX;
  if ((param_1 == puVar3) && (4 < iVar1 * 3)) {
    param_1 = param_1 + param_2;
    iVar5 = param_2 + -1;
    if (-1 < iVar5) {
      puVar4 = (undefined1 *)((int)puVar3 + iVar1 * param_2 * 3 + 2);
      do {
        param_1 = param_1 + -1;
        puVar4 = puVar4 + iVar1 * -3;
        uVar2 = *param_1;
        *puVar4 = (char)((uint)uVar2 >> 8);
        puVar4[-2] = (char)((uint)uVar2 >> 0x18);
        iVar5 = iVar5 + -1;
        puVar4[-1] = (char)((uint)uVar2 >> 0x10);
      } while (-1 < iVar5);
    }
  }
  else {
    param_2 = param_2 + -1;
    if (-1 < param_2) {
      do {
        uVar2 = *param_1;
        *(char *)((int)puVar3 + 2) = (char)((uint)uVar2 >> 8);
        *(char *)puVar3 = (char)((uint)uVar2 >> 0x18);
        *(char *)((int)puVar3 + 1) = (char)((uint)uVar2 >> 0x10);
        puVar3 = (undefined4 *)((int)puVar3 + iVar1 * 3);
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
      } while (-1 < param_2);
    }
  }
  return;
}

