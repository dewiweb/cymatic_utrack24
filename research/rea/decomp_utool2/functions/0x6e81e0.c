// rea decompile_all
// name: FUN_006e81e0
// address: 0x6e81e0
// body: available
// range: 0x6e81e0-0x6e836f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e81e0(int *param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int *_Memory;
  undefined1 auStack_54 [4];
  undefined4 uStack_50;
  int *local_4c;
  int local_2c;
  int *local_28;
  undefined **local_24;
  undefined4 local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728b1d;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar5 = *(int *)(in_ECX + 0x90);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  local_28 = param_1;
  do {
    do {
      ExceptionList = ppvVar2;
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        *(undefined4 *)(in_ECX + 0xa4) = 0;
        local_24 = &PTR_vftable_00c7ed44;
        local_1c[0] = 0;
        local_8 = 0;
        local_4c = (int *)0x6e828e;
        (**(code **)(**(int **)(in_ECX + 0x94) + 8))();
        local_8 = 0xffffffff;
        local_4c = local_1c;
        uStack_50 = 0x6e82a1;
        (**(code **)(*local_24 + 0x54))();
        FUN_006e6400(auStack_54);
        FUN_006ce9f0(1);
        local_4c = &local_2c;
        uStack_50 = 0x6e82c6;
        piVar4 = (int *)FUN_006e25d0();
        if (*piVar4 != *local_28) goto LAB_006e82f0;
        iVar3 = 0;
        goto LAB_006e831c;
      }
      puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x88) + iVar5 * 4);
      ppvVar2 = ExceptionList;
    } while (((*(byte *)(puVar1 + 2) & 2) != 0) || (*(char *)*puVar1 == '\0'));
    if ((char *)*puVar1 == (char *)*param_1) break;
    local_4c = (int *)*puVar1;
    uStack_50 = 0x6e8251;
    iVar3 = FUN_00448730();
    ppvVar2 = ExceptionList;
    param_1 = local_28;
  } while (iVar3 != 0);
  local_4c = (int *)puVar1[1];
  uStack_50 = 0x6e82e1;
  FUN_006e83a0();
  goto LAB_006e8352;
  while (iVar5 != 0) {
LAB_006e82f0:
    iVar5 = FUN_00443260();
    iVar3 = FUN_00443260();
    if ((iVar5 - iVar3 != 0) && (iVar3 = (iVar5 - iVar3 >> 0x1f & 0xfffffffeU) + 1, iVar3 != 0))
    goto LAB_006e831c;
  }
  iVar3 = 0;
LAB_006e831c:
  piVar4 = local_28;
  _Memory = (int *)(local_2c + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar5 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_4c = (int *)0x6e833d;
      FID_conflict__free(_Memory);
    }
  }
  if (iVar3 != 0) {
    local_4c = piVar4;
    uStack_50 = 0x6e8352;
    FUN_006e4900();
  }
LAB_006e8352:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

