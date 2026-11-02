// rea decompile_all
// name: FUN_00107218
// address: 0x107218
// body: available
// range: 0x107218-0x10757f inclusive
// range: 0x1075b8-0x10775f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00107218(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [128];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  uVar2 = FUN_0011eda0();
  FUN_000a0ec8(uVar2,0x18,1);
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  iVar3 = FUN_001b5998(uVar2);
  if (iVar3 == 0) {
    uVar2 = FUN_0011eda0();
    FUN_001205a0(uVar2,s_Browser_00107594);
  }
  else {
    uVar2 = FUN_0011eda0();
    FUN_001205a0(uVar2,s_Delete_Song_Menu_00107580);
  }
  iVar3 = FUN_00248aac(param_1 + 0x40,param_1 + 0x41);
  if (iVar3 != 0) {
    iVar3 = FUN_0022d260(param_1 + 0x41,u__MultiTrack_0010759c);
    if (iVar3 == 0) {
      FUN_000f4e84();
      uVar2 = FUN_000f4fc0();
      iVar3 = FUN_000952cc(uVar2);
      param_1[0x3f] = iVar3;
    }
    else {
      iVar3 = FUN_000c0a7c(param_1 + 6,param_1 + 0x41);
      if (iVar3 == 0) {
        uVar2 = FUN_00232084(auStack_28,param_1 + 0x41);
        FUN_000bcce4(param_1 + 6,uVar2,param_1 + 0x3c,0x2a);
        FUN_00232190(auStack_28);
        param_1[0x3f] = (int)(param_1 + 0x3c);
      }
      else {
        uVar2 = FUN_00232084(auStack_28,param_1 + 0x41);
        FUN_000bcce4(param_1 + 6,uVar2,param_1 + 0x3c,0x38);
        FUN_00232190(auStack_28);
        param_1[0x3f] = (int)(param_1 + 0x3c);
      }
    }
    uVar4 = FUN_0022d19c(param_1 + 0x41);
    uVar5 = FUN_0022d19c(param_1 + 0x40);
    if (uVar5 < uVar4) {
      param_1[0x32] = 0;
    }
    else {
      iVar3 = FUN_0022eebc(param_1 + 0x35);
      if (iVar3 == 0) {
        param_1[0x32] = 0;
      }
      else {
        piVar6 = (int *)FUN_00244128(param_1 + 0x35);
        param_1[0x32] = *piVar6;
        FUN_00244388(param_1 + 0x35);
        iVar3 = FUN_0022eebc(param_1 + 0x38);
        if (iVar3 != 0) {
          piVar6 = (int *)FUN_00244128(param_1 + 0x38);
          param_1[0x33] = *piVar6;
          FUN_00244388(param_1 + 0x38);
        }
      }
      uVar4 = FUN_0022e20c(param_1[0x3f]);
      if (uVar4 < (uint)param_1[0x32]) {
        param_1[0x32] = 0;
      }
    }
    FUN_0023223c(param_1 + 0x40,param_1 + 0x41);
  }
  iVar3 = FUN_0022e20c(param_1[0x3f]);
  if ((iVar3 != 0) && (iVar3 = FUN_000c0a7c(param_1 + 6,param_1 + 0x41), iVar3 == 0)) {
    for (iVar3 = FUN_0023adb0(param_1[0x3f]); iVar7 = FUN_0023ad98(param_1[0x3f]), iVar7 != iVar3;
        iVar3 = iVar3 + 8) {
      if (*(char *)(iVar3 + 4) == '\b') {
        *(undefined1 *)(iVar3 + 4) = 1;
      }
    }
  }
  iVar3 = FUN_0022e20c(param_1[0x3f]);
  if (iVar3 == 0) {
    uVar2 = FUN_0023299c(auStack_28,auStack_2c);
    FUN_0024331c(param_1 + 0x25,1,uVar2);
    FUN_002329f0(auStack_28);
    FUN_002393a0(param_1 + 0x2e,1,0);
    uVar2 = FUN_00232964(auStack_30,&LAB_00107760,auStack_2c);
    uVar8 = FUN_00243490(param_1 + 0x25,0);
    FUN_00232a4c(uVar8,uVar2);
    FUN_002329f0(auStack_30);
    puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,0);
    *puVar9 = 0x59;
  }
  else {
    uVar2 = FUN_0023299c(auStack_28,auStack_2c);
    uVar8 = FUN_0022e20c(param_1[0x3f]);
    FUN_0024331c(param_1 + 0x25,uVar8,uVar2);
    FUN_002329f0(auStack_28);
    uVar2 = FUN_0022e20c(param_1[0x3f]);
    FUN_002393a0(param_1 + 0x2e,uVar2,0);
    iVar7 = 0;
    for (iVar3 = FUN_0023adb0(param_1[0x3f]); iVar10 = FUN_0023ad98(param_1[0x3f]), iVar10 != iVar3;
        iVar3 = iVar3 + 8) {
      iVar10 = FUN_0022cefc(iVar3,&DAT_001075b4,0xffffffff);
      FUN_0022d1b0(auStack_b8,iVar3,iVar10 + 1,0xffffffff);
      uVar2 = FUN_0022d168(auStack_b8);
      FUN_001ff754(uVar2,auStack_b4,0x40);
      uVar2 = FUN_00232964(auStack_30,auStack_b4,auStack_34);
      uVar8 = FUN_00243490(param_1 + 0x25,iVar7);
      FUN_00232a4c(uVar8,uVar2);
      FUN_002329f0(auStack_30);
      bVar1 = *(byte *)(iVar3 + 4);
      if (bVar1 == 8) {
        puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
        *puVar9 = 0x57;
      }
      else if (bVar1 < 9) {
        if (bVar1 == 1) {
          puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
          *puVar9 = 0x55;
        }
        else if (bVar1 == 2) {
          puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
          *puVar9 = 0x47;
        }
        else if (bVar1 == 4) {
          puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
          *puVar9 = 0x56;
        }
      }
      else if (bVar1 == 0x10) {
        puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
        *puVar9 = 0x5a;
      }
      else if (bVar1 == 0x20) {
        puVar9 = (undefined1 *)FUN_002394ac(param_1 + 0x2e,iVar7);
        *puVar9 = 0x58;
      }
      FUN_00232190(auStack_b8);
      iVar7 = iVar7 + 1;
    }
  }
  FUN_00106fd4(param_1);
  (**(code **)(*param_1 + 0x74))(param_1,1);
  return;
}

