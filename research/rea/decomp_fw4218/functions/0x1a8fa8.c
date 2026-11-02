// rea decompile_all
// name: FUN_001a8fa8
// address: 0x1a8fa8
// body: available
// range: 0x1a8fa8-0x1a900b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001a95f4) */

void FUN_001a8fa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piStack_48;
  int *piStack_44;
  int *apiStack_40 [2];
  int iStack_38;
  int *piStack_34;
  int iStack_30;
  undefined1 auStack_28 [20];
  
  if (*(char *)(param_1 + 0x112) == '\0') {
    thunk_FUN_00002898(&DAT_001a900c);
  }
  FUN_0006c8ec(param_1 + 0xc4,*(undefined4 *)(param_1 + 0x10c));
  iVar1 = FUN_00003738(*(undefined4 *)(param_1 + 0x10c));
  *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar1) = 0xd;
  *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar1 + 1) = 0;
  uVar2 = FUN_000624d8();
  FUN_001b1b38(uVar2,*(undefined4 *)(param_1 + 0x10c));
  if (*DAT_001a9698 != '\0') {
    piStack_48 = (int *)0x0;
    piStack_44 = (int *)0x0;
    FUN_001aaefc(auStack_28,&piStack_48);
    piVar6 = (int *)0x0;
    FUN_001f00bc(DAT_001a969c);
    if (piStack_44 == (int *)0x0) {
      if (piStack_48 != (int *)0x0) goto LAB_001a94bc;
    }
    else {
      if (piStack_48 == (int *)0x0) {
LAB_001a94bc:
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      *piStack_44 = *piStack_44 + -1;
      if (*piStack_44 == 0) {
        FUN_001eecc8(piStack_44);
        piVar6 = piStack_48;
      }
      piStack_48 = (int *)0x0;
      piStack_44 = (int *)0x0;
    }
    FUN_001f06d4(DAT_001a969c);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    FUN_001bc44c(param_1 + 0xfc,auStack_28);
    iVar1 = FUN_000d6330(apiStack_40,auStack_28);
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      iVar1 = *DAT_001a96a0;
    }
    FUN_00003cac(*(undefined4 *)(param_1 + 0x114),iVar1,*(undefined4 *)(param_1 + 0x118));
    if (iStack_38 != 0) {
      if ((iStack_30 != 0) && (iStack_30 = iStack_30 + -1, iStack_30 == 0)) {
        iStack_30 = 0;
        (**(code **)(*piStack_34 + 0x20))(piStack_34,&iStack_38);
      }
      (**(code **)(*apiStack_40[0] + 0x10))(apiStack_40[0],&iStack_38);
    }
    if (iStack_38 != 0) {
      if (iStack_30 != 0) {
        iStack_30 = 0;
        (**(code **)(*piStack_34 + 0x20))(piStack_34,&iStack_38);
      }
      (**(code **)(*piStack_34 + 0x28))(piStack_34,&iStack_38);
    }
    FUN_00201f54(apiStack_40);
    *(undefined1 *)(*(int *)(param_1 + 0x114) + *(int *)(param_1 + 0x118)) = 0;
    FUN_001aafac(auStack_28);
  }
  iVar1 = FUN_00003738(*(undefined4 *)(param_1 + 0x114));
  iVar7 = *(int *)(param_1 + 0x114);
  uVar2 = FUN_00003738(*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x11c) = uVar2;
  FUN_000036d4(*(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x120) = 0;
  **(undefined1 **)(param_1 + 0x108) = 0;
  if (*(char *)(param_1 + 0x112) != '\0') {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x128);
  if (iVar5 < iVar1) {
    for (pcVar4 = (char *)((iVar1 - iVar5) + iVar7); *pcVar4 != '\0'; pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '/') goto LAB_001a967c;
    }
    pcVar4 = pcVar4 + -iVar5;
LAB_001a967c:
    pcVar3 = s_____s>_001a96a8;
  }
  else {
    pcVar4 = *(char **)(param_1 + 0x114);
    pcVar3 = &DAT_001a96a4;
  }
  FUN_00002898(pcVar3,pcVar4);
  thunk_FUN_00002898(&LAB_001a96b0,*(undefined4 *)(param_1 + 0x10c));
  return;
}

