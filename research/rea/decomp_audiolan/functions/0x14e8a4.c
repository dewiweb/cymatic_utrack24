// rea decompile_all
// name: FUN_0014e8a4
// address: 0x14e8a4
// body: available
// range: 0x14e8a4-0x14ebd7 inclusive
// range: 0x14ec60-0x14ec8b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14eab4 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0014e8a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  bool bVar10;
  undefined4 uStack_6c;
  int *piStack_68;
  int *local_64;
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [12];
  int *local_38 [2];
  int local_30;
  int *local_2c;
  int local_28;
  int *local_20;
  int *local_1c;
  
  uStack_6c = 0x2000;
  piStack_68 = DAT_0014ebd8;
  local_64 = DAT_0014ebd8;
  piVar1 = (int *)FUN_0006e06c(param_1,s_ShellThread_0014ebdc,0,DAT_0014ebd8,DAT_0014ebd8);
  iVar2 = DAT_0014ebe8;
  piVar1[0x30] = DAT_0014ebe8 + 0x30;
  *piVar1 = iVar2;
  iVar2 = FUN_0006cb68(piVar1 + 0x31,0x14);
  iVar2 = FUN_0006c848(iVar2 + 0x1c,iVar2 + -0xc4);
  iVar3 = FUN_000e1e34(iVar2 + 0x1c);
  *(undefined1 *)(iVar3 + 0x14) = 0;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined1 *)(iVar3 + 0x16) = 0;
  *(int *)(iVar3 + 0x1c) = param_2;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = param_3;
  uVar4 = FUN_001a0808(param_2 + 1,1);
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  uVar4 = FUN_001a0808(*(int *)(iVar3 + 0x1c) + 1,1);
  *(undefined4 *)(iVar3 + 0xc) = uVar4;
  iVar5 = FUN_001a0808(*(int *)(iVar3 + 0x1c) + 1,1);
  *(int *)(iVar3 + 0x18) = iVar5;
  bVar10 = *(int *)(iVar3 + 0x10) == 0;
  iVar2 = 0;
  if (!bVar10) {
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  if ((bVar10 || iVar2 == 0) || iVar5 == 0) {
    FUN_000028c0(DAT_0014ec50,s_A__Error__Could_not_allocate_mem_0014ec0e + 2);
  }
  else {
    puVar6 = (undefined4 *)FUN_0008b800(auStack_44);
    uVar4 = _DAT_0014ebec;
    *puVar6 = _DAT_0014ebec;
    uVar7 = FUN_0008cf78();
    FUN_0008ce54(uVar7,s_0__SystemDataService_0014ebed + 3,auStack_44);
    iVar2 = FUN_00157fbc(auStack_44);
    pbVar8 = DAT_0014ec04;
    if (iVar2 == 0) {
      pbVar8 = (byte *)(uint)*DAT_0014ec04;
    }
    else {
      *DAT_0014ec04 = 1;
    }
    if (iVar2 == 0 && pbVar8 == (byte *)0x0) {
      puVar9 = *(undefined1 **)(iVar3 + 0x18);
      *puVar9 = 0x73;
      puVar9[1] = 0x68;
      puVar9[2] = 0;
    }
    else {
      puVar6 = (undefined4 *)FUN_0008b800(&uStack_6c);
      *puVar6 = uVar4;
      uVar4 = FUN_0008cf78();
      FUN_0008ce54(uVar4,DAT_0014ec08,&uStack_6c);
      iVar2 = FUN_00157fbc(&uStack_6c);
      if (iVar2 == 0) {
        FUN_000028c0(DAT_0014ec50,DAT_0014ec54);
        FUN_0008b818(&uStack_6c);
      }
      else {
        iVar2 = (**(code **)(*local_64 + 0x1c))(local_64,iVar3);
        if (iVar2 == 0) {
          FUN_000028c0(DAT_0014ec50,DAT_0014ec58);
          FUN_0008b818(&uStack_6c);
        }
        else {
          FUN_0008b818(&uStack_6c);
          local_20 = (int *)0x0;
          local_1c = (int *)0x0;
          FUN_0014f7b8(auStack_58);
          piVar1 = (int *)0x0;
          FUN_001a0700(_DAT_0014ec0c);
          if (local_1c == (int *)0x0) {
            if (local_20 != (int *)0x0) goto LAB_0014eab4;
          }
          else {
            if (local_20 == (int *)0x0) {
LAB_0014eab4:
                    /* WARNING: Subroutine does not return */
              FUN_000032f8();
            }
            *local_1c = *local_1c + -1;
            if (*local_1c == 0) {
              FUN_0019f30c(local_1c);
              piVar1 = local_20;
            }
            local_20 = (int *)0x0;
            local_1c = (int *)0x0;
          }
          FUN_001a0d18(_DAT_0014ec0c);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          FUN_0015cb88(iVar3,auStack_58);
          iVar2 = FUN_000a5a68(local_38,auStack_58);
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            iVar2 = *DAT_0014ec5c;
          }
          FUN_000038f4(*(undefined4 *)(iVar3 + 0x18),iVar2,*(undefined4 *)(iVar3 + 0x1c));
          if (local_30 != 0) {
            if ((local_28 != 0) && (local_28 = local_28 + -1, local_28 == 0)) {
              local_28 = 0;
              (**(code **)(*local_2c + 0x20))(local_2c,&local_30);
            }
            (**(code **)(*local_38[0] + 0x10))(local_38[0],&local_30);
          }
          if (local_30 != 0) {
            if (local_28 != 0) {
              local_28 = 0;
              (**(code **)(*local_2c + 0x20))(local_2c,&local_30);
            }
            (**(code **)(*local_2c + 0x28))(local_2c,&local_30);
          }
          FUN_001b98a8(local_38);
          *(undefined1 *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x1c)) = 0;
          FUN_0014f868(auStack_58);
        }
      }
    }
    FUN_0008b818(auStack_44);
  }
  return iVar3 + -0xfc;
}

