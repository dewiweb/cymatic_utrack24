// rea decompile_all
// name: FUN_006d7ad0
// address: 0x6d7ad0
// body: available
// range: 0x6d7ad0-0x6d7cf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d7ad0(undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 local_1c;
  
  bVar3 = false;
  FUN_006842b0();
  FUN_00684c50();
  FUN_00472db0((float)param_3);
  FUN_00684310();
  FUN_006842b0();
  FUN_00684c50();
  FUN_00472db0((float)param_3 - 2.0);
  FUN_00683310();
  iVar4 = 0;
  bVar1 = false;
  do {
    local_1c = SUB84((double)(param_4 * 7.0) + 6755399441055744.0,0);
    if (iVar4 < local_1c) {
      if (iVar4 < 6) {
        bVar3 = true;
        FUN_006842b0();
      }
      else {
        bVar1 = true;
      }
      FUN_00684c50();
      bVar2 = false;
      if (!bVar1) {
        bVar2 = bVar1;
      }
      if (bVar3) {
        bVar3 = false;
      }
    }
    else {
      FUN_006842b0();
      FUN_00684c50();
      bVar2 = bVar1;
    }
    FUN_00472db0((float)param_3 - 6.0);
    FUN_00684310();
    iVar4 = iVar4 + 1;
    bVar1 = bVar2;
  } while (iVar4 < 7);
  return;
}

