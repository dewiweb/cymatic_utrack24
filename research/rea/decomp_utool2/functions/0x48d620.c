// rea decompile_all
// name: FUN_0048d620
// address: 0x48d620
// body: available
// range: 0x48d620-0x48d71d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d620(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 in_ECX;
  uint in_EDX;
  uint uVar3;
  char *pcVar4;
  char local_48 [32];
  undefined4 local_28;
  undefined2 local_24;
  char local_22 [26];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  pcVar2 = local_48;
  do {
    uVar3 = in_EDX >> 4;
    *pcVar2 = "0123456789abcdef"[in_EDX & 0xf];
    pcVar2 = pcVar2 + 1;
    in_EDX = uVar3;
  } while (uVar3 != 0);
  pcVar4 = local_22;
  local_28 = 0x6c63636a;
  local_24 = 0x5f72;
  if (local_48 < pcVar2) {
    do {
      pcVar1 = pcVar2 + -1;
      pcVar2 = pcVar2 + -1;
      *pcVar4 = *pcVar1;
      pcVar4 = pcVar4 + 1;
    } while (local_48 < pcVar2);
  }
  *pcVar4 = '\0';
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) {
    FUN_004c0391(&DAT_00cfff24);
    if (DAT_00cfff24 == -1) {
      DAT_00cfff50 = 0;
      _DAT_00cfff54 = 0;
      _DAT_00cfff58 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
      _DAT_00cfff74 = 0;
      _atexit((_func_4879 *)&LAB_0072a350);
      FUN_004c0352(&DAT_00cfff24);
    }
  }
  FUN_0061fa00(in_ECX,&local_28);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

