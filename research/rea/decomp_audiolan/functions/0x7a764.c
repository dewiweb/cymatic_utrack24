// rea decompile_all
// name: FUN_0007a764
// address: 0x7a764
// body: available
// range: 0x7a764-0x7aa1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0007a764(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_28 [4];
  
  uVar1 = DAT_0007aa1c;
  piVar3 = (int *)FUN_0006fc90(param_1,s_BonjourBrowser_0007aa20,0,0x100,DAT_0007aa1c,DAT_0007aa1c,
                               DAT_0007aa1c,DAT_0007aa1c,DAT_0007aa1c,DAT_0007aa1c);
  iVar5 = _DAT_0007aa30;
  piVar3[0x47] = _DAT_0007aa30 + 0x60;
  piVar3[0x48] = iVar5 + 0x6c;
  piVar3[0x46] = iVar5 + 0x54;
  piVar3[0x45] = iVar5 + 0x48;
  *piVar3 = iVar5;
  piVar3[0x4a] = 0;
  FUN_001a07ac(piVar3 + 0x49,s_BonjourBrowser_0007aa20);
  piVar3[0x53] = 0;
  uVar2 = FUN_001a07ac(piVar3 + 0x52,s_BonjourBrowser_0007aa20);
  piVar3[0x5b] = 0;
  piVar3[0x5c] = 0;
  piVar8 = piVar3 + 0x5d;
  *piVar8 = 0;
  piVar3[0x61] = 0;
  piVar3[0x62] = 0;
  *(undefined1 *)(piVar3 + 99) = 0;
  *(undefined1 *)((int)piVar3 + 0x18d) = uVar2;
  piVar3[0x60] = 0;
  piVar3[0x5f] = 0;
  piVar3[0x5e] = 0;
  piVar4 = (int *)FUN_0010f82c(0xc,0);
  iVar5 = FUN_0010f82c(0x24,0);
  piVar4[2] = iVar5;
  *piVar4 = *piVar8;
  piVar4[1] = 1;
  *piVar8 = (int)piVar4;
  puVar6 = (undefined1 *)piVar4[2];
  piVar3[0x5f] = (int)puVar6;
  piVar3[0x60] = (int)(puVar6 + 0x24);
  piVar3[0x5f] = (int)(puVar6 + 0x24);
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  piVar3[0x61] = (int)puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(int *)(piVar3[0x61] + 8) = piVar3[0x61];
  iVar5 = piVar3[0x61];
  *(int *)(iVar5 + 0xc) = iVar5;
  piVar8 = piVar3 + 100;
  *piVar8 = 0;
  piVar3[0x68] = 0;
  piVar3[0x69] = 0;
  *(undefined1 *)(piVar3 + 0x6a) = 0;
  *(char *)((int)piVar3 + 0x1a9) = (char)iVar5;
  piVar3[0x67] = 0;
  piVar3[0x66] = 0;
  piVar3[0x65] = 0;
  piVar4 = (int *)FUN_0010f82c(0xc,0);
  iVar5 = FUN_0010f82c(0x48,0);
  piVar4[2] = iVar5;
  *piVar4 = *piVar8;
  piVar4[1] = 1;
  *piVar8 = (int)piVar4;
  iVar5 = piVar4[2];
  piVar3[0x66] = iVar5;
  piVar3[0x67] = iVar5 + 0x48;
  puVar6 = (undefined1 *)piVar3[0x66];
  piVar3[0x66] = (int)(puVar6 + 0x48);
  *(undefined4 *)(puVar6 + 8) = 0;
  *(undefined4 *)(puVar6 + 0xc) = 0;
  *puVar6 = 0;
  piVar3[0x68] = (int)puVar6;
  *(undefined4 *)(puVar6 + 4) = 0;
  *(int *)(piVar3[0x68] + 8) = piVar3[0x68];
  *(int *)(piVar3[0x68] + 0xc) = piVar3[0x68];
  piVar3[0x6b] = 0;
  iVar5 = FUN_0006d7e8(piVar3 + 0x6c,piVar3 + 0x48,s___TimerHandler_0007aa32 + 2,uVar1,uVar1,uVar1,
                       uVar1,uVar1);
  *(undefined4 *)(iVar5 + 0x120) = 10;
  *(undefined4 *)(iVar5 + 0x124) = 0x3c;
  *(undefined4 *)(iVar5 + 0x128) = 0;
  *(undefined4 *)(iVar5 + 300) = 0;
  *(undefined4 *)(iVar5 + 0x130) = 0;
  *(undefined4 *)(iVar5 + 0x134) = 0;
  *(undefined4 *)(iVar5 + 0x138) = 0;
  *(undefined4 *)(iVar5 + 0x13c) = 0;
  piVar3 = (int *)FUN_0010f82c(0xc,0);
  iVar7 = FUN_0010f82c(0xc,0);
  piVar3[2] = iVar7;
  *piVar3 = *(int *)(iVar5 + 0x128);
  piVar3[1] = 1;
  *(int *)(iVar5 + 0x128) = (int)piVar3;
  iVar7 = piVar3[2];
  *(int *)(iVar5 + 0x130) = iVar7;
  *(int *)(iVar5 + 0x134) = iVar7 + 0xc;
  *(int *)(iVar5 + 0x138) = iVar7;
  *(int *)(iVar5 + 0x130) = iVar7 + 0xc;
  *(int *)iVar7 = iVar7;
  *(int *)(*(int *)(iVar5 + 0x138) + 4) = *(int *)(iVar5 + 0x138);
  iVar7 = FUN_00041c14(s__cfg_AppSettings_Bonjour_0007aa44,local_28);
  if (iVar7 != 0) {
    FUN_00048ef8(local_28[0],s_SessionUpdateInterval_0007aa60,iVar5 + 0x120);
    FUN_00048ef8(local_28[0],s_RTSPReconnectionTime_0007aa78,iVar5 + 0x124);
    FUN_00041dd4(local_28[0]);
  }
  *(int *)(iVar5 + 0x120) = *(int *)(iVar5 + 0x120) * 1000;
  *(int *)(iVar5 + 0x124) = *(int *)(iVar5 + 0x124) * 1000;
  return iVar5 + -0x1b0;
}

