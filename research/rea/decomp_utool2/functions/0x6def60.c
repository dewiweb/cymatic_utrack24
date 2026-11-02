// rea decompile_all
// name: FUN_006def60
// address: 0x6def60
// body: available
// range: 0x6def60-0x6defe4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_006def60(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  uint *extraout_EDX;
  
  cVar2 = FUN_006ab990();
  if (((*(byte *)(in_ECX + 0x178) & 2) != 0) && (cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x006def93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(int *)(in_ECX + 0x110) + 0x6c))();
    return uVar3;
  }
  uVar3 = *extraout_EDX;
  if (((uVar3 == 0x10025) && ((extraout_EDX[1] & 7) == 0)) ||
     ((uVar3 == 0x10027 && ((extraout_EDX[1] & 7) == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((*(byte *)(in_ECX + 0x278) & 2) != 0) && ((cVar2 != '\0' || (bVar1)))) {
                    /* WARNING: Could not recover jumptable at 0x006defdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*(int *)(in_ECX + 0x210) + 0x6c))();
    return uVar3;
  }
  return uVar3 & 0xffffff00;
}

