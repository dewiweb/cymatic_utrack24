// rea decompile_all
// name: FUN_0006170c
// address: 0x6170c
// body: available
// range: 0x6170c-0x617db inclusive
// range: 0x61910-0x61beb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0006170c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  uVar8 = 1;
  iVar2 = FUN_00048ef8(param_3,s_OutputGroupID_000617dc,param_1 + 0x44);
  if (iVar2 == 0) {
    FUN_000028a4(s_I_ERROR__OutputGroup__Could_NOT_g_000618d2 + 2);
    return 0;
  }
  iVar2 = FUN_00043278(param_3,s_EnabledIn1xFS_000617ec,param_1 + 0x48);
  if (iVar2 == 0) {
    thunk_FUN_000028a4(s_ERROR__OutputGroup__Could_NOT_ge_000617fc);
  }
  iVar2 = FUN_00043278(param_3,s_EnabledIn2xFS_00061838,param_1 + 0x49);
  if (iVar2 == 0) {
    thunk_FUN_000028a4(s_ERROR__OutputGroup__Could_NOT_ge_00061848);
  }
  iVar2 = FUN_00043278(param_3,s_EnabledIn4xFS_00061884,param_1 + 0x4a);
  if (iVar2 == 0) {
    thunk_FUN_000028a4(s_ERROR__OutputGroup__Could_NOT_ge_00061894);
  }
  FUN_00061c54(param_1);
  FUN_00041e54(param_3);
  iVar2 = _DAT_000618d0;
  local_38 = _DAT_000618d0;
  iVar3 = FUN_00046580(param_3,&local_38);
  do {
    if (iVar3 == 0) {
      FUN_001da314(&local_38);
      return uVar8;
    }
    iVar3 = FUN_00041c14(local_38,&local_34);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_001a0808(0x30,1);
      uVar1 = local_34;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = param_1;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        *(undefined1 *)(piVar4 + 4) = 0;
        piVar4[5] = 0;
        piVar4[7] = iVar2;
        piVar4[6] = 0;
        piVar4[8] = iVar2;
        piVar4[9] = iVar2;
        piVar4[10] = iVar2;
        piVar4[0xb] = iVar2;
      }
      iVar3 = FUN_000420a8(local_34,piVar4 + 7);
      uVar5 = DAT_00061bec;
      if ((iVar3 == 0) ||
         (iVar3 = FUN_00048ef8(uVar1,DAT_00061bf0,piVar4 + 1), uVar5 = DAT_00061bf4, iVar3 == 0)) {
        FUN_000028a4(uVar5);
joined_r0x00061a64:
        if (piVar4 != (int *)0x0) {
          FUN_001da314(piVar4 + 0xb);
          FUN_001da314(piVar4 + 10);
          FUN_001da314(piVar4 + 9);
          FUN_001da314(piVar4 + 8);
          FUN_001da314(piVar4 + 7);
          FUN_0019f30c(piVar4);
        }
        uVar8 = 0;
      }
      else {
        iVar3 = FUN_00042a00(uVar1,DAT_00061bf8,piVar4 + 8);
        if (iVar3 == 0) {
          thunk_FUN_000028a4(DAT_00061bfc);
        }
        iVar3 = FUN_00042a00(uVar1,DAT_00061c00,piVar4 + 9);
        if (iVar3 == 0) {
          thunk_FUN_000028a4(DAT_00061c04);
        }
        iVar3 = FUN_000433b8(uVar1,DAT_00061c08,piVar4 + 2);
        if (iVar3 == 0) {
          thunk_FUN_000028a4(DAT_00061c0c);
        }
        iVar3 = FUN_00042a00(uVar1,DAT_00061c10,piVar4 + 10);
        if (iVar3 == 0) {
          thunk_FUN_000028a4(DAT_00061c14);
        }
        iVar3 = FUN_000433b8(uVar1,DAT_00061c18,piVar4 + 3);
        if (iVar3 == 0) {
          thunk_FUN_000028a4(DAT_00061c1c);
        }
        FUN_00048ef8(uVar1,_DAT_00061c20,piVar4 + 6);
        local_40 = *(int *)(param_1 + 0x38);
        iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 4);
        while (iVar3 != 0) {
          if (*(uint *)(iVar3 + 0x10) < (uint)piVar4[1]) {
            iVar3 = *(int *)(iVar3 + 0xc);
          }
          else {
            local_40 = iVar3;
            iVar3 = *(int *)(iVar3 + 8);
          }
        }
        local_2c = *(int *)(param_1 + 0x38);
        iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 4);
        while (iVar3 != 0) {
          if ((uint)piVar4[1] < *(uint *)(iVar3 + 0x10)) {
            local_2c = iVar3;
            iVar3 = *(int *)(iVar3 + 8);
          }
          else {
            iVar3 = *(int *)(iVar3 + 0xc);
          }
        }
        local_30 = local_40;
        local_3c = local_2c;
        iVar3 = 0;
        iVar6 = local_40;
        while (iVar6 != local_2c) {
          iVar3 = iVar3 + 1;
          iVar7 = *(int *)(iVar6 + 0xc);
          if (*(int *)(iVar6 + 0xc) == 0) {
            for (iVar7 = *(int *)(iVar6 + 4); iVar6 == *(int *)(iVar7 + 0xc);
                iVar7 = *(int *)(iVar7 + 4)) {
              iVar6 = iVar7;
            }
            if (*(int *)(iVar6 + 0xc) != iVar7) {
              iVar6 = iVar7;
            }
          }
          else {
            do {
              iVar6 = iVar7;
              iVar7 = *(int *)(iVar6 + 8);
            } while (*(int *)(iVar6 + 8) != 0);
          }
        }
        if (iVar3 != 0) {
          FUN_000028a4(s__ERROR__OutputGroup__Repeated_ou_00061c23 + 1);
          goto joined_r0x00061a64;
        }
        local_30 = piVar4[1];
        local_2c = 0;
        FUN_001cf0f4(&local_40,param_1 + 0x28,&local_30);
        *(int **)(local_40 + 0x14) = piVar4;
      }
      FUN_00041dd4(local_34);
    }
    iVar3 = FUN_00046580(param_3,&local_38);
  } while( true );
}

