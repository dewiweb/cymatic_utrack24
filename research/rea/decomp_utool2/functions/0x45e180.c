// rea decompile_all
// name: FUN_0045e180
// address: 0x45e180
// body: available
// range: 0x45e180-0x45e200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045e180(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int local_8;
  
  local_8 = 0;
  pbVar3 = param_2;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (bVar1 != 0);
  do {
    pbVar4 = pbVar3 + (-1 - (int)(param_2 + 1));
    pbVar5 = param_2;
    if ((int)(pbVar3 + (-1 - (int)(param_2 + 1))) < 0) {
      return local_8;
    }
    while( true ) {
      iVar2 = FUN_00443260();
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      if ((iVar2 - (uint)bVar1 != 0) &&
         (((int)(iVar2 - (uint)bVar1) >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
      if (iVar2 == 0) {
        return local_8;
      }
      pbVar4 = pbVar4 + -1;
      if ((int)pbVar4 < 0) {
        return local_8;
      }
    }
    iVar2 = FUN_00443260();
    if (iVar2 == 0) {
      return -1;
    }
    local_8 = local_8 + 1;
  } while( true );
}

