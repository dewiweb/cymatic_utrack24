// rea decompile_all
// name: ___acrt_is_packaged_app
// address: 0x4d7bff
// body: available
// range: 0x4d7bff-0x4d7c85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_is_packaged_app
   
   Library: Visual Studio 2015 Release */

void ___acrt_is_packaged_app(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 in_ECX;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_c = in_ECX;
  if (DAT_00c8a344 == 0) {
    pcVar1 = try_get_function(8,"GetCurrentPackageId",(module_id *)&DAT_00732300,
                              (module_id *)&DAT_00732308);
    if (pcVar1 != (code *)0x0) {
      local_c = 0;
      guard_check_icall(&local_c,0);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0x7a) {
        LOCK();
        DAT_00c8a344 = 1;
        UNLOCK();
        goto LAB_004d7c78;
      }
    }
    LOCK();
    DAT_00c8a344 = 2;
    UNLOCK();
  }
LAB_004d7c78:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

