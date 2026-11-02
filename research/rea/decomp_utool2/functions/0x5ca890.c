// rea decompile_all
// name: FUN_005ca890
// address: 0x5ca890
// body: available
// range: 0x5ca890-0x5ca98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca890(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 ***pppuVar1;
  undefined4 extraout_ECX;
  int iVar2;
  double in_XMM0_Qa;
  undefined1 auStack_34 [4];
  LARGE_INTEGER local_30;
  undefined4 **local_28 [2];
  double local_20;
  int local_18;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)auStack_34;
  FUN_005c50b0(param_3);
  QueryPerformanceCounter(&local_30);
  FUN_006f5730();
  local_20 = in_XMM0_Qa * _DAT_00c8a910 * 0.001;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10));
  pppuVar1 = local_28;
  if (4 < local_18) {
    pppuVar1 = (undefined4 ***)local_28[0];
  }
  iVar2 = (int)((local_20 - *(double *)(in_ECX + 8) * 0.001) * *(double *)(in_ECX + 0x38));
  FUN_005c6170(pppuVar1,local_18,iVar2);
  if (*(double *)(in_ECX + 0x38) < (double)iVar2) {
    FUN_005c6210(extraout_ECX,iVar2 - (int)*(double *)(in_ECX + 0x38));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10));
  if (4 < local_18) {
    FID_conflict__free(local_28[0]);
  }
  __security_check_cookie(local_c ^ (uint)auStack_34);
  return;
}

