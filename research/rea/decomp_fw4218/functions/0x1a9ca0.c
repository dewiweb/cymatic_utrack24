// rea decompile_all
// name: FUN_001a9ca0
// address: 0x1a9ca0
// body: available
// range: 0x1a9ca0-0x1a9fd3 inclusive
// range: 0x1aa05c-0x1aa087 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a9eb0 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a9ca0(undefined4 param_1,int param_2,undefined4 param_3)

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
  piStack_68 = DAT_001a9fd4;
  local_64 = DAT_001a9fd4;
  piVar1 = (int *)FUN_0006f700(param_1,s_ShellThread_001a9fd8,0,DAT_001a9fd4,DAT_001a9fd4);
  iVar2 = DAT_001a9fe4;
  piVar1[0x30] = DAT_001a9fe4 + 0x30;
  *piVar1 = iVar2;
  iVar2 = FUN_0006cb8c(piVar1 + 0x31,0x14);
  iVar2 = FUN_0006c86c(iVar2 + 0x1c,iVar2 + -0xc4);
  iVar3 = FUN_0013879c(iVar2 + 0x1c);
  *(undefined1 *)(iVar3 + 0x14) = 0;
  *(undefined1 *)(iVar3 + 0x15) = 1;
  *(undefined1 *)(iVar3 + 0x16) = 0;
  *(int *)(iVar3 + 0x1c) = param_2;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined4 *)(iVar3 + 0x2c) = param_3;
  uVar4 = FUN_001f01c4(param_2 + 1,1);
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  uVar4 = FUN_001f01c4(*(int *)(iVar3 + 0x1c) + 1,1);
  *(undefined4 *)(iVar3 + 0xc) = uVar4;
  iVar5 = FUN_001f01c4(*(int *)(iVar3 + 0x1c) + 1,1);
  *(int *)(iVar3 + 0x18) = iVar5;
  bVar10 = *(int *)(iVar3 + 0x10) == 0;
  iVar2 = 0;
  if (!bVar10) {
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  if ((bVar10 || iVar2 == 0) || iVar5 == 0) {
    FUN_000028b4(DAT_001aa04c,s_6__P>A__Error__Could_not_allocat_001aa005 + 7);
  }
  else {
    puVar6 = (undefined4 *)FUN_000b1210(auStack_44);
    uVar4 = _DAT_001a9fe8;
    *puVar6 = _DAT_001a9fe8;
    uVar7 = FUN_000b4964();
    FUN_000b4840(uVar7,s___SystemDataService_001a9fea + 2,auStack_44);
    iVar2 = FUN_001b6c4c(auStack_44);
    pbVar8 = DAT_001aa000;
    if (iVar2 == 0) {
      pbVar8 = (byte *)(uint)*DAT_001aa000;
    }
    else {
      *DAT_001aa000 = 1;
    }
    if (iVar2 == 0 && pbVar8 == (byte *)0x0) {
      puVar9 = *(undefined1 **)(iVar3 + 0x18);
      *puVar9 = 0x73;
      puVar9[1] = 0x68;
      puVar9[2] = 0;
    }
    else {
      puVar6 = (undefined4 *)FUN_000b1210(&uStack_6c);
      *puVar6 = uVar4;
      uVar4 = FUN_000b4964();
      FUN_000b4840(uVar4,_DAT_001aa004,&uStack_6c);
      iVar2 = FUN_001b6c4c(&uStack_6c);
      if (iVar2 == 0) {
        FUN_000028b4(DAT_001aa04c,DAT_001aa050);
        FUN_000b1228(&uStack_6c);
      }
      else {
        iVar2 = (**(code **)(*local_64 + 0x1c))(local_64,iVar3);
        if (iVar2 == 0) {
          FUN_000028b4(DAT_001aa04c,DAT_001aa054);
          FUN_000b1228(&uStack_6c);
        }
        else {
          FUN_000b1228(&uStack_6c);
          local_20 = (int *)0x0;
          local_1c = (int *)0x0;
          FUN_001aaefc(auStack_58);
          piVar1 = (int *)0x0;
          FUN_001f00bc(s_6__P>A__Error__Could_not_allocat_001aa005._3_4_);
          if (local_1c == (int *)0x0) {
            if (local_20 != (int *)0x0) goto LAB_001a9eb0;
          }
          else {
            if (local_20 == (int *)0x0) {
LAB_001a9eb0:
                    /* WARNING: Subroutine does not return */
              FUN_00003538();
            }
            *local_1c = *local_1c + -1;
            if (*local_1c == 0) {
              FUN_001eecc8(local_1c);
              piVar1 = local_20;
            }
            local_20 = (int *)0x0;
            local_1c = (int *)0x0;
          }
          FUN_001f06d4(s_6__P>A__Error__Could_not_allocat_001aa005._3_4_);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 4))();
          }
          FUN_001bc44c(iVar3,auStack_58);
          iVar2 = FUN_000d6330(local_38,auStack_58);
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
            iVar2 = *DAT_001aa058;
          }
          FUN_00003cac(*(undefined4 *)(iVar3 + 0x18),iVar2,*(undefined4 *)(iVar3 + 0x1c));
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
          FUN_00201f54(local_38);
          *(undefined1 *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x1c)) = 0;
          FUN_001aafac(auStack_58);
        }
      }
    }
    FUN_000b1228(auStack_44);
  }
  return iVar3 + -0xfc;
}

