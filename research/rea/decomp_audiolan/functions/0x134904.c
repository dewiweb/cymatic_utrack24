// rea decompile_all
// name: FUN_00134904
// address: 0x134904
// body: available
// range: 0x134904-0x134b4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00134904(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [16];
  
  if (param_2[0x38] == 0) {
    return (int *)0x0;
  }
  iVar1 = FUN_0016d7a4(0x80,DAT_00134b50);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00120528(iVar1,DAT_00134b58,DAT_00134b54);
  *puVar2 = DAT_00134b5c;
  iVar1 = FUN_0010f718(puVar2 + 0x19);
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  piVar7 = (int *)(iVar1 + -100);
  *(int **)(iVar1 + -4) = param_1;
  (**(code **)(*param_2 + 0x6c))(auStack_50,param_2);
  FUN_0010f738(iVar1,auStack_50);
  *(short *)(iVar1 + 0x10) = (short)param_2[0x37];
  iVar3 = FUN_00146600(param_2[0x38]);
  *(short *)(iVar1 + 0x12) = (short)iVar3;
  if (iVar3 == 0) {
LAB_00134a0c:
    if (*(int *)(iVar1 + 0x14) != 0) goto LAB_00134a18;
  }
  else {
    iVar4 = FUN_0016d774(iVar3 * 0xc,DAT_00134b50);
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_0016dd70(iVar4,DAT_00134b60,0xc,iVar3);
    }
    *(int *)(iVar1 + 0x14) = iVar5;
    if (iVar5 == 0) {
      *(undefined2 *)(iVar1 + 0x12) = 0;
      goto LAB_00134b34;
    }
    iVar3 = 0;
    if (*(short *)(iVar1 + 0x12) != 0) {
      do {
        FUN_00145ee8(param_2[0x38],*(int *)(iVar1 + 0x14) + iVar3 * 0xc);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(iVar1 + 0x12));
      goto LAB_00134a0c;
    }
LAB_00134a18:
    iVar3 = *(int *)(*(int **)(iVar1 + -4))[0x1f];
    uVar6 = DAT_00134b64;
    if (*(char *)(iVar3 + 0x15d) == '\0') {
      uVar6 = 0;
    }
    (**(code **)(**(int **)(iVar1 + -4) + 0xd4))(auStack_40);
    iVar3 = FUN_000fb7e0(piVar7,*(undefined4 *)(iVar1 + -4),auStack_40,iVar3 + 0x484,0,uVar6,0,
                         piVar7);
    if (iVar3 != 0) {
      FUN_00146670(auStack_60,0x40);
      uVar6 = FUN_0015e010(piVar7);
      FUN_0014650c(auStack_60,uVar6);
      FUN_0014650c(auStack_60,0);
      FUN_0014650c(auStack_60,0);
      uVar6 = FUN_0010f6a4(auStack_28,iVar1);
      (**(code **)(*param_1 + 0xd4))(auStack_34,param_1);
      FUN_00141084(*(undefined4 *)param_1[0x1f],auStack_34,uVar6,*(undefined2 *)(iVar1 + 0x10),0x81,
                   auStack_60);
      uVar6 = FUN_0015e010(piVar7);
      FUN_00126d8c(*(undefined4 *)(iVar1 + -4),uVar6,*(undefined2 *)(iVar1 + 0x12),
                   *(undefined4 *)(iVar1 + 0x14));
      FUN_001466c0(auStack_60);
      return piVar7;
    }
  }
  if (piVar7 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_00134b34:
  (**(code **)(*piVar7 + 4))(piVar7);
  return (int *)0x0;
}

