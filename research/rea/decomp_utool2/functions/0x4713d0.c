// rea decompile_all
// name: FUN_004713d0
// address: 0x4713d0
// body: available
// range: 0x4713d0-0x4715f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004713d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 **ppuStack_8c;
  void **ppvStack_88;
  undefined4 *puStack_84;
  undefined4 **ppuStack_80;
  uint uStack_7c;
  void *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007019d8;
  local_10 = ExceptionList;
  uStack_7c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  if (piVar1 != (int *)0x0) {
    if (1 < piVar1[1]) {
      ppuStack_80 = &local_14;
      puStack_84 = (undefined4 *)0x471412;
      piVar1 = (int *)(**(code **)(*piVar1 + 4))();
      iVar3 = *in_ECX;
      *in_ECX = *piVar1;
      *piVar1 = iVar3;
      if (local_14 != (undefined4 *)0x0) {
        piVar1 = local_14 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ppuStack_80 = (undefined4 **)0x1;
          puStack_84 = (undefined4 *)0x47142d;
          (**(code **)*local_14)();
        }
      }
    }
    if ((char)in_ECX[9] == '\0') {
      if (*(char *)((int)in_ECX + 0x25) == '\0') {
        piVar1 = (int *)*in_ECX;
        ppuStack_80 = (undefined4 **)local_38;
        puStack_84 = (undefined4 *)0x4714a3;
        uVar2 = FUN_0040e4d0();
        FUN_00473cc0(&ppuStack_8c,uVar2);
        ppuStack_80 = (undefined4 **)FUN_004727f0();
        puStack_84 = &param_1;
        ppvStack_88 = (void **)0x4714c9;
        piVar1 = (int *)(**(code **)(*piVar1 + 0x14))();
        iVar3 = *in_ECX;
        *in_ECX = *piVar1;
        *piVar1 = iVar3;
        if (param_1 != (undefined4 *)0x0) {
          piVar1 = param_1 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ppvStack_88 = (void **)0x1;
            ppuStack_8c = (undefined4 **)0x4714ec;
            (**(code **)*param_1)();
          }
        }
      }
      else {
        local_70 = (void *)0x0;
        local_6c = 0;
        local_68 = 0;
        local_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        local_54 = 1;
        ppuStack_80 = (undefined4 **)local_38;
        local_8 = 0;
        puStack_84 = (undefined4 *)0x471524;
        iVar3 = FUN_0040e4d0();
        ppuStack_80 = *(undefined4 ***)(iVar3 + 0xc);
        puStack_84 = (undefined4 *)0x471545;
        FUN_00682020();
        ppuStack_80 = (undefined4 **)(in_ECX + 1);
        puStack_84 = (undefined4 *)0x471551;
        FUN_00680060();
        ppuStack_80 = (undefined4 **)local_38;
        puStack_84 = (undefined4 *)local_28;
        ppvStack_88 = (void **)0x471560;
        (**(code **)(*(int *)*in_ECX + 0x2c))();
        ppvStack_88 = (void **)0x471567;
        iVar3 = FUN_0040e4d0();
        puStack_84 = *(undefined4 **)(iVar3 + 0xc);
        ppvStack_88 = (void **)0x471588;
        FUN_00682020();
        puStack_84 = &local_50;
        ppvStack_88 = &local_70;
        local_54 = 0;
        local_50 = 0x3f800000;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        local_40 = 0x3f800000;
        local_3c = 0;
        ppuStack_8c = &local_18;
        piVar1 = (int *)(**(code **)(*(int *)*in_ECX + 0x18))();
        iVar3 = *in_ECX;
        *in_ECX = *piVar1;
        *piVar1 = iVar3;
        if (local_18 != (undefined4 *)0x0) {
          piVar1 = local_18 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        FID_conflict__free(local_70);
      }
    }
    else {
      piVar1 = (int *)*in_ECX;
      ppuStack_80 = (undefined4 **)local_28;
      puStack_84 = (undefined4 *)0x471441;
      uVar2 = FUN_0040e4d0();
      FUN_00464850(&ppuStack_8c,uVar2);
      ppuStack_80 = (undefined4 **)FUN_004727f0();
      puStack_84 = &param_1;
      ppvStack_88 = (void **)0x471467;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x14))();
      iVar3 = *in_ECX;
      *in_ECX = *piVar1;
      *piVar1 = iVar3;
      if (param_1 != (undefined4 *)0x0) {
        piVar1 = param_1 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ppvStack_88 = (void **)0x1;
          ppuStack_8c = (undefined4 **)0x47148a;
          (**(code **)*param_1)();
        }
      }
    }
  }
  ExceptionList = local_10;
  return *in_ECX != 0;
}

