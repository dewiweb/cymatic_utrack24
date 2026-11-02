// rea decompile_all
// name: FUN_00471780
// address: 0x471780
// body: available
// range: 0x471780-0x4718ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00471780(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701a48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    if ((char)in_ECX[9] == '\0') {
      if (*(char *)((int)in_ECX + 0x25) != '\0') {
        local_4c = (void *)0x0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        uStack_3c = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        local_30 = 1;
        local_8 = 0;
        FUN_00682020((float)(int)param_1[3]);
        local_1c = 0x3f800000;
        local_18 = 0;
        local_2c = 0x3f800000;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_00471340(&local_4c,&local_2c);
        FID_conflict__free(local_4c);
        goto LAB_004718d5;
      }
      FUN_0046de50(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      iVar3 = *(int *)*in_ECX;
      uVar2 = FUN_00473da0(&uStack_24,param_1);
    }
    else {
      if (1 < piVar1[1]) {
        piVar1 = (int *)(**(code **)(*piVar1 + 4))(&local_14);
        iVar3 = *in_ECX;
        *in_ECX = *piVar1;
        *piVar1 = iVar3;
        if (local_14 != (undefined4 *)0x0) {
          piVar1 = local_14 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_14)(1);
          }
        }
      }
      iVar3 = *(int *)*in_ECX;
      uVar2 = FUN_00464820(&uStack_24,param_1);
    }
    piVar1 = (int *)(**(code **)(iVar3 + 0xc))(&param_1,uVar2);
    iVar3 = *in_ECX;
    *in_ECX = *piVar1;
    *piVar1 = iVar3;
    if (param_1 != (undefined4 *)0x0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_1)(1);
      }
    }
  }
LAB_004718d5:
  ExceptionList = local_10;
  return *in_ECX != 0;
}

