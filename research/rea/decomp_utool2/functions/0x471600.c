// rea decompile_all
// name: FUN_00471600
// address: 0x471600
// body: available
// range: 0x471600-0x471778 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00471600(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  void *local_58 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701a18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  if (piVar1 == (int *)0x0) goto LAB_0047175f;
  local_14 = in_ECX;
  if ((char)in_ECX[9] == '\0') {
    if (*(char *)((int)in_ECX + 0x25) == '\0') {
      FUN_0046de50(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      local_20 = (void *)0x0;
      local_1c = 0;
      local_18 = 0;
      local_8 = 1;
      iVar4 = *param_1;
      iVar3 = param_1[2] * 0x10 + iVar4;
      for (; iVar4 != iVar3; iVar4 = iVar4 + 0x10) {
        uVar2 = FUN_00473da0(&uStack_30,iVar4);
        FUN_0046f3a0(uVar2);
        in_ECX = local_14;
      }
      goto LAB_00471687;
    }
    uVar2 = FUN_00472960(local_58);
    local_8 = 2;
    local_28 = 0x3f800000;
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_24 = 0;
    FUN_00471340(uVar2,&local_38);
  }
  else {
    if (1 < piVar1[1]) {
      piVar1 = (int *)(**(code **)(*piVar1 + 4))(&local_14);
      iVar4 = *in_ECX;
      *in_ECX = *piVar1;
      *piVar1 = iVar4;
      if (local_14 != (int *)0x0) {
        piVar1 = local_14 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_14)(1);
        }
      }
    }
    FUN_00471990(param_1);
    local_8 = 0;
    FUN_00472a00(in_ECX[7],in_ECX[8]);
LAB_00471687:
    piVar1 = (int *)(**(code **)(*(int *)*in_ECX + 0x10))(&param_1,&local_20);
    iVar4 = *in_ECX;
    *in_ECX = *piVar1;
    *piVar1 = iVar4;
    local_58[0] = local_20;
    if (param_1 != (int *)0x0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_1)(1);
        local_58[0] = local_20;
      }
    }
  }
  FID_conflict__free(local_58[0]);
LAB_0047175f:
  ExceptionList = local_10;
  return *in_ECX != 0;
}

