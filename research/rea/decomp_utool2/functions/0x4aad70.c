// rea decompile_all
// name: FUN_004aad70
// address: 0x4aad70
// body: available
// range: 0x4aad70-0x4aae06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004aad70(int param_1,short *param_2,uint *param_3)

{
  short *psVar1;
  SIZE_T dwBytes;
  LPVOID pvVar2;
  HGLOBAL pvVar3;
  
  psVar1 = *(short **)(param_1 + 0xc);
  if ((((*(uint *)(param_2 + 8) & *(uint *)(psVar1 + 8)) != 0) && (*param_2 == *psVar1)) &&
     (*(int *)(param_2 + 4) == *(int *)(psVar1 + 4))) {
    *param_3 = *(uint *)(psVar1 + 8);
    param_3[2] = 0;
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 1) {
      dwBytes = GlobalSize(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      pvVar2 = GlobalLock(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      pvVar3 = GlobalAlloc(0,dwBytes);
      FUN_004c2c30(pvVar3,pvVar2,dwBytes);
      GlobalUnlock(*(HGLOBAL *)(*(int *)(param_1 + 0x10) + 4));
      param_3[1] = (uint)pvVar3;
      return 0;
    }
  }
  return 0x80040064;
}

