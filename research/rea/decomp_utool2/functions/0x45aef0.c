// rea decompile_all
// name: FUN_0045aef0
// address: 0x45aef0
// body: available
// range: 0x45aef0-0x45af6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045aef0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte *param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  do {
    if (param_6 == 0) {
      *param_2 = param_3;
      param_2[1] = param_4;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_0045af48:
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *param_5;
      if (*(int *)param_4[8] == 0) {
LAB_0045af31:
        if (*(code **)(*param_4 + 0xc) == FUN_00452080) goto LAB_0045af48;
        uVar4 = (**(code **)(*param_4 + 0xc))(bVar1);
      }
      else {
        iVar2 = *(int *)param_4[0xc];
        if (iVar2 < 1) goto LAB_0045af31;
        *(int *)param_4[0xc] = iVar2 + -1;
        pbVar3 = *(byte **)param_4[8];
        *(byte **)param_4[8] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_0045af48;
    }
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while( true );
}

