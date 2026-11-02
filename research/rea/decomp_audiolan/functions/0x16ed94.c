// rea decompile_all
// name: FUN_0016ed94
// address: 0x16ed94
// body: available
// range: 0x16ed94-0x16ef73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016ed94(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int local_30 [4];
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  if ((code *)*DAT_0016ef74 == entry) {
    puVar1 = (undefined4 *)FUN_0019b388(0x2c);
  }
  else {
    puVar1 = (undefined4 *)(*(code *)*DAT_0016ef74)(0x2c);
  }
  *param_1 = (int)puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -4;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  iVar2 = FUN_001a5694(param_3,0,&local_1c);
  if (iVar2 < 0) {
    if (*param_1 == 0) goto LAB_0016ee56;
    pcVar5 = (code *)*DAT_0016ef78;
    if (pcVar5 == entry) {
LAB_0016edf6:
      FUN_0018a280();
      goto LAB_0016ee56;
    }
  }
  else {
    local_30[0] = FUN_001b91f6(local_1c);
    iVar2 = -1;
    if (local_30[0] != 0) {
      iVar2 = FUN_001a6f04(local_30[0],&DAT_0016ef7c);
      if (((iVar2 == 0) || (iVar2 = FUN_001a6f04(local_30[0],&DAT_0016ef80), iVar2 == 0)) ||
         (iVar2 = FUN_001a6f04(local_30[0],&DAT_0016ef84), iVar2 == 0)) {
        *(undefined4 *)*param_1 = 500;
        *(undefined4 *)(*param_1 + 0x18) = 0;
        *(undefined4 *)(*param_1 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
      }
      else {
        *(undefined4 *)*param_1 = 500;
        *(undefined4 *)(*param_1 + 0x18) = DAT_0016ef8c;
        *(undefined4 *)(*param_1 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + 0x1c) = 0xffffffff;
      }
      FUN_001a5664(param_3,0,&local_20);
      uVar3 = DAT_0016ef90;
      if ((local_20 == 0) || (*(int *)(local_20 + 4) == 0)) {
LAB_0016eed8:
        local_18 = 0;
        if (*(int *)(*(int *)(param_3 + 4) + 0x10) != 0) {
          uVar3 = FUN_001a1aa8();
        }
        FUN_001a7c44(*(int *)(param_3 + 4) + 0x14,s_maddr_0016ef98,&local_18);
        if ((local_18 == 0) || (*(int *)(local_18 + 4) == 0)) {
          iVar2 = *param_1;
          uVar4 = FUN_001a6f50(*(undefined4 *)(*(int *)(param_3 + 4) + 0xc));
          if (iVar2 == 0) goto LAB_0016ef52;
          if (*(int *)(iVar2 + 0x24) != 0) {
            pcVar5 = (code *)*DAT_0016ef78;
            if (pcVar5 != entry) goto LAB_0016eed2;
LAB_0016ef20:
            FUN_0018a280();
          }
        }
        else {
          iVar2 = *param_1;
          uVar4 = FUN_001a6f50();
          if (iVar2 == 0) goto LAB_0016ef52;
          iVar6 = *(int *)(iVar2 + 0x24);
          if (iVar6 != 0) {
            if ((code *)*DAT_0016ef78 == entry) {
              FUN_0018a280(iVar6);
            }
            else {
              (*(code *)*DAT_0016ef78)(iVar6);
            }
          }
        }
      }
      else {
        FUN_001a7c44(*(int *)(local_20 + 4) + 0x14,&DAT_0016ef94,local_30);
        if (local_30[0] == 0) {
          local_20 = 0;
          goto LAB_0016eed8;
        }
        if ((local_20 == 0) || (*(int *)(local_20 + 4) == 0)) goto LAB_0016eed8;
        if (*(int *)(*(int *)(local_20 + 4) + 0x10) != 0) {
          uVar3 = FUN_001a1aa8();
        }
        iVar2 = *param_1;
        uVar4 = FUN_001a6f50(*(undefined4 *)(*(int *)(local_20 + 4) + 0xc));
        if (iVar2 == 0) goto LAB_0016ef52;
        if (*(int *)(iVar2 + 0x24) != 0) {
          pcVar5 = (code *)*DAT_0016ef78;
          if (pcVar5 == entry) goto LAB_0016ef20;
LAB_0016eed2:
          (*pcVar5)();
        }
      }
      *(undefined4 *)(iVar2 + 0x24) = uVar4;
      *(undefined4 *)(iVar2 + 0x28) = uVar3;
LAB_0016ef52:
      *(undefined1 **)(*param_1 + 0xc) = &LAB_00007d00;
      FUN_001a44cc(*param_1 + 0x10,0);
      FUN_0017da6c(*param_1 + 0x10,*(undefined4 *)(*param_1 + 0xc));
      return 0;
    }
    if (*param_1 == 0) goto LAB_0016ee56;
    pcVar5 = (code *)*DAT_0016ef78;
    local_30[0] = 0;
    if (pcVar5 == entry) goto LAB_0016edf6;
    local_30[0] = 0;
  }
  (*pcVar5)();
LAB_0016ee56:
  *param_1 = 0;
  return iVar2;
}

