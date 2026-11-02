// rea decompile_all
// name: FUN_006474b0
// address: 0x6474b0
// body: available
// range: 0x6474b0-0x647568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006474b0(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 local_48;
  undefined1 local_47 [2];
  char acStack_45 [61];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar1 = param_1 + 1;
  pcVar3 = param_1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar4 = param_2;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if ((char *)0x40 < pcVar3 + ((int)pcVar4 - (int)(param_2 + 1)) + (2 - (int)pcVar1)) {
    FUN_006563b0();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_004c2c30(local_47,param_1,pcVar3 + (1 - (int)pcVar1));
  FUN_004c2c30(pcVar3 + (int)(local_47 + (1 - (int)pcVar1)),param_2,(int)pcVar4 - (int)(param_2 + 1)
              );
  FUN_00649680(&local_48,pcVar3 + ((int)pcVar4 - (int)(param_2 + 1)) + (2 - (int)pcVar1));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

