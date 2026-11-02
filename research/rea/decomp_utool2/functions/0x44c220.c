// rea decompile_all
// name: FUN_0044c220
// address: 0x44c220
// body: available
// range: 0x44c220-0x44c342 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044c220(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 *local_38;
  uint uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc7c8;
  local_10 = ExceptionList;
  uStack_34 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x9e) == '\0') {
    local_38 = (undefined4 *)0x44c258;
    FUN_006e7e60();
  }
  puStack_44 = (undefined1 *)&local_38;
  iStack_3c = 0;
  uStack_40 = 0x1002800;
  uStack_48 = 0x44c26a;
  FUN_006e8e70();
  puVar3 = param_1;
  iStack_3c = 0x44c274;
  FUN_00684a80();
  if (*(int *)(in_ECX + 0xd8) == 0) {
    local_38 = DAT_00c7ef98;
    iStack_3c = 0x44c292;
    FUN_00684c50();
    local_38 = &param_1;
    iStack_3c = 0x44c29d;
    (**(code **)(*(int *)*puVar3 + 0x6c))();
    iStack_3c = 0x44c2ac;
    puVar4 = (undefined4 *)FUN_00683640();
    local_8 = 0;
    if (*(char *)(puVar3 + 2) != '\0') {
      *(undefined1 *)(puVar3 + 2) = 0;
      local_38 = (undefined4 *)0x44c2c6;
      (**(code **)(*(int *)*puVar3 + 0x34))();
    }
    iStack_3c = 0x44c2ce;
    local_38 = puVar4;
    (**(code **)(*(int *)*puVar3 + 0x68))();
    local_8 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        iStack_3c = 1;
        uStack_40 = 0x44c2f2;
        (**(code **)*param_1)();
      }
    }
    iStack_3c = *(int *)(in_ECX + 0x1c) / 2;
    uStack_40 = *(undefined4 *)(in_ECX + 0x18);
    puStack_44 = (undefined1 *)0x0;
    uStack_48 = 0x44c30a;
    FUN_00472d90();
    iStack_3c = 1;
    uStack_40 = 0x24;
    FUN_0040e4d0(auStack_50);
    FUN_006830c0(in_ECX + 0xcc);
  }
  ExceptionList = local_10;
  return;
}

