// rea decompile_all
// name: FUN_006ac880
// address: 0x6ac880
// body: available
// range: 0x6ac880-0x6ac977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac880(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = in_ECX;
  FUN_006e6400(&local_20);
  local_30 = *(undefined4 *)(in_ECX + 0x88);
  local_2c = local_30;
  local_28 = local_30;
  local_24 = local_30;
  puVar2 = (undefined4 *)
           FUN_006ad060(&local_30,*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x8c),
                        *(undefined4 *)(in_ECX + 0x84));
  FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  local_40 = *(undefined4 *)(in_ECX + 0x8c);
  local_3c = local_40;
  local_38 = local_40;
  local_34 = local_40;
  uVar3 = FUN_004107c0(local_60,&local_20);
  puVar2 = (undefined4 *)FUN_004107c0(local_70,uVar3);
  local_18 = puVar2[2];
  uVar3 = *puVar2;
  uVar5 = puVar2[1];
  local_14 = puVar2[3];
  iVar1 = *(int *)(local_10 + 0x7c);
  local_c = local_18;
  local_20 = uVar3;
  local_1c = uVar5;
  local_8 = local_14;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    iVar4 = *(int *)(*(int *)(local_10 + 0x74) + iVar1 * 4);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 8);
      uVar5 = local_1c;
      uVar3 = local_20;
      local_c = local_18;
      local_8 = local_14;
    }
    if (iVar4 != 0) {
      FUN_006e9790(uVar3,uVar5,local_c,local_8);
    }
  }
  return;
}

