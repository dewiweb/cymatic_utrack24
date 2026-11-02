// rea decompile_all
// name: ___acrt_lowio_ensure_fh_exists
// address: 0x4df6cc
// body: available
// range: 0x4df6cc-0x4df757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_lowio_ensure_fh_exists
   
   Library: Visual Studio 2015 Release */

undefined4 ___acrt_lowio_ensure_fh_exists(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 < 0x2000) {
    uVar3 = 0;
    ___acrt_lock(7);
    iVar4 = 0;
    iVar2 = DAT_00c8a548;
    while (iVar2 <= (int)param_1) {
      if ((&DAT_00c8a348)[iVar4] == 0) {
        iVar2 = ___acrt_lowio_create_handle_array();
        (&DAT_00c8a348)[iVar4] = iVar2;
        if (iVar2 == 0) {
          uVar3 = 0xc;
          break;
        }
        iVar2 = DAT_00c8a548 + 0x40;
        DAT_00c8a548 = iVar2;
      }
      iVar4 = iVar4 + 1;
    }
    FUN_004df75b();
  }
  else {
    piVar1 = __errno();
    uVar3 = 9;
    *piVar1 = 9;
    FUN_004d0d1c();
  }
  return uVar3;
}

