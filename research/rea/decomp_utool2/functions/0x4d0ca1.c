// rea decompile_all
// name: FUN_004d0ca1
// address: 0x4d0ca1
// body: available
// range: 0x4d0ca1-0x4d0d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d0d1b with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d0ca1(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = ___acrt_getptd_noexit();
  if (((iVar2 == 0) || (pcVar4 = *(code **)(iVar2 + 0x35c), pcVar4 == (code *)0x0)) &&
     (bVar3 = (byte)DAT_00c76070 & 0x1f,
     pcVar4 = (code *)((DAT_00c76070 ^ _DAT_00c89fdc) >> bVar3 |
                      (DAT_00c76070 ^ _DAT_00c89fdc) << 0x20 - bVar3), pcVar4 == (code *)0x0)) {
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  guard_check_icall(param_1,param_2,param_3,param_4,param_5);
  (*pcVar4)();
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

