// rea decompile_all
// name: FUN_0061e540
// address: 0x61e540
// body: available
// range: 0x61e540-0x61e60d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061e540(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined1 local_d;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)local_34;
  local_30 = 0;
  lVar2 = FUN_006f55df();
  uVar3 = extraout_ECX;
  if (lVar2 < 0) {
    iVar1 = FUN_006104e0(-(int)lVar2,-((int)((ulonglong)lVar2 >> 0x20) + (uint)((int)lVar2 != 0)),
                         extraout_ECX);
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104e0(lVar2,extraout_ECX);
  }
  FUN_004557e0(&local_d + -iVar1);
  FUN_006377c0(uVar3);
  __security_check_cookie(local_c ^ (uint)local_34);
  return;
}

