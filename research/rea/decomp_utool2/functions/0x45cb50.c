// rea decompile_all
// name: FUN_0045cb50
// address: 0x45cb50
// body: available
// range: 0x45cb50-0x45cbc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045cb50(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *in_ECX;
  uint uVar6;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar3 = FUN_0045d1e0(param_1);
    uVar6 = iVar3 + 4U & 0xfffffffc;
    puVar4 = (undefined4 *)FUN_004bfe22(uVar6 + 0xb);
    *puVar4 = 0;
    pcVar1 = (char *)(puVar4 + 2);
    puVar4[1] = uVar6;
    cVar2 = *param_1;
    *pcVar1 = cVar2;
    if (cVar2 != '\0') {
      pcVar5 = pcVar1;
      do {
        cVar2 = pcVar5[(int)(param_1 + (1 - (int)pcVar1))];
        pcVar5 = pcVar5 + 1;
        *pcVar5 = cVar2;
      } while (cVar2 != '\0');
    }
    *in_ECX = pcVar1;
    return;
  }
  *in_ECX = &DAT_00bfe12c;
  return;
}

