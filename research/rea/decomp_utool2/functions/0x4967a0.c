// rea decompile_all
// name: FUN_004967a0
// address: 0x4967a0
// body: available
// range: 0x4967a0-0x496864 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004967a0(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined3 uVar4;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  if (*(int *)(in_ECX + 0x98) == 0) {
    iVar2 = FUN_006e9580();
    local_c = (int *)(iVar2 + 0x20);
    local_28 = 0;
    local_14 = *(undefined4 *)(in_ECX + 0x7c);
    local_10 = 0;
    if (*(int *)(in_ECX + 0x90) != 0) {
      local_10 = in_ECX + 0x90;
    }
    iVar2 = in_ECX + 0x8c;
    local_18 = iVar2;
    if ((*(int *)(in_ECX + 0x78) == 0) ||
       ((*(int *)(in_ECX + 0x74) != 0 && (iVar2 = FUN_006df190(), iVar2 < 1)))) {
      local_8 = local_8 & 0xffffff00;
    }
    else {
      local_8 = CONCAT31(local_8._1_3_,1);
    }
    uVar4 = (undefined3)((uint)iVar2 >> 8);
    local_1c = CONCAT31(uVar4,*(undefined1 *)(in_ECX + 0x9c));
    uVar1 = *(undefined1 *)(in_ECX + 0x95);
    local_20 = CONCAT31(uVar4,*(undefined1 *)(in_ECX + 0x94));
    local_28 = CONCAT31(uVar4,*(undefined1 *)(in_ECX + 0x96));
    uVar3 = FUN_006e6400(local_38);
    (**(code **)(*local_c + 8))
              (param_1,uVar3,local_28,local_20,local_1c,uVar1,local_8,in_ECX + 0x70,local_18,
               local_14,local_10);
    return;
  }
  return;
}

