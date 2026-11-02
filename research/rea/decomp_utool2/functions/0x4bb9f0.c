// rea decompile_all
// name: FUN_004bb9f0
// address: 0x4bb9f0
// body: available
// range: 0x4bb9f0-0x4bba7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bb9f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int in_EDX;
  int iVar4;
  
  FID_conflict__free((void *)*in_ECX);
  iVar2 = FUN_004c554b(param_2 * param_3 * 4);
  *in_ECX = iVar2;
  if (0 < param_3) {
    iVar2 = (param_3 * 4 + -4) * param_2;
    do {
      iVar1 = *in_ECX;
      if (0 < param_2) {
        puVar3 = (undefined4 *)(iVar1 + iVar2);
        iVar4 = param_2;
        do {
          *puVar3 = *(undefined4 *)((in_EDX - (iVar1 + iVar2)) + (int)puVar3);
          iVar4 = iVar4 + -1;
          puVar3 = puVar3 + 1;
        } while (iVar4 != 0);
      }
      in_EDX = in_EDX + param_1;
      iVar2 = iVar2 + param_2 * -4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

