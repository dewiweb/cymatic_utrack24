// rea decompile_all
// name: FUN_004b2da0
// address: 0x4b2da0
// body: available
// range: 0x4b2da0-0x4b2e9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int in_EDX;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [20];
  
  if (*(int *)(in_EDX + 0x24) != 0) {
    local_40 = local_30;
    local_44 = (undefined1 *)0x4b2dbd;
    local_40 = (undefined1 *)FUN_0067df10();
    local_44 = local_18;
    local_48 = 0x4b2dca;
    puVar3 = (undefined4 *)FUN_004744d0();
    param_1 = *puVar3;
    param_2 = puVar3[1];
    param_3 = puVar3[2];
    param_4 = puVar3[3];
  }
  if ((*(byte *)(in_EDX + 0x68) & 1) == 0) {
    local_48 = param_2;
    local_44 = (undefined1 *)param_3;
    local_40 = (undefined1 *)param_4;
    local_4c = param_1;
    puVar3 = (undefined4 *)FUN_0048d5e0();
  }
  else {
    local_40 = (undefined1 *)0x4b2df3;
    piVar4 = (int *)FUN_006d1d80();
    if (piVar4 == (int *)0x0) {
      *in_ECX = param_1;
      in_ECX[1] = param_2;
      in_ECX[3] = param_4;
      in_ECX[2] = param_3;
      return;
    }
    local_4c = param_1;
    local_48 = param_2;
    local_44 = (undefined1 *)param_3;
    local_40 = (undefined1 *)param_4;
    uVar5 = FUN_004b3600();
    (**(code **)(*piVar4 + 0x28))(&local_4c,uVar5);
    puVar3 = (undefined4 *)FUN_004b2810();
  }
  uVar5 = puVar3[1];
  uVar1 = puVar3[2];
  uVar2 = puVar3[3];
  *in_ECX = *puVar3;
  in_ECX[1] = uVar5;
  in_ECX[2] = uVar1;
  in_ECX[3] = uVar2;
  return;
}

