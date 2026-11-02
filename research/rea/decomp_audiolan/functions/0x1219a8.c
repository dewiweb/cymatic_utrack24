// rea decompile_all
// name: FUN_001219a8
// address: 0x1219a8
// body: available
// range: 0x1219a8-0x121b5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001219a8(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  
  bVar1 = *(byte *)(param_2 + 0x24);
  uVar6 = 0;
  if (bVar1 == 0x10) {
    uVar6 = 0x20;
  }
  else if (bVar1 < 0x11) {
    if (bVar1 == 1) {
      uVar6 = 0x10;
    }
    else if (bVar1 == 3) {
      uVar6 = 0x11;
    }
    else {
      if (bVar1 != 4 && bVar1 != 5) goto LAB_00121b38;
      uVar6 = 0x12;
    }
  }
  else if (bVar1 == 0x11) {
    uVar6 = 0x21;
  }
  else {
    if (bVar1 != 0x12) {
      if (bVar1 == 0x13) {
        uVar6 = 0x30;
      }
      else if (bVar1 == 0x14) {
        uVar6 = 0x31;
      }
      goto LAB_00121b38;
    }
    uVar6 = 0x22;
  }
  FUN_0010f5fc(auStack_44,param_2 + 0x18);
  piVar2 = (int *)FUN_001d7998(param_1 + 1,auStack_44);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x38))(piVar2);
    FUN_00126d64(piVar2,0,3);
    FUN_0010f5fc(auStack_38,param_2 + 0x18);
    piVar5 = (int *)param_1[2];
    if (piVar5 != (int *)0x0) {
      for (piVar4 = (int *)piVar5[0x57]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[0x57]) {
        piVar5 = piVar4;
      }
      while (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x38))(piVar5);
        iVar3 = DAT_00121b5c;
        if (piVar5[0x43] != 0) {
          iVar3 = piVar5[0x43] + 0x40;
        }
        FUN_0010f5fc(auStack_2c,iVar3);
        iVar3 = FUN_0015e940(auStack_2c,auStack_38);
        if (iVar3 != 0) {
          FUN_00126d64(piVar5,0,3);
        }
        piVar4 = (int *)FUN_001d79fc(param_1 + 1,piVar5);
        (**(code **)(*piVar5 + 0x3c))(piVar5);
        piVar5 = piVar4;
      }
    }
    (**(code **)(*piVar2 + 0x3c))(piVar2);
  }
LAB_00121b38:
  FUN_0010f5fc(auStack_50,param_2 + 0x18);
  FUN_001477ec(*param_1,auStack_50,uVar6);
  return;
}

