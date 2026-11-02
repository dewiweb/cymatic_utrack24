// rea decompile_all
// name: FUN_006ac980
// address: 0x6ac980
// body: available
// range: 0x6ac980-0x6acb14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac980(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  void **ppvStack_7c;
  undefined4 *puStack_78;
  uint uStack_74;
  undefined4 local_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  void *local_24;
  undefined4 local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723563;
  local_10 = ExceptionList;
  uStack_74 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  ppvStack_7c = (void **)0x0;
  FUN_006e8e70(&puStack_78);
  ppvStack_7c = (void **)0x6ac9c7;
  FUN_00684a80();
  puStack_78 = &local_34;
  ppvStack_7c = (void **)0x6ac9d2;
  FUN_006e6400();
  local_44 = *(undefined4 *)(in_ECX + 0x88);
  puStack_78 = *(undefined4 **)(in_ECX + 0x84);
  ppvStack_7c = *(void ***)(*(int *)(in_ECX + 0x70) + 0x8c);
  local_40 = local_44;
  local_3c = local_44;
  local_38 = local_44;
  FUN_006ad060();
  local_54 = local_34;
  uStack_50 = uStack_30;
  iStack_4c = iStack_2c;
  iStack_48 = iStack_28;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    puStack_78 = (undefined4 *)0x6aca1e;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  puStack_78 = &local_54;
  ppvStack_7c = (void **)0x6aca29;
  (**(code **)(*(int *)*param_1 + 0x14))();
  ppvStack_7c = *(void ***)(in_ECX + 0x70);
  FUN_006ad350(&ppvStack_7c);
  FUN_00684a80();
  if (0 < *(int *)(in_ECX + 0x88)) {
    local_24 = (void *)0x0;
    local_20 = 0;
    local_1c = 0;
    if ((0 < iStack_2c) && (0 < iStack_28)) {
      ppvStack_7c = (void **)0x8;
      FUN_0040ede0();
      iVar1 = local_1c + 1;
      puVar2 = (undefined4 *)(local_1c * 0x10 + (int)local_24);
      local_1c = iVar1;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = local_34;
        puVar2[1] = uStack_30;
        puVar2[2] = iStack_2c;
        puVar2[3] = iStack_28;
      }
    }
    ppvStack_7c = (void **)&local_34;
    local_8 = 0;
    ppvStack_7c = (void **)FUN_004107c0();
    FUN_0046f160();
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      ppvStack_7c = (void **)0x6acad2;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    ppvStack_7c = &local_24;
    (**(code **)(*(int *)*param_1 + 0x18))();
    FUN_006e8e70(&stack0xffffff80,0x1005801,0);
    FUN_00684a80();
    FID_conflict__free(local_24);
  }
  ExceptionList = local_10;
  return;
}

