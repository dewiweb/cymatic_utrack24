// rea decompile_all
// name: FUN_004165b0
// address: 0x4165b0
// body: available
// range: 0x4165b0-0x416609 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004165b0(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int in_ECX;
  
  puVar1 = *(uint **)(*(int *)(in_ECX + 4) +
                     ((int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) %
                     *(int *)(in_ECX + 0xc)) * 4);
  while( true ) {
    if (puVar1 == (uint *)0x0) {
      *param_1 = 0;
      return;
    }
    if ((*puVar1 == param_2) && (puVar1[1] == param_3)) break;
    puVar1 = (uint *)puVar1[3];
  }
  uVar2 = puVar1[2];
  *param_1 = uVar2;
  if (uVar2 == 0) {
    return;
  }
  LOCK();
  *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
  UNLOCK();
  return;
}

