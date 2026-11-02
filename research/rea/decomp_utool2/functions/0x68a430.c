// rea decompile_all
// name: FUN_0068a430
// address: 0x68a430
// body: available
// range: 0x68a430-0x68a5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068a430(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  int local_c;
  
  if ((((param_1 != 0) || (param_1 = FUN_0068a130(), param_1 != 0)) &&
      (0 < *(int *)(param_1 + 0x18))) && (0 < *(int *)(param_1 + 0x1c))) {
    piVar3 = (int *)FUN_006e6400(&local_3c);
    FUN_006cf960(&local_14,piVar3[2] / 2 + *piVar3,piVar3[3] / 2 + piVar3[1]);
    FUN_006cf9c0(&local_3c);
    if (*(int *)(local_c + 0xc) != 0) {
      piVar3 = (int *)FUN_006e1ae0(&local_24,0,local_14,local_10);
      iVar1 = *piVar3;
      iVar2 = piVar3[1];
      piVar3 = (int *)FUN_006e6400(&local_2c);
      local_3c = *piVar3;
      local_38 = piVar3[1];
      local_34 = piVar3[2];
      local_30 = piVar3[3];
      local_10 = iVar2;
      local_14 = iVar1;
    }
    local_20 = param_3;
    local_2c = local_14 - param_2 / 2;
    local_24 = param_2;
    local_28 = local_10 - param_3 / 2;
    uVar4 = FUN_00418f80(local_1c,0xc,0xc);
    puVar5 = (undefined4 *)FUN_00418cf0(local_4c,uVar4);
    FUN_006e9790(*puVar5,puVar5[1],puVar5[2],puVar5[3]);
    return;
  }
  FUN_0048d850();
  FUN_006e9790((local_34 / 2 - param_2 / 2) + local_3c,(local_30 / 2 - param_3 / 2) + local_38,
               param_2,param_3);
  return;
}

