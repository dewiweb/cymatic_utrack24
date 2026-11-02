// rea decompile_all
// name: FUN_006562f0
// address: 0x6562f0
// body: available
// range: 0x6562f0-0x656367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006562f0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  char local_20 [24];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = ~param_2 + 1;
  }
  pcVar2 = (char *)FUN_00656430(4,uVar1);
  if (((int)param_2 < 0) && (local_20 < pcVar2)) {
    pcVar2 = pcVar2 + -1;
    *pcVar2 = '-';
  }
  uVar1 = 0;
  iVar4 = in_ECX + 0x20;
  if (iVar4 != 0) {
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      iVar3 = iVar4 - (int)pcVar2;
      do {
        if (0x1e < uVar1) break;
        uVar1 = uVar1 + 1;
        pcVar2[iVar3] = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
    }
    *(undefined1 *)(iVar4 + uVar1) = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

