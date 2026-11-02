// rea decompile_all
// name: FUN_00687700
// address: 0x687700
// body: available
// range: 0x687700-0x687790 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00687700(void)

{
  uint uVar1;
  longlong lVar2;
  undefined4 local_1c;
  undefined4 local_18;
  ushort local_14;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = GetMessageTime();
  lVar2 = CONCAT44(DAT_00c8ab1c,DAT_00c8ab18);
  if (((int)uVar1 < (int)DAT_00c8ab78) || (DAT_00c8ab78 == 0)) {
    DAT_00c8ab78 = uVar1;
    FUN_004d0a43(&local_1c);
    lVar2 = __allmul(local_1c,local_18,1000,0);
    lVar2 = (lVar2 - (int)uVar1) + (ulonglong)local_14;
  }
  DAT_00c8ab1c = (int)((ulonglong)lVar2 >> 0x20);
  DAT_00c8ab18 = (uint)lVar2;
  __security_check_cookie
            (local_8 ^ (uint)&stack0xfffffffc,
             ((int)uVar1 >> 0x1f) + DAT_00c8ab1c + (uint)CARRY4(uVar1,DAT_00c8ab18));
  return;
}

