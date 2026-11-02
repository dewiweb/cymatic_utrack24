// rea decompile_all
// name: FUN_0045d120
// address: 0x45d120
// body: available
// range: 0x45d120-0x45d1d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045d120(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *in_ECX;
  char *pcVar4;
  int in_EDX;
  int iVar5;
  int local_20;
  undefined4 local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_EDX < 0) {
    iVar3 = FUN_006104a0();
    *(undefined1 *)(iVar3 + -1) = 0x2d;
    iVar3 = iVar3 + -1;
  }
  else {
    iVar3 = FUN_006104a0();
  }
  iVar5 = (int)&local_8 - iVar3;
  if (0 < iVar5) {
    pcVar2 = (char *)*in_ECX;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00455850(pcVar2);
    *in_ECX = local_20;
    FUN_004c2c30(pcVar4 + (local_20 - (int)(pcVar2 + 1)),iVar3,iVar5);
    (pcVar4 + (local_20 - (int)(pcVar2 + 1)))[iVar5] = '\0';
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

