// rea decompile_all
// name: FUN_0065d190
// address: 0x65d190
// body: available
// range: 0x65d190-0x65d23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065d190(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  iVar2 = param_1[1];
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  local_8 = param_4;
  if ((int)uVar1 < (int)param_4) {
    local_8 = uVar1;
  }
  *(uint *)(iVar2 + 0x50) = local_8;
  iVar2 = FUN_0065d3c0(param_1,param_2,param_4 << 2);
  uVar1 = 0;
  if (param_4 != 0) {
    do {
      uVar4 = param_4 - uVar1;
      if (local_8 < param_4 - uVar1) {
        uVar4 = local_8;
      }
      iVar3 = FUN_0065d2f0(param_1,param_2,uVar4 * param_3 * 0x80);
      for (uVar5 = uVar4; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(int *)(iVar2 + uVar1 * 4) = iVar3;
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + param_3 * 0x80;
      }
      local_8 = uVar4;
    } while (uVar1 < param_4);
  }
  return iVar2;
}

