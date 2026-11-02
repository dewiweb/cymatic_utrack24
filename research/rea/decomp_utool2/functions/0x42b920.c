// rea decompile_all
// name: FUN_0042b920
// address: 0x42b920
// body: available
// range: 0x42b920-0x42bba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b920(void)

{
  void **ppvVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fdc30;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = (void *)0x0;
  local_3c = 0;
  local_38 = 0;
  local_34 = (void *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 3;
  FUN_0042b580(&local_40,&local_34,&local_28,&local_1c);
  ppvVar1 = (void **)(in_ECX + 0x1c);
  cVar5 = FUN_0045d570(ppvVar1);
  if (cVar5 != '\0') {
    cVar5 = FUN_0045d570(in_ECX + 0x34);
    if (cVar5 != '\0') {
      cVar5 = FUN_0045d570(in_ECX + 0x28);
      if (cVar5 != '\0') {
        cVar5 = FUN_0045d570(in_ECX + 0x40);
        if (cVar5 != '\0') goto LAB_0042bb1e;
      }
    }
  }
  *(undefined1 *)(in_ECX + 0x4d) = 1;
  if (ppvVar1 != &local_40) {
    FUN_0041b050(&local_40);
    pvVar2 = *ppvVar1;
    *ppvVar1 = local_4c;
    uVar3 = *(undefined4 *)(in_ECX + 0x20);
    *(undefined4 *)(in_ECX + 0x20) = local_48;
    uVar4 = *(undefined4 *)(in_ECX + 0x24);
    *(undefined4 *)(in_ECX + 0x24) = local_44;
    FUN_0040f7f0(uVar6);
    FID_conflict__free(pvVar2);
    local_4c = pvVar2;
    local_48 = uVar3;
    local_44 = uVar4;
  }
  ppvVar1 = (void **)(in_ECX + 0x34);
  if (ppvVar1 != &local_34) {
    FUN_0041b050(&local_34);
    pvVar2 = *ppvVar1;
    *ppvVar1 = local_4c;
    uVar3 = *(undefined4 *)(in_ECX + 0x38);
    *(undefined4 *)(in_ECX + 0x38) = local_48;
    uVar4 = *(undefined4 *)(in_ECX + 0x3c);
    *(undefined4 *)(in_ECX + 0x3c) = local_44;
    FUN_0040f7f0();
    FID_conflict__free(pvVar2);
    local_4c = pvVar2;
    local_48 = uVar3;
    local_44 = uVar4;
  }
  ppvVar1 = (void **)(in_ECX + 0x28);
  if (ppvVar1 != &local_28) {
    FUN_0041b050(&local_28);
    pvVar2 = *ppvVar1;
    *ppvVar1 = local_4c;
    uVar3 = *(undefined4 *)(in_ECX + 0x2c);
    *(undefined4 *)(in_ECX + 0x2c) = local_48;
    uVar4 = *(undefined4 *)(in_ECX + 0x30);
    *(undefined4 *)(in_ECX + 0x30) = local_44;
    FUN_0040f7f0();
    FID_conflict__free(pvVar2);
    local_4c = pvVar2;
    local_48 = uVar3;
    local_44 = uVar4;
  }
  ppvVar1 = (void **)(in_ECX + 0x40);
  if (ppvVar1 != &local_1c) {
    FUN_0041b050(&local_1c);
    pvVar2 = *ppvVar1;
    *ppvVar1 = local_4c;
    *(undefined4 *)(in_ECX + 0x44) = local_48;
    *(undefined4 *)(in_ECX + 0x48) = local_44;
    FUN_0040f7f0();
    FID_conflict__free(pvVar2);
  }
LAB_0042bb1e:
  iVar7 = *(int *)(in_ECX + -4);
  while (0 < iVar7) {
    iVar7 = iVar7 + -1;
    if ((*(int *)(in_ECX + -4) <= iVar7) && (iVar7 = *(int *)(in_ECX + -4) + -1, iVar7 < 0)) break;
    FUN_00410536();
  }
  FUN_0040f7f0();
  FID_conflict__free(local_1c);
  FUN_0040f7f0();
  FID_conflict__free(local_28);
  FUN_0040f7f0();
  FID_conflict__free(local_34);
  FUN_0040f7f0();
  FID_conflict__free(local_40);
  ExceptionList = local_10;
  return;
}

