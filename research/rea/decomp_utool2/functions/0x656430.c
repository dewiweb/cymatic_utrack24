// rea decompile_all
// name: FUN_00656430
// address: 0x656430
// body: available
// range: 0x656430-0x65652e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00656430(undefined4 param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  char *in_ECX;
  int in_EDX;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int local_8;
  
  iVar3 = 0;
  pcVar4 = (char *)(in_EDX + -1);
  bVar1 = false;
  local_8 = 1;
  bVar2 = false;
  *pcVar4 = '\0';
  if (pcVar4 <= in_ECX) {
    return pcVar4;
  }
  do {
    if ((param_2 == 0) && (local_8 <= iVar3)) {
      return pcVar4;
    }
    switch(param_1) {
    case 2:
      local_8 = 2;
    case 1:
      pcVar4 = pcVar4 + -1;
      uVar5 = param_2 / 10;
      *pcVar4 = "0123456789ABCDEF"[param_2 % 10];
      bVar1 = bVar2;
      break;
    case 4:
      local_8 = 2;
    case 3:
      pcVar4 = pcVar4 + -1;
      uVar5 = param_2 >> 4;
      *pcVar4 = "0123456789ABCDEF"[param_2 & 0xf];
      break;
    case 5:
      local_8 = 5;
      if ((bVar1) || (param_2 != (param_2 / 10) * 10)) {
        bVar2 = true;
        pcVar4 = pcVar4 + -1;
        *pcVar4 = "0123456789ABCDEF"[param_2 % 10];
      }
      uVar5 = param_2 / 10;
      bVar1 = bVar2;
      break;
    default:
      uVar5 = 0;
    }
    iVar3 = iVar3 + 1;
    param_2 = uVar5;
  } while (in_ECX < pcVar4);
  return pcVar4;
}

