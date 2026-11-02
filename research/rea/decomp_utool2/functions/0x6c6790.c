// rea decompile_all
// name: FUN_006c6790
// address: 0x6c6790
// body: available
// range: 0x6c6790-0x6c6986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6790(undefined4 *param_1,uint param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  if (((*(byte *)(in_ECX + 0x69) & 0x10) == 0) &&
     ((*(int *)(in_ECX + 0xc) == 0 || (cVar2 = FUN_006e6320(), cVar2 != '\0')))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_8 = 0;
  if (bVar1) {
    local_8 = param_2 & 0xff;
  }
  cVar2 = '\0';
  if (bVar1) {
    cVar2 = param_3;
  }
  puVar4 = &local_18;
  puVar7 = local_28;
  uVar3 = FUN_006e6400(local_38);
  FUN_004107c0(local_48,uVar3);
  FUN_0040e4d0(puVar7);
  FUN_0046fb70(puVar4);
  if (*(int *)(in_ECX + 0x3c) != 0) {
    puVar4 = (undefined4 *)FUN_0046fb70(local_48);
    local_18 = *puVar4;
    local_14 = puVar4[1];
    local_10 = puVar4[2];
    local_c = puVar4[3];
  }
  uVar3 = local_10;
  uVar6 = local_c;
  if (cVar2 != '\0') {
    iVar5 = FUN_00418cd0(local_48);
    uVar3 = *(undefined4 *)(iVar5 + 8);
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
  }
  FUN_0067fe30(local_60,uVar3,uVar6,*(undefined1 *)(in_ECX + 0x134),0x24);
  if (cVar2 == '\0') {
    iVar5 = (uint)((char)local_8 != '\0') * 4 + 0xe0;
  }
  else {
    iVar5 = 0xe8;
  }
  FUN_00684c50(*(undefined4 *)(iVar5 + in_ECX));
  cVar2 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = FUN_00682580(), cVar2 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))(in_ECX + 0x104,local_60);
  }
  if (0.0 < *(float *)(in_ECX + 0x138)) {
    FUN_00684c50(*(undefined4 *)(in_ECX + 0xec));
    local_14 = *(undefined4 *)(in_ECX + 0x138);
    local_10 = 0;
    local_c = 0;
    FUN_00682be0(in_ECX + 0x104,&local_14,local_60);
  }
  return;
}

