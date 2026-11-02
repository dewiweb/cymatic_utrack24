// rea decompile_all
// name: FUN_006a9110
// address: 0x6a9110
// body: available
// range: 0x6a9110-0x6a91c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a9110(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  int local_14;
  
  iVar1 = param_5;
  local_14 = 0;
  uStack_18 = 0;
  FUN_006e8e70(auStack_1c,0x1000700,0);
  uVar3 = 0x6a913b;
  FUN_006ab370();
  if ((*(byte *)(iVar1 + 0x69) & 0x10) == 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      local_14 = 0x6a9150;
      cVar2 = FUN_006e6320();
      if (cVar2 == '\0') goto LAB_006a91ab;
    }
    FUN_006a6860(param_1,(float)param_2 + 8.0,(float)param_3,0,&param_5,0x3ecccccd,uVar3);
    return;
  }
LAB_006a91ab:
  local_14 = param_5;
  uStack_18 = 0x6a91bb;
  FUN_00684a80();
  return;
}

