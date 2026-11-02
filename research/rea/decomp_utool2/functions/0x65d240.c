// rea decompile_all
// name: FUN_0065d240
// address: 0x65d240
// body: available
// range: 0x65d240-0x65d2ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065d240(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_3;
  iVar3 = param_1[1];
  uVar2 = (uint)(0x3b9ac9f0 / (ulonglong)param_3);
  if (uVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  param_3 = param_4;
  if ((int)uVar2 < (int)param_4) {
    param_3 = uVar2;
  }
  *(uint *)(iVar3 + 0x50) = param_3;
  iVar3 = FUN_0065d3c0(param_1,param_2,param_4 << 2);
  uVar2 = 0;
  if (param_4 != 0) {
    do {
      uVar5 = param_4 - uVar2;
      if (param_3 < param_4 - uVar2) {
        uVar5 = param_3;
      }
      iVar4 = FUN_0065d2f0(param_1,param_2,uVar5 * uVar1);
      for (uVar6 = uVar5; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(int *)(iVar3 + uVar2 * 4) = iVar4;
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + uVar1;
      }
      param_3 = uVar5;
    } while (uVar2 < param_4);
  }
  return iVar3;
}

