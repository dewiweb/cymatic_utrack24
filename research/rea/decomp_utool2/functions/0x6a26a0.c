// rea decompile_all
// name: FUN_006a26a0
// address: 0x6a26a0
// body: available
// range: 0x6a26a0-0x6a27a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a26a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  undefined4 *puStack_34;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puStack_34 = &local_14;
  local_38 = (undefined4 *)0x6a26b7;
  FUN_006e6400();
  local_38 = &puStack_34;
  uStack_3c = 0x6a26cb;
  FUN_006842b0();
  local_38 = (undefined4 *)0x6a26d5;
  FUN_00684c50();
  puStack_34 = (undefined4 *)0x1;
  local_38 = &local_24;
  uStack_3c = 0x6a26e3;
  FUN_00418d70();
  local_38 = &local_24;
  puStack_34 = (undefined4 *)0x0;
  uStack_3c = 0x6a26f0;
  (**(code **)(*(int *)*param_1 + 0x54))();
  puStack_40 = &uStack_3c;
  uStack_44 = 0x6a2704;
  FUN_006842b0();
  puStack_40 = (undefined4 *)0x6a270b;
  FUN_00684c50();
  puStack_40 = &local_24;
  uStack_3c = 0;
  local_24 = local_14;
  uStack_20 = uStack_10;
  uStack_1c = uStack_c;
  uStack_18 = uStack_8;
  uStack_44 = 0x6a2720;
  (**(code **)(*(int *)*param_1 + 0x54))();
  FUN_006842b0(&uStack_44);
  FUN_00684c50();
  iVar4 = 0;
  iVar2 = *(int *)(param_2 + 0x80) + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(*(int *)(param_2 + 0x78) + iVar2 * 4);
    iVar5 = iVar4;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + -1;
      iVar4 = iVar5 + 1;
      if ((*(byte *)(iVar1 + 8) & 1) == 0) {
        iVar4 = iVar5;
      }
      iVar2 = iVar2 + -1;
      iVar5 = iVar4;
    } while (-1 < iVar2);
  }
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    uStack_44 = 1;
    puVar6 = &local_24;
    FUN_006d7870(&local_14,iVar4);
    FUN_0040dcd0(puVar6);
    uStack_44 = 0;
    (**(code **)(*(int *)*param_1 + 0x54))(&local_24);
  }
  return;
}

